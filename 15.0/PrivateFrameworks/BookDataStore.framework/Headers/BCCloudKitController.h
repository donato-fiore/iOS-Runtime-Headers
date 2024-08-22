// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCCLOUDKITCONTROLLER_H
#define BCCLOUDKITCONTROLLER_H

@class BUCoalescingCallBlock, CKContainer;
@protocol BDSCloudKitSupportSignOutDeleteWithoutInstance, OS_dispatch_queue, BCContainerConfiguration;

#import <Foundation/Foundation.h>

#import "BCCloudKitDatabaseController.h"
#import "BCCloudKitTransactionManager.h"

@interface BCCloudKitController : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedAttachment; // ivar: _coalescedAttachment
@property (retain, nonatomic) NSObject<BCContainerConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) CKContainer *container; // ivar: _container
@property (nonatomic) BOOL didChangeContainer; // ivar: _didChangeContainer
@property (nonatomic) BOOL enableCloudSync; // ivar: _enableCloudSync
@property (nonatomic) BOOL gettingAccountInfo; // ivar: _gettingAccountInfo
@property (retain) BCCloudKitDatabaseController *privateCloudDatabaseController; // ivar: _privateCloudDatabaseController
@property (nonatomic) BOOL serviceMode; // ivar: _serviceMode
@property (retain, nonatomic) BCCloudKitTransactionManager *transactionManager; // ivar: _transactionManager


+(id)databaseFolderURLForConfiguration:(id)arg0 ;
+(id)p_createDatabaseArchiveDirectoryForConfiguration:(id)arg0 ;
+(id)p_privateDatabaseArchiveURLForConfiguration:(id)arg0 ;
+(id)secureSharedInstance;
+(id)sharedInstance;
+(void)deleteCloudDataWithCompletion:(id)arg0 ;
+(void)registerForSecureNotifications;
-(id)initWithConfiguration:(id)arg0 ;
-(void)applicationDidBecomeActive;
-(void)handleRemoteNotification:(id)arg0 ;
-(void)p_accountChanged:(id)arg0 ;
-(void)p_getAccountInfo;
-(void)p_getNecessaryAccountInfoFromContainer:(id)arg0 completion:(id)arg1 ;
-(void)p_identityChanged:(id)arg0 ;
-(void)p_updateAttachment;


@end


#endif