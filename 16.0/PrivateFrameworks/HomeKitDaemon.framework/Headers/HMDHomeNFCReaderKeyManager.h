// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOMENFCREADERKEYMANAGER_H
#define HMDHOMENFCREADERKEYMANAGER_H

@class HMFObject, NAFuture, NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFMessageReceiver, HMFLogging, HMDHomeWalletDataSource, HAPSystemKeychainStore, OS_dispatch_queue;


#import "HMDHomeWalletKeyAccessoryManager.h"
#import "HMDHome.h"
#import "HMDDevice.h"

@interface HMDHomeNFCReaderKeyManager : HMFObject <HMFMessageReceiver, HMFLogging>



@property (readonly) HMDHomeWalletKeyAccessoryManager *accessoryManager; // ivar: _accessoryManager
@property (retain) NAFuture *createKeychainItemFuture; // ivar: _createKeychainItemFuture
@property (readonly) NSObject<HMDHomeWalletDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly) NSObject<HAPSystemKeychainStore> *keychainStore; // ivar: _keychainStore
@property (retain) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) HMDDevice *primaryResidentDevice;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)createNFCReaderKeyModelWithHome:(id)arg0 nfcReaderKey:(id)arg1 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 keychainStore:(id)arg2 dataSource:(id)arg3 ;
-(id)logIdentifier;
-(id)readerKeyWithKeychainItemIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)configureWithHome:(id)arg0 ;
-(void)createReaderKeyKeychainItemForHome:(id)arg0 withCompletion:(id)arg1 ;
-(void)deleteKeychainItemForNFCReaderKey;
-(void)deleteKeychainItemForNFCReaderKeyWithCompletion:(id)arg0 ;
-(void)fetchOrCreateReaderKeyWithRequiresPrivateKey:(BOOL)arg0 completion:(id)arg1 ;
-(void)handleCreateKeychainItemForReaderKeyMessage:(id)arg0 ;
-(void)handleDeleteKeychainItemForNFCReaderKey:(id)arg0 ;
-(void)handleFetchOrCreateReaderKeyMessage:(id)arg0 ;
-(void)handleHomeDidUpdateNFCReaderKeyNotification:(id)arg0 ;
-(void)handleHomeRemovedNotification:(id)arg0 ;
-(void)handleSystemKeychainStoreUpdatedNotification:(id)arg0 ;
-(void)removeKeychainItemForReaderKey:(id)arg0 home:(id)arg1 ;
-(void)requestDevice:(id)arg0 toCreateKeychainItemForReaderKeyWithCompletion:(id)arg1 ;
-(void)requestPrimaryResidentToFetchOrCreateReaderKeyWithCompletion:(id)arg0 ;


@end


#endif