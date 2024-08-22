// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRQUERY_H
#define BRQUERY_H

@class NSMutableArray, NSMutableDictionary, NSPredicate, NSString, NSArray, NSOperationQueue, NSMutableSet, NSMetadataQuery;
@protocol BRNotificationReceiverDelegate, BRItemCollectionGathererDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRItemCollectionGatherer.h"
#import "br_pacer.h"
#import "BRNotificationReceiver.h"

@interface BRQuery : NSObject <BRNotificationReceiverDelegate, BRItemCollectionGathererDelegate>

 {
    NSMutableArray *_results;
    NSMutableDictionary *_resultsByRowID;
    NSMutableDictionary *_fpItemIDToResultItem;
    NSPredicate *_predicate;
    NSString *_bundleIdentifier;
    NSMutableDictionary *_toBeRemovedByFileObjectID;
    NSMutableDictionary *_toBeReplacedByFileObjectID;
    NSMutableDictionary *_toBeInsertedByFileObjectID;
    int _queryState;
    BOOL _ubiquitousGatherComplete;
    BOOL _needsCrashMarking;
    BOOL _needsCrashEvicting;
    BOOL _sendHasUpdateNotification;
    BOOL _isFPFSMode;
    NSArray *_values;
    NSArray *_sortingAttributes;
    ? _batchingParameters;
    *unk _create_result_fn;
    *void _create_result_context;
    *unk _create_result_callbacks_equal;
    *unk _create_result_callbacks_release;
    *unk _create_value_fn;
    *void _create_value_context;
    *unk _create_value_callbacks_equal;
    *unk _create_value_callbacks_release;
    NSArray *_searchScopes;
    unsigned int _scopeOptions;
    *unk _sort_fn;
    *void _sort_context;
    *__CFRunLoop _runLoop;
    NSOperationQueue *_queryQueue;
    uint8_t _disableCount;
    int _handlerDisableCount;
    BRItemCollectionGatherer *_collectionGatherer;
    NSMutableDictionary *_progressObserverByFPItemID;
    NSMutableSet *_fpItemIDsInTransfer;
    BOOL _isNetworkOffline;
    id *_networkReachabilityToken;
    NSMutableSet *_fpItemIDsWithProgressUpdates;
    br_pacer *_progressUpdatePacer;
    NSObject<OS_dispatch_queue> *_progressQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSMetadataQuery *query; // ivar: _query
@property (retain) BRNotificationReceiver *receiver; // ivar: _receiver
@property (readonly) Class superclass;


+(id)willBeginPossibleCreationOfItemAtURL:(id)arg0 ;
+(id)willBeginPossibleDeletionOfItemAtURL:(id)arg0 ;
+(id)willBeginPossibleMoveOfItemAtURL:(id)arg0 toURL:(id)arg1 ;
+(void)didEndPossibleFileOperation:(id)arg0 ;
+(void)initialize;
-(*void)resultAtIndex:(NSInteger)arg0 ;
-(BOOL)_collectUpdates:(id)arg0 ;
-(NSInteger)indexOfResult:(*void)arg0 ;
-(NSUInteger)countOfResultsForAttributeName:(id)arg0 value:(id)arg1 ;
-(NSUInteger)resultCount;
-(id)_classifyItems:(id)arg0 deletedItemIDs:(id)arg1 ;
-(id)_replacementObjectForQueryItem:(id)arg0 ;
-(id)_replacementObjectsForArrayOfQueryItem:(id)arg0 ;
-(id)attributeValueForName:(id)arg0 forResultAtIndex:(NSInteger)arg1 ;
-(id)initWithQuery:(id)arg0 values:(id)arg1 sortingAttributes:(id)arg2 items:(id)arg3 ;
-(id)valuesOfAttribute:(id)arg0 ;
-(unsigned char)executeWithOptions:(NSUInteger)arg0 ;
-(void)_handleAddedItemsNotifications:(id)arg0 userInfo:(id)arg1 ;
-(void)_handleRemovedItemsNotifications:(id)arg0 userInfo:(id)arg1 ;
-(void)_handleReplacedItemsNotifications:(id)arg0 userInfo:(id)arg1 ;
-(void)_monitorNetworkForQueryItemIfNecessary:(id)arg0 fpItemID:(id)arg1 ;
-(void)_monitorTransferForFPItemIfNecessary:(id)arg0 ;
-(void)_performBlockAsync:(id)arg0 ;
-(void)_postNote:(struct __CFString *)arg0 ;
-(void)_postNote:(struct __CFString *)arg0 userInfo:(id)arg1 ;
-(void)_processChanges:(id)arg0 ;
-(void)_processProgressUpdateBatch;
-(void)_processUpdates;
-(void)_runQuery;
-(void)_sendHasUpdateNotificationIfNeeded;
-(void)_stopMonitoringTransferForFPItemID:(id)arg0 ;
-(void)_stopProgressObservers;
-(void)_watchScopes;
-(void)dealloc;
-(void)disableUpdates;
-(void)enableUpdates;
-(void)itemCollectionGathererDidReceiveUpdates:(id)arg0 deleteItemsWithIDs:(id)arg1 ;
-(void)itemCollectionGathererFinishedGathering;
-(void)itemCollectionGathererGatheredItems:(id)arg0 ;
-(void)networkReachabilityChanged:(BOOL)arg0 ;
-(void)notificationReceiverDidReceiveNotifications:(id)arg0 ;
-(void)notificationsReceiverDidFinishGathering:(id)arg0 ;
-(void)notificationsReceiverDidInvalidate:(id)arg0 ;
-(void)notificationsReceiverDidReceiveNotificationsBatch:(id)arg0 ;
-(void)processUpdates;
-(void)setBatchingParameters:(struct ? )arg0 ;
-(void)setCreateResultFunction:(*unk)arg0 withContext:(*void)arg1 callbacks:(struct ? *)arg2 ;
-(void)setCreateValueFunction:(*unk)arg0 withContext:(*void)arg1 callbacks:(struct ? *)arg2 ;
-(void)setExternalDocumentsBundleIdentifier:(id)arg0 ;
-(void)setSearchScope:(id)arg0 withOptions:(unsigned int)arg1 ;
-(void)setSendHasUpdateNotification:(BOOL)arg0 ;
-(void)setSortComparator:(*unk)arg0 withContext:(*void)arg1 ;
-(void)stop;


@end


#endif