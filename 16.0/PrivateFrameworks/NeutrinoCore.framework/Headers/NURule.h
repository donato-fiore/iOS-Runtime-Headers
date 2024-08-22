// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NURULE_H
#define NURULE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NURule : NSObject <NSSecureCoding>



@property (nonatomic) NSInteger salience; // ivar: _salience


+(BOOL)supportsSecureCoding;
// +(id)ruleWithBlockPredicate:(id)arg0 action:(unk)arg1  ;
+(id)ruleWithPredicate:(id)arg0 action:(id)arg1 ;
+(id)ruleWithPredicate:(id)arg0 assertingFact:(id)arg1 grade:(CGFloat)arg2 ;
+(id)ruleWithPredicate:(id)arg0 retractingFact:(id)arg1 grade:(CGFloat)arg2 ;
-(BOOL)evaluatePredicateWithSystem:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performActionWithSystem:(id)arg0 ;


@end


#endif