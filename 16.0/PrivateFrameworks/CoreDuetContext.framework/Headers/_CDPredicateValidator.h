// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDPREDICATEVALIDATOR_H
#define _CDPREDICATEVALIDATOR_H

@class NSSet, NSError, NSPredicate;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface _CDPredicateValidator : NSObject <NSPredicateVisitor>



@property (retain, nonatomic) NSSet *allowedKeys; // ivar: _allowedKeys
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (nonatomic) BOOL validated; // ivar: _validated


+(BOOL)validatePredicate:(id)arg0 allowedKeys:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateWithError:(*id)arg0 ;
-(id)initWithPredicate:(id)arg0 allowedKeys:(id)arg1 ;
-(void)_cd_validateKeypath:(id)arg0 ;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif