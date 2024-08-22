// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBBOOKMARKDBACCESS_H
#define WBBOOKMARKDBACCESS_H

@class NSString;
@protocol WBSBookmarkDBAccess;

#import <Foundation/Foundation.h>


@interface WBBookmarkDBAccess : NSObject <WBSBookmarkDBAccess>



@property (readonly, nonatomic) NSInteger collectionType; // ivar: _collectionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger storeOwner; // ivar: _storeOwner
@property (readonly) Class superclass;


-(*void)copyChangedItemWithChange:(*void)arg0 ;
-(*void)copyItemWithLocalID:(id)arg0 database:(*void)arg1 ;
-(*void)copyItemWithServerId:(id)arg0 database:(*void)arg1 ;
-(*void)createBookmarkWithType:(NSInteger)arg0 database:(*void)arg1 ;
-(*void)createDatabase;
-(*void)createDatabaseWithoutLock;
-(*void)createFolderWithType:(NSInteger)arg0 database:(*void)arg1 ;
-(BOOL)addItem:(*void)arg0 underFolderWithServerId:(id)arg1 database:(*void)arg2 ;
-(BOOL)changeIsDAVMoveChange:(*void)arg0 ;
-(BOOL)changeIsMoveChange:(*void)arg0 ;
-(BOOL)item:(*void)arg0 isEqualToItem:(*void)arg1 ;
-(BOOL)item:(*void)arg0 isInFolderWithServerSyncId:(id)arg1 ;
-(BOOL)performMaintenanceOnDatabase:(*void)arg0 afterVersion:(id)arg1 ;
-(NSInteger)bookmarkTypeForChange:(*void)arg0 ;
-(NSInteger)bookmarkTypeWithBookmark:(*void)arg0 ;
-(NSInteger)folderTypeForChange:(*void)arg0 ;
-(NSInteger)folderTypeWithFolder:(*void)arg0 ;
-(NSInteger)itemTypeForChange:(*void)arg0 ;
-(NSInteger)itemTypeWithItem:(*void)arg0 ;
-(NSInteger)localCloudKitMigrationState:(*void)arg0 ;
-(id)copyAccountHashWithDatabase:(*void)arg0 ;
-(id)copyAttributesWithItem:(*void)arg0 ;
-(id)copyChangeTokenWithDatabase:(*void)arg0 ;
-(id)copyDeletedBookmarkSyncDataWithChange:(*void)arg0 ;
-(id)copyDeviceIdentifier;
-(id)copyFirstServerIdInFolderWithServerId:(id)arg0 database:(*void)arg1 ;
-(id)copyLastServerIdInFolderWithServerId:(id)arg0 database:(*void)arg1 ;
-(id)copyLocalIDsInFolderWithLocalID:(id)arg0 database:(*void)arg1 ;
-(id)copyModifiedAttributesWithChange:(*void)arg0 ;
-(id)copyServerIdInFolderAfterServerId:(id)arg0 database:(*void)arg1 ;
-(id)copyServerIdInFolderBeforeServerId:(id)arg0 database:(*void)arg1 ;
-(id)copyServerIdsInFolderWithServerId:(id)arg0 database:(*void)arg1 ;
-(id)copyValueForKey:(id)arg0 item:(*void)arg1 ;
-(id)initWithCollectionType:(NSInteger)arg0 ;
-(id)initWithCollectionType:(NSInteger)arg0 storeOwner:(NSInteger)arg1 ;
-(int)changeTypeForChange:(*void)arg0 ;
-(struct __CFArray *)copyChangesWithDatabase:(*void)arg0 changeToken:(**void)arg1 ;
-(struct __CFData *)copySyncDataWithDatabase:(*void)arg0 ;
-(struct __CFData *)copySyncDataWithItem:(*void)arg0 ;
-(struct __CFString *)copyParentServerIdWithItem:(*void)arg0 ;
-(struct __CFString *)copyServerIdWithChange:(*void)arg0 ;
-(struct __CFString *)copyServerIdWithItem:(*void)arg0 ;
-(struct __CFString *)copySyncKeyWithItem:(*void)arg0 ;
-(void)beginMergingChangesWithDatabase:(*void)arg0 ;
-(void)clearAllSyncDataWithDatabase:(*void)arg0 ;
-(void)clearChangesWithChangeToken:(*void)arg0 database:(*void)arg1 ;
-(void)clearlAllLocalBookmarksForAutomatedTestingWithDatabase:(*void)arg0 ;
-(void)closeDatabase:(*void)arg0 shouldSave:(BOOL)arg1 ;
-(void)finishMergingChangesWithDatabase:(*void)arg0 ;
-(void)openDatabase:(*void)arg0 ;
-(void)performDeduplicationWithDatabase:(*void)arg0 mode:(NSInteger)arg1 ;
-(void)removeItemWithServerId:(struct __CFString *)arg0 database:(*void)arg1 ;
-(void)resetDeviceIdentifier;
-(void)saveBackupOfDatabase:(*void)arg0 withName:(id)arg1 ;
-(void)saveDatabase:(*void)arg0 ;
-(void)setAccountHash:(id)arg0 database:(*void)arg1 ;
-(void)setChildrenOrder:(id)arg0 forFolderWithServerId:(id)arg1 database:(*void)arg2 ;
-(void)setDeletedBookmarkSyncData:(id)arg0 change:(*void)arg1 ;
-(void)setLocalCloudKitMigrationState:(NSInteger)arg0 database:(*void)arg1 ;
-(void)setModifiedAttributes:(id)arg0 item:(*void)arg1 ;
-(void)setServerId:(struct __CFString *)arg0 item:(*void)arg1 ;
-(void)setSyncData:(struct __CFData *)arg0 database:(*void)arg1 ;
-(void)setSyncData:(struct __CFData *)arg0 item:(*void)arg1 ;
-(void)setSyncKey:(struct __CFString *)arg0 item:(*void)arg1 ;


@end


#endif