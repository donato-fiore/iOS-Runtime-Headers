// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPSPOTLIGHTINDEXER_H
#define FPSPOTLIGHTINDEXER_H

@class NSString, NSOperationQueue, NSOperation, CSSearchableIndex, NSData;
@protocol CSSearchableIndexDelegate, OS_dispatch_semaphore, FPSpotlightIndexerDelegate, OS_os_log, NSFileProviderEnumerator, OS_dispatch_workloop;

#import <Foundation/Foundation.h>

#import "FPSpotlightFetchClientStateOperation.h"
#import "NSFileProviderDomain.h"
#import "FPXDomainContext.h"
#import "FPProviderDomain.h"

@interface FPSpotlightIndexer : NSObject <CSSearchableIndexDelegate>

 {
    NSString *_indexName;
    NSString *_domainID;
    NSString *_providerIdentifier;
    NSOperationQueue *_operationQueue;
    NSOperation *_currentOperation;
    NSUInteger _clientState;
    FPSpotlightFetchClientStateOperation *_fetchStateOperation;
    BOOL _isCanceled;
    NSObject<OS_dispatch_semaphore> *_clientStateSemaphore;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FPSpotlightIndexerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSFileProviderDomain *domain; // ivar: _domain
@property (weak, nonatomic) FPXDomainContext *domainContext; // ivar: _domainContext
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CSSearchableIndex *index; // ivar: _index
@property (nonatomic, getter=isIndexing) BOOL indexing; // ivar: _indexing
@property (readonly, nonatomic) NSData *lastIndexState; // ivar: _lastIndexState
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) FPProviderDomain *providerDomain; // ivar: _providerDomain
@property (readonly) Class superclass;
@property (readonly) NSObject<NSFileProviderEnumerator> *vendorEnumerator; // ivar: _vendorEnumerator
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *workloop; // ivar: _workloop


-(id)_fetchClientStateIfNeeded;
-(id)initWithDomain:(id)arg0 providerDomain:(id)arg1 log:(id)arg2 ;
-(void)_fetchCurrentIndexingAnchorWithCompletionHandler:(id)arg0 ;
-(void)_indexOneBatchFromAnchor:(id)arg0 toAnchor:(id)arg1 updatedItems:(id)arg2 deletedItems:(id)arg3 completionHandler:(id)arg4 ;
-(void)_indexOneBatchWithCompletionHandler:(id)arg0 ;
-(void)_indexOutOfBandUpdatedItems:(id)arg0 deletedItems:(id)arg1 completionHandler:(id)arg2 ;
-(void)_invalidate;
-(void)dealloc;
-(void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)dropIndexAndInvalidateWithReason:(id)arg0 completionHandler:(id)arg1 ;
-(void)dropIndexInQueue:(id)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;
-(void)dropIndexWithReason:(id)arg0 completionHandler:(id)arg1 ;
-(void)dumpStateTo:(id)arg0 ;
-(void)fetchCurrentIndexingAnchorWithCompletionHandler:(id)arg0 ;
-(void)indexOneBatchFromAnchor:(id)arg0 toAnchor:(id)arg1 updatedItems:(id)arg2 deletedItems:(id)arg3 completionHandler:(id)arg4 ;
-(void)indexOneBatchWithCompletionHandler:(id)arg0 ;
-(void)indexOutOfBandUpdatedItems:(id)arg0 deletedItems:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidate;
-(void)invalidateAsync;
-(void)learnNewIndexState:(id)arg0 ;
-(void)searchableIndex:(id)arg0 reindexAllSearchableItemsWithAcknowledgementHandler:(id)arg1 ;
-(void)searchableIndex:(id)arg0 reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id)arg2 ;


@end


#endif