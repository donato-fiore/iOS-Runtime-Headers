// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERARECORDINGREACHABILITYLOGEVENT_H
#define HMDCAMERARECORDINGREACHABILITYLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;


#import "HMDAccessoryVersion.h"

@interface HMDCameraRecordingReachabilityLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL didCreateEventModel; // ivar: _didCreateEventModel
@property (readonly) HMDAccessoryVersion *firmwareVersion; // ivar: _firmwareVersion
@property (readonly) NSUInteger hash;
@property (readonly) NSString *manufacturer; // ivar: _manufacturer
@property (readonly) NSString *model; // ivar: _model
@property (readonly) CGFloat offlineDuration; // ivar: _offlineDuration
@property (readonly) NSUInteger reachabilityChangeDebounceCount; // ivar: _reachabilityChangeDebounceCount
@property (readonly) BOOL reachable; // ivar: _reachable
@property (readonly) Class superclass;


-(id)initWithReachability:(BOOL)arg0 didCreateEventModel:(BOOL)arg1 reachabilityChangeDebounceCount:(NSUInteger)arg2 offlineDuration:(CGFloat)arg3 hapAccessory:(id)arg4 ;


@end


#endif