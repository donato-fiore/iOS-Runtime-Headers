// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSPREDICATEBLOCKRULE_H
#define _NSPREDICATEBLOCKRULE_H



#import "NSPredicateRule.h"

@interface _NSPredicateBlockRule : NSPredicateRule {
    id *_action;
}




-(id)debugDescription;
-(id)initWithPredicate:(id)arg0 action:(id)arg1 ;
-(void)performActionWithSystem:(id)arg0 ;


@end


#endif