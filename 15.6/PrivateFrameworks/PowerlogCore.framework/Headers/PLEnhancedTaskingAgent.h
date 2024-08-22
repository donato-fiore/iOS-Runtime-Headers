// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLENHANCEDTASKINGAGENT_H
#define PLENHANCEDTASKINGAGENT_H



#import "PLAgent.h"

@interface PLEnhancedTaskingAgent : PLAgent



+(id)allowlistForSignpostAggregatedData;
+(id)defaults;
+(id)entryEventIntervalDefinitionInProcessAnimation;
+(id)entryEventIntervalDefinitionScrollView;
+(id)entryEventIntervalDefinitionUINavigationController;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitionAppSwitchTrigger;
+(id)entryEventNoneDefinitions;
+(void)load;
+(void)logAggregatedDataFromSignpostWithStartDate:(id)arg0 withEndDate:(id)arg1 ;
-(id)aggregatedSignpostDataWithEntryKey:(id)arg0 withStartDate:(id)arg1 withEndDate:(id)arg2 withSignpostName:(id)arg3 withProcess:(id)arg4 withDataDict:(id)arg5 ;
-(id)init;
-(int)getSignpostNameValueGroupTypeFor:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)logAggregatedDataFromSignpostWithPayload:(id)arg0 withStartDate:(id)arg1 withEndDate:(id)arg2 ;


@end


#endif