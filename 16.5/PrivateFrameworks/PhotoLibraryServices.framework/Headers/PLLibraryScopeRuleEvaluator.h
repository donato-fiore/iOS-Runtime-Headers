// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLLIBRARYSCOPERULEEVALUATOR_H
#define PLLIBRARYSCOPERULEEVALUATOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PLLibraryScopeRuleInterpreter.h"

@interface PLLibraryScopeRuleEvaluator : NSObject

@property (retain, nonatomic) PLLibraryScopeRuleInterpreter *interpreter; // ivar: _interpreter
@property (retain, nonatomic) NSArray *rules; // ivar: _rules


-(id)description;
-(id)evaluateObjects:(id)arg0 withResultEnumerationBlock:(id)arg1 ;
-(id)initWithRules:(id)arg0 andInterpreter:(id)arg1 ;


@end


#endif