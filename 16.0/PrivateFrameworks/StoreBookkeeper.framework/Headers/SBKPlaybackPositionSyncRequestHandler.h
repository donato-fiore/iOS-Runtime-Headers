// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBKPLAYBACKPOSITIONSYNCREQUESTHANDLER_H
#define SBKPLAYBACKPOSITIONSYNCREQUESTHANDLER_H

@class NSString, NSError, NSMutableDictionary, NSDictionary;
@protocol SBKTransactionControllerDelegate, SBKSyncTransactionProcessing, OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource, SBKUniversalPlaybackPositionTransactionContext;


#import "SBKSyncRequestHandler.h"
#import "SBKSyncTransaction.h"
#import "SBKTransactionController.h"

@interface SBKPlaybackPositionSyncRequestHandler : SBKSyncRequestHandler <SBKTransactionControllerDelegate, SBKSyncTransactionProcessing>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncOperationQueue;
}


@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (retain, nonatomic) SBKSyncTransaction *currentKVSTransaction; // ivar: _currentKVSTransaction
@property (retain, nonatomic) NSObject<SBKUniversalPlaybackPositionDataSource> *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSObject<SBKUniversalPlaybackPositionTransactionContext> *dataSourceTransactionContext; // ivar: _dataSourceTransactionContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *fatalSyncError; // ivar: _fatalSyncError
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBKTransactionController *kvsController; // ivar: _kvsController
@property (retain, nonatomic) NSMutableDictionary *metadataItemsFromDataSource; // ivar: _metadataItemsFromDataSource
@property (retain, nonatomic) NSDictionary *metadataItemsToCommitToDataSource; // ivar: _metadataItemsToCommitToDataSource
@property (retain, nonatomic) NSDictionary *metadataItemsToCommitToKVSStorage; // ivar: _metadataItemsToCommitToKVSStorage
@property (retain, nonatomic) NSString *overrideSyncAnchor; // ivar: _overrideSyncAnchor
@property (retain, nonatomic) NSMutableDictionary *responseMetadataItemsMergedToCommitBackToKVSStorage; // ivar: _responseMetadataItemsMergedToCommitBackToKVSStorage
@property (retain, nonatomic) NSMutableDictionary *responseMetadataItemsToCommitToDataSource; // ivar: _responseMetadataItemsToCommitToDataSource
@property (readonly) Class superclass;
@property (nonatomic) BOOL syncInProgress; // ivar: _syncInProgress


-(BOOL)_shouldStop;
-(BOOL)_synchronize:(*id)arg0 ;
-(BOOL)transactionController:(id)arg0 transactionDidFail:(id)arg1 error:(id)arg2 ;
-(id)_synchronouslyRunKVSTransaction:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 bagContext:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 bagContext:(id)arg1 accountIdentifier:(id)arg2 ;
-(id)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)arg0 processConflicts:(BOOL)arg1 ;
-(id)transaction:(id)arg0 conflictDetectionOrdinalForKey:(id)arg1 ;
-(id)transaction:(id)arg0 keyValuePairForUpdatedKey:(id)arg1 ;
-(id)transaction:(id)arg0 syncAnchorForTransactionSyncAnchor:(id)arg1 ;
-(int)_mergeConflictedItemFromSyncResponse:(id)arg0 ;
-(void)_mergeMetadataItemsFromSyncResponse;
-(void)_signalKVSTransactionCompletion:(id)arg0 ;
-(void)_signalKVSTransactionCompletion:(id)arg0 withError:(id)arg1 ;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)clearTransactionResponseData;
-(void)synchronizeWithCompletionHandler:(id)arg0 ;
-(void)timeout;
-(void)transaction:(id)arg0 didProcessResponseData:(id)arg1 ;
-(void)transaction:(id)arg0 processDeletedKey:(id)arg1 isDirty:(*BOOL)arg2 ;
-(void)transaction:(id)arg0 processUpdatedKey:(id)arg1 data:(id)arg2 conflict:(BOOL)arg3 isDirty:(*BOOL)arg4 ;
-(void)transaction:(id)arg0 willProcessResponseData:(id)arg1 ;
-(void)transactionController:(id)arg0 transactionDidCancel:(id)arg1 error:(id)arg2 ;
-(void)transactionController:(id)arg0 transactionDidFinish:(id)arg1 ;


@end


#endif