// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKLEGACYPREDICATEVALIDATOR_H
#define CKLEGACYPREDICATEVALIDATOR_H



#import "CKPredicateValidator.h"

@interface CKLegacyPredicateValidator : CKPredicateValidator



-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateBasicOperatorPredicate:(id)arg0 ;
-(BOOL)validateBeginsWithPredicate:(id)arg0 ;
-(BOOL)validateBetweenPredicate:(id)arg0 ;
-(BOOL)validateContainsAllInPredicate:(id)arg0 ;
-(BOOL)validateContainsAnyPredicate:(id)arg0 ;
-(BOOL)validateContainsPredicate:(id)arg0 ;
-(BOOL)validateFullTextSearchPredicate:(id)arg0 ;
-(BOOL)validateInPredicate:(id)arg0 ;
-(BOOL)validateNearPredicate:(id)arg0 ;
-(NSUInteger)_comparisonOptionForString:(id)arg0 ;
-(void)validate:(id)arg0 ;
-(void)validateComparisonPredicate:(id)arg0 ;
-(void)validateCompoundPredicate:(id)arg0 ;


@end


#endif