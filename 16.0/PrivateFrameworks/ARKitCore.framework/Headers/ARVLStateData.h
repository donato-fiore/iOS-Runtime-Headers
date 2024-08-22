// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARVLSTATEDATA_H
#define ARVLSTATEDATA_H

@class NSString, CLLocation;
@protocol ARDaemonSecureCoding, NSCopying, ARResultData;

#import <Foundation/Foundation.h>

#import "ARGeoTrackingStatus.h"

@interface ARVLStateData : NSObject <ARDaemonSecureCoding, NSCopying, ARResultData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat fusedReplayHeading; // ivar: _fusedReplayHeading
@property (readonly, nonatomic) CGFloat fusedReplayHeadingTimestamp; // ivar: _fusedReplayHeadingTimestamp
@property (readonly, nonatomic) CLLocation *fusedReplayLocation; // ivar: _fusedReplayLocation
@property (readonly, nonatomic) CGFloat fusedReplayLocationTimestamp; // ivar: _fusedReplayLocationTimestamp
@property (readonly, nonatomic) BOOL hasReturnedAvailabilityCheck; // ivar: _hasReturnedAvailabilityCheck
@property (readonly, nonatomic) BOOL hasReturnedLocalization; // ivar: _hasReturnedLocalization
@property (readonly, nonatomic) BOOL hasStartedAvailabilityCheck; // ivar: _hasStartedAvailabilityCheck
@property (readonly, nonatomic) BOOL hasStartedLocalization; // ivar: _hasStartedLocalization
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeSinceInitialization; // ivar: _timeSinceInitialization
@property (readonly, nonatomic) CGFloat timeSinceLastLocalization; // ivar: _timeSinceLastLocalization
@property (readonly, nonatomic) ARGeoTrackingStatus *trackingStatus; // ivar: _trackingStatus


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init:(CGFloat)arg0 timeSinceInitialization:(CGFloat)arg1 trackingStatus:(id)arg2 fusedReplayLocation:(id)arg3 fusedReplayLocationTimestamp:(CGFloat)arg4 fusedReplayHeading:(CGFloat)arg5 fusedReplayHeadingTimestamp:(CGFloat)arg6 hasStartedAvailabilityCheck:(BOOL)arg7 hasReturnedAvailabilityCheck:(BOOL)arg8 hasStartedLocalization:(BOOL)arg9 hasReturnedLocalization:(BOOL)arg10 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif