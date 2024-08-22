// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKADATABASEPROVIDER_H
#define SKADATABASEPROVIDER_H

@class CKContainer, NSString, NSPersistentContainer;
@protocol SKADatabaseProviding, SKADatabaseProvidingDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SKADatabaseProvider : NSObject <SKADatabaseProviding>



@property (retain, nonatomic) CKContainer *ckContainer; // ivar: _ckContainer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKADatabaseProvidingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *historyProcessingQueue; // ivar: _historyProcessingQueue
@property (retain, nonatomic) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (readonly) Class superclass;


+(id)logger;
-(BOOL)databaseHasBeenCreated;
-(BOOL)overrideDeviceEncryptionCheck;
-(id)appTransactionAuthorName;
-(id)cloudDatabaseFileURL;
-(id)cloudPersistentStoreDescription;
-(id)containerName;
-(id)createCkContainer;
-(id)createPersistentContainer;
-(id)databaseDirectoryURL;
-(id)existingManagedObjectWithID:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)fileManager;
-(id)initWithDelegate:(id)arg0 ;
-(id)lastProcessedPersistentHistoryToken;
-(id)lastProcessedPersistentHistoryTokenFileURL;
-(id)localDatabaseFileURL;
-(id)localPersistentStoreDescription;
-(id)newBackgroundContext;
-(void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id)arg0 ;
-(void)handlePersistentStoreRemoteChangeNotification:(id)arg0 ;
-(void)processPersistentStoreRemoteChanges;
-(void)setLastProcessedPersistentHistoryToken:(id)arg0 ;


@end


#endif