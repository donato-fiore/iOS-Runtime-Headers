// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKCFGNONTERMINALNODE_H
#define _HKCFGNONTERMINALNODE_H

@class HKCFGNode, NSArray;


#import "_HKCFGReplacementRule.h"

@interface _HKCFGNonTerminalNode : HKCFGNode {
    NSArray *_nodes;
    id *_value;
}


@property (readonly, nonatomic) _HKCFGReplacementRule *rule; // ivar: _rule


+(id)nodeWithChildren:(id)arg0 rule:(id)arg1 rangeOfString:(struct _NSRange )arg2 ;
-(id)evaluate;


@end


#endif