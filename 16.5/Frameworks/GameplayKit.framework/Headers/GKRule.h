// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKRULE_H
#define GKRULE_H


#import <Foundation/Foundation.h>


@interface GKRule : NSObject

@property (nonatomic) NSInteger salience; // ivar: _salience


// +(id)ruleWithBlockPredicate:(id)arg0 action:(unk)arg1  ;
+(id)ruleWithPredicate:(id)arg0 assertingFact:(id)arg1 grade:(float)arg2 ;
+(id)ruleWithPredicate:(id)arg0 retractingFact:(id)arg1 grade:(float)arg2 ;
-(BOOL)evaluatePredicateWithSystem:(id)arg0 ;
-(void)performActionWithSystem:(id)arg0 ;


@end


#endif