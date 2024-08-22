// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POWERUICALENDARSIGNALMONITOR_H
#define POWERUICALENDARSIGNALMONITOR_H

@class EKEventStore, NSString;
@protocol PowerUISignalMonitor, PowerUISignalMonitorDelegate, OS_os_log;

#import <Foundation/Foundation.h>


@interface PowerUICalendarSignalMonitor : NSObject <PowerUISignalMonitor>



@property (retain, nonatomic) EKEventStore *calendar; // ivar: _calendar
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PowerUISignalMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;


+(id)monitorWithDelegate:(id)arg0 ;
+(id)monitorWithDelegate:(id)arg0 trialManager:(id)arg1 withContext:(id)arg2 withKnowledgeStore:(id)arg3 ;
-(BOOL)isEventEligible:(id)arg0 AtTime:(id)arg1 ;
-(NSUInteger)signalID;
-(id)detectedSignals;
-(id)initWithDelegate:(id)arg0 trialManager:(id)arg1 withContext:(id)arg2 withKnowledgeStore:(id)arg3 ;
-(id)nextFlightEventWithEvents:(id)arg0 ;
-(id)nextRelevantDeadlineWithEvents:(id)arg0 ;
-(id)requiredFullChargeDate;
-(id)upcomingEvents;
-(void)sourceInformationChangedNotification:(id)arg0 ;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif