// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GKBLOCKRULE_H
#define _GKBLOCKRULE_H



#import "GKRule.h"

@interface _GKBlockRule : GKRule {
    id *_predicate;
    id *_action;
}




-(BOOL)evaluatePredicateWithSystem:(id)arg0 ;
// -(id)initWithPredicate:(id)arg0 action:(unk)arg1  ;
-(void)performActionWithSystem:(id)arg0 ;


@end


#endif