// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NUBLOCKRULE_H
#define _NUBLOCKRULE_H



#import "NURule.h"

@interface _NUBlockRule : NURule {
    id *_predicate;
    id *_action;
}




-(BOOL)evaluatePredicateWithSystem:(id)arg0 ;
// -(id)initWithPredicate:(id)arg0 action:(unk)arg1  ;
-(void)performActionWithSystem:(id)arg0 ;


@end


#endif