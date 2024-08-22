// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNABPREDICATEOBSERVABLE_H
#define _CNABPREDICATEOBSERVABLE_H

@class CNObservable, ABPredicate, CNCancelationToken, NSString;
@protocol ABPredicateDelegate, CNObserver;


#import "CNContactsEnvironment.h"

@interface _CNABPredicateObservable : CNObservable <ABPredicateDelegate>

 {
    *void _addressBook;
    unsigned int _sortOrdering;
    ABPredicate *_predicate;
    NSUInteger _options;
    CNContactsEnvironment *_environment;
    CNCancelationToken *_cancelationToken;
    id<CNObserver> *_observer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)predicateShouldContinue:(id)arg0 ;
-(BOOL)predicateShouldContinue:(id)arg0 afterFindingRecord:(*void)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg0 afterFindingRecord:(*void)arg1 metadata:(id)arg2 ;
-(BOOL)predicateShouldContinue:(id)arg0 afterFindingRecord:(*void)arg1 moreComing:(BOOL)arg2 ;
-(id)subscribe:(id)arg0 ;
-(void)dealloc;


@end


#endif