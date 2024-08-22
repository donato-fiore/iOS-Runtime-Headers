// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTFETCHREQUESTEXECUTORPREDICATEEVALUATOR_H
#define CNCONTACTFETCHREQUESTEXECUTORPREDICATEEVALUATOR_H

@class CNObservable, NSString;
@protocol CNPredicateVisitor, CNDataMapper;

#import <Foundation/Foundation.h>

#import "CNContactFetchRequest.h"

@interface CNContactFetchRequestExecutorPredicateEvaluator : NSObject <CNPredicateVisitor>

 {
    CNContactFetchRequest *_fetchRequest;
    id<CNDataMapper> *_dataMapper;
    CNObservable *_observable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyFetchRequestWithPredicate:(id)arg0 ;
-(id)evaluateSubpredicate:(id)arg0 ;
-(void)visitAndPredicate:(id)arg0 ;
-(void)visitCNPredicate:(id)arg0 ;
-(void)visitFalsePredicate:(id)arg0 ;
-(void)visitNSCompoundPredicate:(id)arg0 ;
-(void)visitNSPredicate:(id)arg0 ;
-(void)visitNotPredicate:(id)arg0 ;
-(void)visitOrPredicate:(id)arg0 ;
-(void)visitTruePredicate:(id)arg0 ;


@end


#endif