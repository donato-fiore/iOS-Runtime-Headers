// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLOCALEAGENT_H
#define PLLOCALEAGENT_H

@class PLAgent, PLNSNotificationOperatorComposition;



@interface PLLocaleAgent : PLAgent

@property (retain) PLNSNotificationOperatorComposition *timeNotification; // ivar: _timeNotification


+(id)accountingGroupDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(id)railDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventForwardTimeZone;
-(void)logEventForwardTimeZoneWithTrigger:(id)arg0 ;


@end


#endif