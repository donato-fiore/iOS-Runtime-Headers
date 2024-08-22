// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKCONTEXTFREEGRAMMAR_H
#define _HKCONTEXTFREEGRAMMAR_H

@class NSMutableSet, NSCharacterSet;

#import <Foundation/Foundation.h>

#import "_HKCFGNonTerminal.h"

@interface _HKContextFreeGrammar : NSObject {
    NSMutableSet *_nonTerminals;
    NSMutableSet *_terminals;
    NSCharacterSet *_terminalCharacters;
}


@property (readonly, copy, nonatomic) id *emptyStringEvaluator; // ivar: _emptyStringEvaluator
@property (readonly, nonatomic) _HKCFGNonTerminal *rootNonTerminal; // ivar: _rootNonTerminal


+(id)grammarWithRootNonTerminal:(id)arg0 ;
+(id)grammarWithRootNonTerminal:(id)arg0 emptyStringEvaluator:(id)arg1 ;
-(id)initWithRootNonTerminal:(id)arg0 emptyStringEvaluator:(id)arg1 ;
-(id)parseTreeForString:(id)arg0 ;
-(void)_gatherExpressions;
-(void)_gatherExpressionsStartingAt:(id)arg0 ;
-(void)invalidate;


@end


#endif