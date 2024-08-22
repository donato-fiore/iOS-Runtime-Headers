// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPERSISTENTCONNECTIONAGENT_H
#define PLPERSISTENTCONNECTIONAGENT_H

@class PLAgent, PLCFNotificationOperatorComposition;



@interface PLPersistentConnectionAgent : PLAgent

@property (readonly) PLCFNotificationOperatorComposition *intervalChangedNotification; // ivar: _intervalChangedNotification
@property (readonly) PLCFNotificationOperatorComposition *preferencesChangedNotification; // ivar: _preferencesChangedNotification


+(id)accountingGroupDefinitions;
+(id)defaults;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(id)railDefinitions;
+(void)load;
-(BOOL)pushEnabled;
-(NSInteger)pollingInterval;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventForwardConfig;
-(void)logEventPointCache;


@end


#endif