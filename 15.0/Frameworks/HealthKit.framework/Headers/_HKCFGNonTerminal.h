// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKCFGNONTERMINAL_H
#define _HKCFGNONTERMINAL_H

@class HKCFGExpression, NSString, NSMutableArray, NSCharacterSet;



@interface _HKCFGNonTerminal : HKCFGExpression {
    NSString *_label;
    NSMutableArray *_replacementRules;
}


@property (copy, nonatomic) NSCharacterSet *charactersToBeSkipped; // ivar: _charactersToBeSkipped


+(id)nonTerminalWithLabel:(id)arg0 ;
-(BOOL)_tryNodesForExpressions:(id)arg0 nodes:(id)arg1 context:(id)arg2 solutionTest:(id)arg3 ;
-(NSUInteger)_minimumLength;
-(id)_label;
-(id)_parseTreeWithContext:(id)arg0 ;
-(id)_replacementRules;
-(id)initWithLabel:(id)arg0 ;
-(void)_checkForCycles;
-(void)_checkForCycles:(id)arg0 ;
-(void)_invalidate;
-(void)_tryNodesWithContext:(id)arg0 solutionTest:(id)arg1 ;
-(void)addReplacementRuleWithExpressions:(id)arg0 nodeEvaluator:(id)arg1 ;


@end


#endif