// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARWORLDTRACKINGSTATE_H
#define ARWORLDTRACKINGSTATE_H

@class NSArray;
@protocol NSCopying, ARDaemonSecureCoding;

#import <Foundation/Foundation.h>

#import "ARInertialState.h"

@interface ARWorldTrackingState : NSObject <NSCopying, ARDaemonSecureCoding>



@property (retain, nonatomic) NSArray *collaborationStats; // ivar: _collaborationStats
@property (nonatomic) NSUInteger currentVIOMapSize; // ivar: _currentVIOMapSize
@property (retain, nonatomic) ARInertialState *inertialState; // ivar: _inertialState
@property (nonatomic) CGFloat lastMajorRelocalizationTimestamp; // ivar: _lastMajorRelocalizationTimestamp
@property (nonatomic) BOOL majorRelocalization; // ivar: _majorRelocalization
@property (nonatomic) ? majorRelocalizationCameraTransform; // ivar: _majorRelocalizationCameraTransform
@property (retain, nonatomic) NSArray *mergedSessionIdentifiers; // ivar: _mergedSessionIdentifiers
@property (nonatomic) BOOL minorRelocalization; // ivar: _minorRelocalization
@property (nonatomic) NSUInteger numberOfCameraSwitches; // ivar: _numberOfCameraSwitches
@property (nonatomic) CGFloat originTimestamp; // ivar: _originTimestamp
@property (nonatomic) BOOL poseGraphUpdated; // ivar: _poseGraphUpdated
@property (nonatomic) CGFloat poseTimestamp; // ivar: _poseTimestamp
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (nonatomic) NSUInteger reinitializationAttempts; // ivar: _reinitializationAttempts
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSInteger vioTrackingState; // ivar: _vioTrackingState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif