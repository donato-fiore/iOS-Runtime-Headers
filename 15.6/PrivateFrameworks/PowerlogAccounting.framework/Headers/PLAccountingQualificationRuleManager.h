// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLACCOUNTINGQUALIFICATIONRULEMANAGER_H
#define PLACCOUNTINGQUALIFICATIONRULEMANAGER_H

@class NSRegularExpression, NSMutableDictionary;


#import "PLAccountingRuleManager.h"

@interface PLAccountingQualificationRuleManager : PLAccountingRuleManager {
    NSRegularExpression *_regex;
}


@property (retain, nonatomic) NSMutableDictionary *qualificationIDToQualificationRules; // ivar: _qualificationIDToQualificationRules
@property (retain, nonatomic) NSMutableDictionary *rootNodeIDToQualificationRules; // ivar: _rootNodeIDToQualificationRules


+(id)rulesEntryKey;
+(id)rulesPath;
+(id)sharedInstance;
-(id)qualificationRulesForQualificationID:(id)arg0 ;
-(id)qualificationRulesForRootNodeID:(id)arg0 ;
-(id)regex;
-(id)ruleWithString:(id)arg0 withEntryDate:(id)arg1 ;
-(void)indexRule:(id)arg0 ;
-(void)setRegex:(id)arg0 ;


@end


#endif