// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKNOTIFICATIONSCREENLOCKIMPUTEDMONITOR_H
#define _DKNOTIFICATIONSCREENLOCKIMPUTEDMONITOR_H

@class DKMonitor, _DKEvent, NSString, NSDate;
@protocol _DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor;



@interface _DKNotificationScreenLockImputedMonitor : DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor>

 {
    BOOL _enabled;
}


@property (readonly, nonatomic) _DKEvent *currentEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *historicalHandler;
@property (copy, nonatomic) id *instantHandler;
@property (readonly, nonatomic) NSDate *lastUpdate;
@property (copy, nonatomic) id *shutdownHandler;
@property (readonly) Class superclass;


+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithState:(id)arg0 ;
+(id)entitlements;
+(id)eventStream;
+(void)setIsLocked:(BOOL)arg0 ;
-(id)fetchMostRecentScreenLockStateEventFromKnowledgeStore;
-(void)deactivate;
-(void)dealloc;
-(void)receiveNotificationEvent:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;


@end


#endif