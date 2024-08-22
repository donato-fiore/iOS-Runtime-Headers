// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERARECORDINGREACHABILITYLOGEVENT_H
#define HMDCAMERARECORDINGREACHABILITYLOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMMCoreAnalyticsLogging;


#import "HMDAccessoryVersion.h"

@interface HMDCameraRecordingReachabilityLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) BOOL didCreateEventModel; // ivar: _didCreateEventModel
@property (readonly) HMDAccessoryVersion *firmwareVersion; // ivar: _firmwareVersion
@property (readonly) NSString *manufacturer; // ivar: _manufacturer
@property (readonly) NSString *model; // ivar: _model
@property (readonly) CGFloat offlineDuration; // ivar: _offlineDuration
@property (readonly) NSUInteger reachabilityChangeDebounceCount; // ivar: _reachabilityChangeDebounceCount
@property (readonly) BOOL reachable; // ivar: _reachable


-(id)eventName;
-(id)initWithReachability:(BOOL)arg0 didCreateEventModel:(BOOL)arg1 reachabilityChangeDebounceCount:(NSUInteger)arg2 offlineDuration:(CGFloat)arg3 hapAccessory:(id)arg4 ;
-(id)serializedEvent;


@end


#endif