// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCSHORTCUTLIST_H
#define FCSHORTCUTLIST_H

@class NSMutableDictionary, NSOrderedSet;


#import "FCPrivateDataController.h"
#import "FCMTWriterLock.h"

@interface FCShortcutList : FCPrivateDataController {
    NSMutableDictionary *_shortcutsByID;
    FCMTWriterLock *_itemsLock;
}


@property (readonly, copy, nonatomic) NSOrderedSet *orderedShortcuts;


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
-(BOOL)canHelpRestoreZoneName:(id)arg0 ;
-(BOOL)containsShortcut:(id)arg0 ;
-(BOOL)moveShortcutWithIdentifier:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg0 ;
-(id)initWithContext:(id)arg0 pushNotificationCenter:(id)arg1 storeDirectory:(id)arg2 ;
-(id)recordsForRestoringZoneName:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addShortcut:(id)arg0 ;
-(void)handleSyncWithChangedRecords:(id)arg0 deletedRecordNames:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)removeObserver:(id)arg0 ;
-(void)removeShortcutWithIdentifier:(id)arg0 ;
-(void)validateShortcuts;


@end


#endif