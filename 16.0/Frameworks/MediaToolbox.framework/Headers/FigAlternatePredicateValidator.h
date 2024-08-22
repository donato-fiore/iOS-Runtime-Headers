// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGALTERNATEPREDICATEVALIDATOR_H
#define FIGALTERNATEPREDICATEVALIDATOR_H

@class NSPredicate, NSError;
@protocol NSPredicateVisitor;

#import <Foundation/Foundation.h>


@interface FigAlternatePredicateValidator : NSObject <NSPredicateVisitor>

 {
    NSPredicate *_predicate;
    *OpaqueFigSimpleMutex _mutex;
    BOOL _result;
    NSError *_error;
    BOOL _isEvaluated;
}




-(BOOL)_keyPathComponentIsAllowed:(id)arg0 ;
-(BOOL)_unsafeEvaluateKeyPathWithDummy:(id)arg0 ;
-(BOOL)_validateKeyPath:(id)arg0 ;
-(BOOL)validateWithError:(*id)arg0 ;
-(id)_keyPathComponents:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)dealloc;
-(void)visitPredicate:(id)arg0 ;
-(void)visitPredicateExpression:(id)arg0 ;
-(void)visitPredicateOperator:(id)arg0 ;


@end


#endif