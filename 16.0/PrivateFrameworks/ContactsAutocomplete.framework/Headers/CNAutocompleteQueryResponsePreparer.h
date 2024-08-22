// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETEQUERYRESPONSEPREPARER_H
#define CNAUTOCOMPLETEQUERYRESPONSEPREPARER_H

@class NSMutableOrderedSet, CNHandleStringClassifier;
@protocol CNAutocompleteFetchDelegate, CNPromise, CNFuture;

#import <Foundation/Foundation.h>

#import "CNAutocompleteFetchRequest.h"

@interface CNAutocompleteQueryResponsePreparer : NSObject {
    NSMutableOrderedSet *_previouslyReturnedResults;
    CNHandleStringClassifier *_handleStringClassifier;
}


@property (readonly, weak, nonatomic) NSObject<CNAutocompleteFetchDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CNAutocompleteFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (retain, nonatomic) NSObject<CNPromise> *matchingPriorityResultsPromise; // ivar: _matchingPriorityResultsPromise
@property (retain, nonatomic) NSObject<CNFuture> *priorityResultsFuture; // ivar: _priorityResultsFuture


-(id)addDiagnosticLog:(id)arg0 ;
-(id)applyPriorityResultsOrder:(id)arg0 ;
-(id)askDelegateToAdjustResults;
-(id)findUniqueResults:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 fetchRequest:(id)arg1 ;
-(id)prepareResults:(id)arg0 ;
-(id)resultsNotPreviouslyReturned:(id)arg0 ;
-(id)sortResults;
-(id)suppressResultsWithAddresses:(id)arg0 ;


@end


#endif