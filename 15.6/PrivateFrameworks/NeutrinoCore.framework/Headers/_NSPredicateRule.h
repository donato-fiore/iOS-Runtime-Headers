// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSPREDICATERULE_H
#define _NSPREDICATERULE_H

@protocol NSObject;


#import "NSPredicateRule.h"

@interface _NSPredicateRule : NSPredicateRule {
    id<NSObject> *_fact;
    CGFloat _grade;
    BOOL _asserting;
}




+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 fact:(id)arg1 grade:(CGFloat)arg2 asserting:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performActionWithSystem:(id)arg0 ;


@end


#endif