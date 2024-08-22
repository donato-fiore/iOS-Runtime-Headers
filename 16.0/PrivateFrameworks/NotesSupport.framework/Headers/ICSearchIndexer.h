// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSEARCHINDEXER_H
#define ICSEARCHINDEXER_H

@class NSArray, NSDictionary, NSString, NSOperationQueue, NSMutableDictionary, CSSearchableIndex;
@protocol CSSearchableIndexDelegate, ICReindexing, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICSelectorDelayer.h"

@interface ICSearchIndexer : NSObject <CSSearchableIndexDelegate, ICReindexing>



@property (readonly, nonatomic) NSArray *_dataSources;
@property (retain, nonatomic) ICSelectorDelayer *changeProcessingDelayer; // ivar: _changeProcessingDelayer
@property (readonly, nonatomic) NSArray *dataSources;
@property (copy, nonatomic) NSDictionary *dataSourcesByIdentifier; // ivar: _dataSourcesByIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexingQueue; // ivar: _indexingQueue
@property (nonatomic, getter=isObservingChanges) BOOL observingChanges; // ivar: _observingChanges
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (nonatomic) BOOL retryOnErrors; // ivar: _retryOnErrors
@property (retain, nonatomic) NSMutableDictionary *retryTimers; // ivar: _retryTimers
@property (retain, nonatomic) CSSearchableIndex *searchableIndex; // ivar: _searchableIndex
@property (readonly) Class superclass;


+(id)sharedIndexer;
-(id)dataSourceWithIdentifier:(id)arg0 ;
-(id)init;
-(id)newContextsForAllDataSources;
-(id)objectForManagedObjectIDURI:(id)arg0 inContexts:(id)arg1 ;
-(id)objectForSearchableItem:(id)arg0 context:(id)arg1 ;
-(id)objectsDictionaryForSearchableItems:(id)arg0 inContexts:(id)arg1 ;
-(id)objectsForSearchableItems:(id)arg0 inContexts:(id)arg1 ;
-(id)pendingReindexingOperation;
-(void)addDataSource:(id)arg0 ;
-(void)cancelIndexingOperationsWithCompletionHandler:(id)arg0 ;
-(void)clearObjectIDsToProcess;
-(void)clearRetryForSelector:(SEL)arg0 ;
-(void)dataSourceDidChange:(id)arg0 ;
-(void)deleteAllSearchableItemsWithCompletionHandler:(id)arg0 ;
-(void)finishRemainingOperationsWithCompletionHandler:(id)arg0 ;
-(void)processChanges;
-(void)reindexAllSearchableItemsInIndex;
-(void)reindexAllSearchableItemsInIndex:(id)arg0 completionHandler:(id)arg1 ;
-(void)reindexAllSearchableItemsWithCompletionHandler:(id)arg0 ;
-(void)reindexSearchableItemsWithObjectIDURIs:(id)arg0 completionHandler:(id)arg1 ;
-(void)reindexSearchableItemsWithObjectIDURIs:(id)arg0 inIndex:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeDataSource:(id)arg0 ;
-(void)retrySelector:(SEL)arg0 ;
-(void)searchableIndex:(id)arg0 reindexAllSearchableItemsWithAcknowledgementHandler:(id)arg1 ;
-(void)searchableIndex:(id)arg0 reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(id)arg2 ;
-(void)startObservingChanges;
-(void)stopObservingChanges;


@end


#endif