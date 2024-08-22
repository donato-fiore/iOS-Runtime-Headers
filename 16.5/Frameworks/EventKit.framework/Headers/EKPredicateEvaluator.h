// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPREDICATEEVALUATOR_H
#define EKPREDICATEEVALUATOR_H

@class NSString;
@protocol CADPredicateValidator;

#import <Foundation/Foundation.h>


@interface EKPredicateEvaluator : NSObject <CADPredicateValidator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)evaluatePredicate:(id)arg0 withObject:(id)arg1 ;


@end


#endif