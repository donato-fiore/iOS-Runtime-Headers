// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARWORLDTRACKINGPOSEDATA_H
#define ARWORLDTRACKINGPOSEDATA_H

@class NSString;
@protocol ARResultData, ARDaemonSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ARVideoFormat.h"
#import "ARLineCloud.h"
#import "ARSLAMState.h"
#import "ARWorldTrackingState.h"

@interface ARWorldTrackingPoseData : NSObject <ARResultData, ARDaemonSecureCoding, NSCopying>



@property (nonatomic) ? cameraTransform; // ivar: _cameraTransform
@property (nonatomic) CGFloat currentStateTimestamp; // ivar: _currentStateTimestamp
@property (retain, nonatomic) ARVideoFormat *currentlyActiveVideoFormat; // ivar: _currentlyActiveVideoFormat
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat lastInertialTimestamp; // ivar: _lastInertialTimestamp
@property (retain, nonatomic) ARLineCloud *lineCloud; // ivar: _lineCloud
@property (retain, nonatomic) ARSLAMState *slamState; // ivar: _slamState
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) ? visionCameraTransform; // ivar: _visionCameraTransform
@property (nonatomic) NSInteger worldMappingStatus; // ivar: _worldMappingStatus
@property (copy, nonatomic) ARWorldTrackingState *worldTrackingState; // ivar: _worldTrackingState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif