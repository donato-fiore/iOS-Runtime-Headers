// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPROCESSMEMORYPRESSURENOTIFICATIONLOGEVENT_H
#define HMDPROCESSMEMORYPRESSURENOTIFICATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDProcessMemoryPressureNotificationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSString *dataSyncState; // ivar: _dataSyncState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *processMemoryState; // ivar: _processMemoryState
@property (readonly) Class superclass;


+(id)createEventWithProcessMemoryState:(id)arg0 dataSyncState:(id)arg1 ;
-(id)initWithProcessMemoryState:(id)arg0 dataSyncState:(id)arg1 ;


@end


#endif