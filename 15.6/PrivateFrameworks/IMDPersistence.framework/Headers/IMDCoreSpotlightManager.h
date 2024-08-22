// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDCORESPOTLIGHTMANAGER_H
#define IMDCORESPOTLIGHTMANAGER_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface IMDCoreSpotlightManager : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *blocklistMessageGUIDs; // ivar: _blocklistMessageGUIDs


+(id)chatAutoDonatingCutomKey;
+(id)chatAutoDonatingServerDateCustomKey;
+(id)chatStyleCustomKey;
+(id)resolvedURLCustomKey;
+(id)sharedInstance;
-(?)donateChatwithMessage;
-(?)newCDInteractionForChatmessage;
-(?)newCDInteractionForMessage;
-(?)newSearchableItemsForMessagereindexing;
-(BOOL)__im_ff_isInterstellarEnabled;
-(BOOL)_bypassIndexVersionCheck;
-(BOOL)_shouldBypassForTesting;
-(BOOL)_shouldDonateNextBatchForBatchSize:(NSUInteger)arg0 ;
-(BOOL)_shouldIndexNextBatchForBatchSize:(NSUInteger)arg0 ;
-(NSInteger)_chatCountForChats:(id)arg0 ;
-(NSInteger)maxRowID;
-(NSUInteger)_batchSizeForTargetBatchSize:(NSUInteger)arg0 lastIndexedRowID:(NSUInteger)arg1 lastBatch:(*BOOL)arg2 ;
-(NSUInteger)_currentIndexVersion;
-(NSUInteger)_expectedIndexVersion;
-(NSUInteger)_lastDonatedRowID;
-(NSUInteger)_lastIndexedRowID;
-(id)_chatDictionaryForChatAtIndex:(NSUInteger)arg0 withChats:(id)arg1 ;
-(id)_chatDictionaryForChatGUID:(id)arg0 ;
-(id)_donationManager;
-(id)_newCDInteractionForMessages:(struct __CFArray *)arg0 ;
-(id)_newLegacySearchableIndexesForMessages:(struct __CFArray *)arg0 ;
-(id)_newSearchableChatItemsForChats:(struct __CFArray *)arg0 ;
-(id)_newSearchableIndexesForMessages:(struct __CFArray *)arg0 ;
-(id)_spotlightIndexingQueue;
-(id)newCDContactForHandle:(struct _IMDHandleRecordStruct *)arg0 handle:(id)arg1 ;
-(id)newChatSearchableItemForChatDictionary:(id)arg0 optionalLastMessageDate:(id)arg1 ;
-(id)newSearchableItemsForMessageGUID:(id)arg0 reindexing:(BOOL)arg1 ;
-(id)searchableIndex;
-(struct __CFArray *)_copyMessagesForIndexingWithLastRowID:(NSUInteger)arg0 batchSize:(NSUInteger)arg1 ;
-(void)_geocodeItems:(id)arg0 ;
-(void)_indexSearchableChatItems:(id)arg0 withIndex:(id)arg1 ;
-(void)_indexSearchableItems:(id)arg0 lastIndexedRowID:(NSUInteger)arg1 batchSize:(NSUInteger)arg2 lastBatch:(BOOL)arg3 withIndex:(id)arg4 completion:(id)arg5 ;
-(void)_postProcessIndexingForItem:(id)arg0 chatDictionary:(id)arg1 isReindexing:(BOOL)arg2 ;
-(void)_resolvedURLForItems:(id)arg0 ;
-(void)_sanitizeIndexesForCurrentVersionIfNeeded:(id)arg0 ;
-(void)_setBypassIndexVersionCheck;
-(void)_setCurrentIndexVersion:(NSUInteger)arg0 ;
-(void)_setLastDonatedRowID:(NSUInteger)arg0 ;
-(void)_setLastIndexedRowID:(NSUInteger)arg0 ;
-(void)_setMaxIndexRowID:(NSUInteger)arg0 ;
-(void)_setNeedsDeferredIndexing:(BOOL)arg0 ;
-(void)_setNeedsDonation:(BOOL)arg0 ;
-(void)_setNeedsIndexing:(BOOL)arg0 ;
-(void)_updateItem:(id)arg0 withGeoMapItem:(id)arg1 ;
-(void)_updateItem:(id)arg0 withResolvedURL:(id)arg1 ;
-(void)addChatSearchableItemForChatGUID:(id)arg0 ;
-(void)clearMessageGUIDFromScrutiny:(id)arg0 ;
-(void)dealloc;
-(void)deleteChatSearchableItemForChatGUID:(id)arg0 ;
-(void)donateNextMessageBatchIfNeeded:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)indexChats;
-(void)indexNextMessageBatchIfNeeded:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)setMessageGUIDUnderScrutiny:(id)arg0 ;
-(void)setNeedsDonateAllMessagesWithCompletion:(id)arg0 ;
-(void)setNeedsMessageReindexingWithCompletion:(id)arg0 ;


@end


#endif