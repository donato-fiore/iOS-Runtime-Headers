// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCAUDIOPLAYLIST_H
#define FCAUDIOPLAYLIST_H

@class NSMutableDictionary, NSOrderedSet, NSArray;
@protocol FCAudioPlaylistType;


#import "FCPrivateDataController.h"
#import "FCMTWriterLock.h"

@interface FCAudioPlaylist : FCPrivateDataController <FCAudioPlaylistType>

 {
    NSMutableDictionary *_itemsByID;
    NSOrderedSet *_orderedArticleIDs;
    FCMTWriterLock *_itemsLock;
}


@property (readonly, nonatomic) NSArray *articleIDs;


+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(BOOL)requiresPushNotificationSupport;
+(NSInteger)commandQueueUrgency;
+(NSUInteger)localStoreVersion;
+(id)backingRecordIDs;
+(id)backingRecordZoneIDs;
+(id)commandStoreFileName;
+(id)commandsToMergeLocalDataToCloud:(id)arg0 privateDataDirectory:(id)arg1 ;
+(id)desiredKeys;
+(id)localStoreFilename;
+(void)populateLocalStoreClassRegistry:(id)arg0 ;
-(BOOL)canHelpRestoreZoneName:(id)arg0 ;
-(BOOL)containsArticleID:(id)arg0 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg0 ;
-(id)dateAddedForArticleID:(id)arg0 ;
-(id)initWithContext:(id)arg0 pushNotificationCenter:(id)arg1 storeDirectory:(id)arg2 ;
-(id)localStoreMigrator;
-(id)recordsForRestoringZoneName:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)ensureSyncedWithCompletion:(id)arg0 ;
-(void)handleSyncWithChangedRecords:(id)arg0 deletedRecordNames:(id)arg1 ;
-(void)insertArticleID:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)removeArticleID:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)save;


@end


#endif