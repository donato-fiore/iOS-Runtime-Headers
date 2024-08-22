// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _OSLOGPREDICATEMAPPER_H
#define _OSLOGPREDICATEMAPPER_H

@class NSPredicate, NSMutableArray, NSMutableSet, NSArray;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface _OSLogPredicateMapper : NSObject <NSPredicateVisitor>

 {
    int _pass;
}


@property (readonly, nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly, nonatomic) NSPredicate *mappedPredicate; // ivar: _predicate
@property (retain, nonatomic) NSMutableArray *stack; // ivar: _stack
@property (readonly, nonatomic) NSMutableSet *validKeyPaths;
@property (readonly, nonatomic) NSArray *validationErrors; // ivar: _validationErrors


-(id)initWithPredicate:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 andValidate:(BOOL)arg1 ;
-(id)mapEventTypeExpression:(id)arg0 ;
-(id)mapKeywordToConstantExpression:(id)arg0 keywordMap:(id)arg1 ;
-(id)mapMessageTypeExpression:(id)arg0 ;
-(id)mapSignpostScopeExpression:(id)arg0 ;
-(id)mapSignpostTypeExpression:(id)arg0 ;
-(void)mapLeftExpression:(*id)arg0 andRightExpression:(*id)arg1 ;
-(void)processComparisonPredicate:(id)arg0 ;
-(void)processCompoundPredicate:(id)arg0 ;
-(void)validateExpression:(id)arg0 ;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif