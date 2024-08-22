// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPROCESSMEMORYPRESSURENOTIFICATIONLOGEVENT_H
#define HMDPROCESSMEMORYPRESSURENOTIFICATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging, HMDAWDLogEvent;



@interface HMDProcessMemoryPressureNotificationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging, HMDAWDLogEvent>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *dataSyncState; // ivar: _dataSyncState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *processMemoryState; // ivar: _processMemoryState
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly) Class superclass;


+(id)createEventWithProcessMemoryState:(id)arg0 dataSyncState:(id)arg1 ;
-(id)initWithProcessMemoryState:(id)arg0 dataSyncState:(id)arg1 ;
-(id)metricForAWD;
-(unsigned int)AWDMessageType;


@end


#endif