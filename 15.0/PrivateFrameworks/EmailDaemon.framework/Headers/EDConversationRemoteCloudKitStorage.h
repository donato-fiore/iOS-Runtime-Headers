// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDCONVERSATIONREMOTECLOUDKITSTORAGE_H
#define EDCONVERSATIONREMOTECLOUDKITSTORAGE_H

@class NSString, NSFetchedResultsController, NSPersistentHistoryToken;
@protocol NSFetchedResultsControllerDelegate, EDConversationRemoteStorage, EFLoggable, EDConversationRemoteStorageDelegate;

#import <Foundation/Foundation.h>

#import "EDTransactionService.h"
#import "EDCloudMirroringPersistentStore.h"

@interface EDConversationRemoteCloudKitStorage : NSObject <NSFetchedResultsControllerDelegate, EDConversationRemoteStorage, EFLoggable>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EDConversationRemoteStorageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EDTransactionService *exportTransaction; // ivar: _exportTransaction
@property (readonly, nonatomic) NSFetchedResultsController *fetchedResultsController; // ivar: _fetchedResultsController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSPersistentHistoryToken *historyToken; // ivar: _historyToken
@property (retain, nonatomic) EDTransactionService *importTransaction; // ivar: _importTransaction
@property (nonatomic, getter=isInitialized) BOOL initialized; // ivar: _initialized
@property (nonatomic, getter=isMigratedFromKVSStorage) BOOL migratedFromKVSStorage;
@property (readonly, nonatomic) EDCloudMirroringPersistentStore *mirroringPersistentStore; // ivar: _mirroringPersistentStore
@property (readonly) Class superclass;


+(id)cloudKitAPSTopics;
+(id)log;
-(BOOL)synchronize;
-(id)_controlInManagedObjectContext:(id)arg0 ;
-(id)_conversationInfoWithObjectId:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)_conversationInfoWithUUID:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)_conversationInfosWithUUID:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)_transactionHistorySinceToken:(id)arg0 managedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)allConversationInfosInManagedObjectContext:(id)arg0 ;
-(id)dictionaryForConversationInfo:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)entityForConversationDictionary:(id)arg0 key:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)enumerateChangeHistorySinceToken:(id)arg0 managedObjectContext:(id)arg1 usingBlock:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)storageName;
-(void)_addOrUpdateConversationInfo:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)_handleDidResetSyncDataNotification:(id)arg0 ;
-(void)_handleDuplicationsForConversationUUIDs:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)_handlePushNotification:(id)arg0 ;
-(void)_handleWillResetSyncDataNotification:(id)arg0 ;
-(void)_initialSetup;
-(void)_recoverHistoryToken;
-(void)_removeConversationInfoWithId:(id)arg0 managedObjectContext:(id)arg1 ;
-(void)_removeConversationInfoWithObjectId:(id)arg0 save:(BOOL)arg1 managedObjectContext:(id)arg2 ;
-(void)_requestExportWithManagedObjectContext:(id)arg0 ;
-(void)_requestFirstSyncWithManagedObjectContext:(id)arg0 ;
-(void)_requestImportWithManagedObjectContext:(id)arg0 ;
-(void)_retrieveChangesSinceLastRequestInManagedObjectContext:(id)arg0 ;
-(void)_updateConversationInfo:(id)arg0 withAnotherConversationInfo:(id)arg1 ;
-(void)persistHistoryToken;
-(void)refresh;
-(void)removeDictionaryForKey:(id)arg0 ;
-(void)setDictionary:(id)arg0 forKey:(id)arg1 ;


@end


#endif