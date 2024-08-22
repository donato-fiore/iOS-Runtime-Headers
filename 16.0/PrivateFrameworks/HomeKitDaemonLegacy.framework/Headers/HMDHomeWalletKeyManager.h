// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMEWALLETKEYMANAGER_H
#define HMDHOMEWALLETKEYMANAGER_H

@class HMFObject, NAFuture, NSString, HMFMessageDispatcher, NSUUID, NSNotificationCenter, NSMutableArray, HMFSystemInfo;
@protocol HMFMessageReceiver, HMFLogging, HMDWalletPassLibraryDelegate, HMDHomeWalletKeyAccessoryManagerDelegate, HMDHomeWalletDataSource, HMDFileManager, HAPKeyStore, OS_dispatch_queue, HMDWalletPassLibrary;


#import "HMDApplicationRegistry.h"
#import "HMDBulletinBoard.h"
#import "HMDHome.h"
#import "HMDLostModeManager.h"
#import "HMDWatchManager.h"

@interface HMDHomeWalletKeyManager : HMFObject <HMFMessageReceiver, HMFLogging, HMDWalletPassLibraryDelegate, HMDHomeWalletKeyAccessoryManagerDelegate>



@property (retain) NAFuture *addWalletKeyFuture; // ivar: _addWalletKeyFuture
@property (readonly) HMDApplicationRegistry *applicationRegistry; // ivar: _applicationRegistry
@property (readonly) HMDBulletinBoard *bulletinBoard; // ivar: _bulletinBoard
@property (readonly) BOOL canSuspendWalletKey;
@property (readonly) NSObject<HMDHomeWalletDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMDFileManager> *fileManager; // ivar: _fileManager
@property (readonly) BOOL hasHomeKeyInWallet;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property BOOL isWalletKeyUpdateOperationInProgress; // ivar: _isWalletKeyUpdateOperationInProgress
@property (readonly) id *isoCredentialFactory; // ivar: _isoCredentialFactory
@property (readonly) NSObject<HAPKeyStore> *keychainStore; // ivar: _keychainStore
@property (readonly) HMDLostModeManager *lostModeManager; // ivar: _lostModeManager
@property (retain) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly) NSObject<HMDWalletPassLibrary> *passLibrary; // ivar: _passLibrary
@property (readonly, copy) NSString *passSerialNumber;
@property (readonly) NSMutableArray *pendingUpdateWalletKeyOperations; // ivar: _pendingUpdateWalletKeyOperations
@property (readonly) Class superclass;
@property (readonly) HMFSystemInfo *systemInfo; // ivar: _systemInfo
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid
@property (readonly) HMDWatchManager *watchManager; // ivar: _watchManager
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)homekitErrorWithPassLibraryError:(id)arg0 ;
+(id)logCategory;
+(id)preferenceKeyForShouldRollWalletKeyAfterHH2MigrationForHomeUUID:(id)arg0 ;
+(id)responsePayloadForPairedWatchesWithMessageName:(id)arg0 responsePayloadByDevice:(id)arg1 error:(id)arg2 ;
+(void)_markHome:(id)arg0 asNeedingWalletKeyRollAfterHH2Migration:(BOOL)arg1 ;
-(BOOL)canAutoAddWalletKeyWithError:(*id)arg0 ;
-(BOOL)updatePassJSONAtURL:(id)arg0 withWalletKey:(id)arg1 options:(NSInteger)arg2 ;
-(id)createPassDirectoryWithResourceFiles;
-(id)createPassDirectoryWithoutResourceFiles;
-(id)fetchWalletKeyColorOption;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 fileManager:(id)arg2 passLibrary:(id)arg3 notificationCenter:(id)arg4 watchManager:(id)arg5 keychainStore:(id)arg6 lostModeManager:(id)arg7 dataSource:(id)arg8 bulletinBoard:(id)arg9 applicationRegistry:(id)arg10 systemInfo:(id)arg11 isoCredentialFactory:(id)arg12 ;
-(id)logIdentifier;
-(id)passSerialNumberWithUserUUID:(id)arg0 ;
-(id)walletKeyByAddingAccessCodeToWalletKey:(id)arg0 ;
-(void)accessoryManager:(id)arg0 didUpdateWalletKeyColor:(NSInteger)arg1 ;
-(void)addISOCredentialWithPassAtURL:(id)arg0 walletKey:(id)arg1 completion:(id)arg2 ;
-(void)addWalletKey:(id)arg0 withOptions:(NSInteger)arg1 assertion:(id)arg2 ;
-(void)addWalletKeyWithOptions:(NSInteger)arg0 completion:(id)arg1 ;
-(void)addWalletKeyWithOptions:(NSInteger)arg0 nfcReaderKey:(id)arg1 completion:(id)arg2 ;
-(void)autoAddWalletKey;
-(void)autoAddWalletKeyWithReason:(id)arg0 completion:(id)arg1 ;
-(void)configureWithHome:(id)arg0 ;
-(void)createExpressModeSetUpBulletin;
-(void)createPassDirectoryWithWalletKey:(id)arg0 options:(NSInteger)arg1 shouldSkipResourceFiles:(BOOL)arg2 shouldCreateZipArchive:(BOOL)arg3 completion:(id)arg4 ;
-(void)enableExpressWithOptions:(NSInteger)arg0 completion:(id)arg1 ;
-(void)enqueueWalletKeyUpdateOperation:(id)arg0 ;
-(void)fetchExpressEnablementConflictingPassDescriptionWithCompletion:(id)arg0 ;
-(void)fetchHomeKeySupportedWithCompletion:(id)arg0 ;
-(void)fetchOrCreateReaderKeyWithCompletion:(id)arg0 ;
-(void)fetchPayloadForAddWalletKeyRemoteMessage:(id)arg0 ;
-(void)fetchShouldAutoEnableExpressWithCompletion:(id)arg0 ;
-(void)fetchShouldSuppressWalletNotificationWithCompletion:(id)arg0 ;
-(void)handleAccessCodeChanged;
-(void)handleAccessorySupportsAccessCodeDidChangeNotification:(id)arg0 ;
-(void)handleAccessorySupportsWalleyKeyDidChangeNotification:(id)arg0 ;
-(void)handleAddWalletKeyMessage:(id)arg0 ;
-(void)handleApplicationInstalled:(id)arg0 ;
-(void)handleApplicationUninstalled:(id)arg0 ;
-(void)handleEnableExpressForWalletKeyMessage:(id)arg0 ;
-(void)handleFetchAvailableWalletKeyEncodedPKPassMessage:(id)arg0 ;
-(void)handleFetchDeviceStateMessage:(id)arg0 ;
-(void)handleFetchWalletKeyColorMessage:(id)arg0 ;
-(void)handleHomeAccessoryRemovedNotification:(id)arg0 ;
-(void)handleHomeAddedAccessoryNotification:(id)arg0 ;
-(void)handleHomeDidUpdateNFCReaderKeyNotification:(id)arg0 ;
-(void)handleHomeHasOnboardedForWalletKeyChangeNotification:(id)arg0 ;
-(void)handleHomeNameChangedNotification:(id)arg0 ;
-(void)handleHomeRemovedNotification:(id)arg0 ;
-(void)handleHomeUserRemovedNotification:(id)arg0 ;
-(void)handleLostModeManagerDidExitLostModeWithAuthCompleteNotification;
-(void)handleLostModeUpdated;
-(void)handleMessageForPairedWatches:(id)arg0 ;
-(void)handleNFCReaderKeyUpdatedForWalletKey:(id)arg0 ;
-(void)handlePendingWalletKeyUpdateOperations;
-(void)handlePersistWalletKeyAddOptionsRemoteMessage:(id)arg0 ;
-(void)handleSystemInfoMigrationUpdatedNotification:(id)arg0 ;
-(void)passLibrary:(id)arg0 didAddPassWithSerialNumber:(id)arg1 typeIdentifier:(id)arg2 ;
-(void)passLibrary:(id)arg0 didRemovePassWithSerialNumber:(id)arg1 typeIdentifier:(id)arg2 ;
-(void)recoverDueToUUIDChangeOfUser:(id)arg0 fromOldUUID:(id)arg1 ;
-(void)removeWalletKeyOnboardingBulletin;
-(void)sendMessageWithName:(id)arg0 payload:(id)arg1 toWatches:(id)arg2 completion:(id)arg3 ;
-(void)showExpressEnabledNotificationForWalletKey:(id)arg0 ;
-(void)syncDeviceCredentialKey:(id)arg0 ;
-(void)syncDeviceCredentialKeyForAccessory:(id)arg0 ;
-(void)updateDeviceStateWithCanAddWalletKey:(id)arg0 completion:(id)arg1 ;
-(void)updateDeviceStateWithExpressEnablementConflictingPassDescription:(id)arg0 completion:(id)arg1 ;
-(void)updateDeviceStateWithWalletKey:(id)arg0 completion:(id)arg1 ;
-(void)updateWalletKeyAccessCodeFieldWithReason:(id)arg0 ;
-(void)updateWalletKeyStateToState:(NSInteger)arg0 ;
-(void)walletDidEnableAddingPassesForPassLibrary:(id)arg0 ;


@end


#endif