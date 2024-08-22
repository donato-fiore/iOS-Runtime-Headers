// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPREDICATEVALIDATOR_H
#define CNPREDICATEVALIDATOR_H

@class NSArray, NSSet, NSError, NSPredicate, NSMutableSet;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface CNPredicateValidator : NSObject <NSPredicateVisitor>



@property (retain, nonatomic) NSArray *allowedKeys;
@property (retain, nonatomic) NSSet *allowedKeysSet; // ivar: _allowedKeysSet
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, copy, nonatomic) NSArray *usedKeys;
@property (retain, nonatomic) NSMutableSet *usedKeysSet; // ivar: _usedKeysSet
@property (nonatomic) BOOL validated; // ivar: _validated


-(BOOL)validateWithError:(*id)arg0 ;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif