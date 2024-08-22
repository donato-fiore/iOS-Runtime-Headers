// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACCOUNTINGOPERATOR_H
#define PLACCOUNTINGOPERATOR_H

@class NSMutableDictionary, NSSet;


#import "PLOperator.h"

@interface PLAccountingOperator : PLOperator

@property (retain) NSMutableDictionary *ruleIDToPendingJobs; // ivar: _ruleIDToPendingJobs
@property (retain, nonatomic) NSSet *rules; // ivar: _rules


+(id)entryAggregateDefinitionEnergy;
+(id)entryAggregateDefinitionQualificationEnergy;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitionDistributionEvents;
+(id)entryEventBackwardDefinitionPowerEvents;
+(id)entryEventBackwardDefinitionQualificationEvents;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionDistributionEvents;
+(id)entryEventForwardDefinitionPowerEvents;
+(id)entryEventForwardDefinitionQualificationEvents;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitionDistributionEvents;
+(id)entryEventIntervalDefinitionEnergyEstimateEvents;
+(id)entryEventIntervalDefinitionPowerEvents;
+(id)entryEventIntervalDefinitionQualificationEvents;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitionDistributionRules;
+(id)entryEventNoneDefinitionNodes;
+(id)entryEventNoneDefinitionQualificationRules;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionDistributionEvents;
+(id)entryEventPointDefinitionQualificationEvents;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(id)trimConditionsForEntryKey:(id)arg0 forTrimDate:(id)arg1 ;
-(void)initOperatorDependancies;
-(void)startAccounting;
-(void)stopAccounting;


@end


#endif