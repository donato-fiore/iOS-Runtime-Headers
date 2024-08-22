// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ACCESSORYSERVERBROWSER_H
#define HAP2ACCESSORYSERVERBROWSER_H

@class NSMutableArray, NSArray, NSString, NSOperationQueue, NSMapTable;
@protocol HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerDelegate, HAP2StorageDelegate, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerBrowser, HAP2AccessoryServerBrowserDelegate, HAP2Storage;


#import "HAP2LoggingObject.h"
#import "HAP2AccessoryServerBrowserOperation.h"
#import "HAP2PropertyLock.h"
#import "HAP2SerializedOperationQueue.h"

@interface HAP2AccessoryServerBrowser : HAP2LoggingObject <HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerDelegate, HAP2StorageDelegate, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerBrowser>



@property (readonly, nonatomic) NSMutableArray *browserOperationQueue; // ivar: _browserOperationQueue
@property (nonatomic, getter=isConfirming) BOOL confirming; // ivar: _confirming
@property (readonly, nonatomic) NSArray *coordinatorInfo; // ivar: _coordinatorInfo
@property (readonly, nonatomic) HAP2AccessoryServerBrowserOperation *currentOperation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAP2AccessoryServerBrowserDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDiscovering) BOOL discovering; // ivar: _discovering
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *livePairedAccessoryServers; // ivar: _livePairedAccessoryServers
@property (retain, nonatomic) NSMutableArray *liveUnpairedAccessoryServers; // ivar: _liveUnpairedAccessoryServers
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, copy, nonatomic) NSArray *pairedAccessoryServers;
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock; // ivar: _propertyLock
@property (readonly, nonatomic) NSObject<HAP2Storage> *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *unpairedAccessoryServers;
@property (readonly, nonatomic) NSMapTable *weakOperationQueuesByDeviceID; // ivar: _weakOperationQueuesByDeviceID
@property (readonly, nonatomic) HAP2SerializedOperationQueue *workQueue; // ivar: _workQueue


+(id)new;
-(id)_lookupPairedAccessoryServerWithDeviceID:(id)arg0 ;
-(id)_removeAccessoryServerFromArray:(id)arg0 withDeviceID:(id)arg1 ;
-(id)init;
-(id)initWithCoordinators:(id)arg0 storage:(id)arg1 ;
-(id)operationQueueForDeviceID:(id)arg0 ;
-(void)_beginOperation;
-(void)_enqueueOperation:(id)arg0 ;
-(void)_finishOperation;
-(void)_finishStartDiscovering;
-(void)_finishStopDiscovering;
-(void)_notifyCoordinatorsOfAccessoryWithDeviceID:(id)arg0 ;
-(void)_startDiscovering;
-(void)_stopDiscovering;
-(void)_updateArraysForDiscoveredAccessoryServer:(id)arg0 paired:(BOOL)arg1 lost:(*id)arg2 existing:(*id)arg3 ;
-(void)accessoryServerDidUpdateConnectionState:(id)arg0 ;
-(void)accessoryWithDeviceIDIsPaired:(id)arg0 completion:(id)arg1 ;
-(void)coordinator:(id)arg0 didCreatePairedAccessoryServer:(id)arg1 ;
-(void)coordinator:(id)arg0 didCreateUnpairedAccessoryServer:(id)arg1 ;
-(void)coordinator:(id)arg0 didLoseAccessory:(id)arg1 error:(id)arg2 ;
-(void)coordinator:(id)arg0 didStartDiscoveringWithError:(id)arg1 ;
-(void)coordinator:(id)arg0 didStopDiscoveringWithError:(id)arg1 ;
-(void)handleCurrentNetworkChangedNotification:(id)arg0 ;
-(void)removePublicKeyForAccessoryWithID:(id)arg0 completion:(id)arg1 ;
-(void)retrieveLocalPairingIdentityForDeviceID:(id)arg0 completion:(id)arg1 ;
-(void)savePublicKey:(id)arg0 forAccessoryWithID:(id)arg1 completion:(id)arg2 ;
-(void)startConfirmingPairedAccessoryReachability;
-(void)startDiscovering;
-(void)stopConfirmingPairedAccessoryReachability;
-(void)stopDiscovering;
-(void)storage:(id)arg0 didRemoveKeyWithIdentifier:(id)arg1 ;
-(void)storage:(id)arg0 didSaveKeyWithIdentifier:(id)arg1 ;


@end


#endif