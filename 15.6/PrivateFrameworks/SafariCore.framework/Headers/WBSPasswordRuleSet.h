// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDRULESET_H
#define WBSPASSWORDRULESET_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "WBSAllowedPasswordRule.h"
#import "WBSMaxConsecutivePasswordRule.h"
#import "WBSMaxLengthPasswordRule.h"
#import "WBSMinLengthPasswordRule.h"

@interface WBSPasswordRuleSet : NSObject

@property (readonly, nonatomic) WBSAllowedPasswordRule *allowedRule; // ivar: _allowedRule
@property (readonly, nonatomic) WBSMaxConsecutivePasswordRule *maxConsecutiveRule; // ivar: _maxConsecutiveRule
@property (readonly, nonatomic) WBSMaxLengthPasswordRule *maxLengthRule; // ivar: _maxLengthRule
@property (readonly, nonatomic) WBSMinLengthPasswordRule *minLengthRule; // ivar: _minLengthRule
@property (readonly, copy, nonatomic) NSArray *requiredRules; // ivar: _requiredRules


+(id)ruleSetWithAllowedRule:(id)arg0 requiredRules:(id)arg1 maxConsecutiveRule:(id)arg2 ;
+(id)ruleSetWithAllowedRule:(id)arg0 requiredRules:(id)arg1 maxConsecutiveRule:(id)arg2 minLengthRule:(id)arg3 maxLengthRule:(id)arg4 ;
-(id)initWithAllowedRule:(id)arg0 requiredRules:(id)arg1 maxConsecutiveRule:(id)arg2 minLengthRule:(id)arg3 maxLengthRule:(id)arg4 ;


@end


#endif