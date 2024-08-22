// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKBIOMEPREDICATEVALUESCANNER_H
#define _DKBIOMEPREDICATEVALUESCANNER_H

@class NSSet, NSMutableSet;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface _DKBiomePredicateValueScanner : NSObject <NSPredicateVisitor>

 {
    NSSet *_searchKeys;
    NSMutableSet *_matchedValues;
    NSUInteger _state;
}




+(id)searchForValuesForKey:(id)arg0 inPredicate:(id)arg1 ;
-(id)_initWithSearchKeys:(id)arg0 ;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif