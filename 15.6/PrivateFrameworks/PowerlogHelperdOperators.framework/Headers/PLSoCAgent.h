// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSOCAGENT_H
#define PLSOCAGENT_H

@class PLAgent;



@interface PLSoCAgent : PLAgent



+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionLifetimeServoStats;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(id)requestLTSStats;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)logEventPointLifetimeServoStats:(id)arg0 ;
-(void)registerForTaskingEndNotification;
-(void)registerForTaskingStartNotification;
-(void)taskingEndNotificationReceived:(id)arg0 ;
-(void)taskingStartNotificationReceived:(id)arg0 ;


@end


#endif