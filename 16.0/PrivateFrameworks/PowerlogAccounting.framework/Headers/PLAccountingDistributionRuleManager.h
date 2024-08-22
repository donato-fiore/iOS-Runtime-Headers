// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLACCOUNTINGDISTRIBUTIONRULEMANAGER_H
#define PLACCOUNTINGDISTRIBUTIONRULEMANAGER_H

@class NSRegularExpression, NSMutableDictionary;


#import "PLAccountingRuleManager.h"

@interface PLAccountingDistributionRuleManager : PLAccountingRuleManager {
    NSRegularExpression *_regex;
}


@property (retain, nonatomic) NSMutableDictionary *distributionIDToDistributionRules; // ivar: _distributionIDToDistributionRules
@property (retain, nonatomic) NSMutableDictionary *rootNodeIDToNodeIDToDistributionRule; // ivar: _rootNodeIDToNodeIDToDistributionRule


+(id)rulesEntryKey;
+(id)rulesPath;
+(id)sharedInstance;
-(id)distributionRuleForRootNodeID:(id)arg0 andNodeID:(id)arg1 ;
-(id)distributionRulesForDistributionID:(id)arg0 ;
-(id)regex;
-(id)ruleWithString:(id)arg0 withEntryDate:(id)arg1 ;
-(void)indexRule:(id)arg0 ;
-(void)setRegex:(id)arg0 ;


@end


#endif