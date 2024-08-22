// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPACCESSORYSERVERBROWSER_H
#define CHIPACCESSORYSERVERBROWSER_H

@class HAPAccessoryServerBrowser, CHIPDeviceController, NSString, NSMutableSet, NSOperationQueue;
@protocol CHIPPluginResidentStateManagerDelegate, CHIPPluginStorageDelegate, HMFLogging, HAPAccessoryServerBrowserDelegate, OS_dispatch_queue;


#import "CHIPPluginResidentStateManager.h"
#import "CHIPPluginStorage.h"

@interface CHIPAccessoryServerBrowser : HAPAccessoryServerBrowser <CHIPPluginResidentStateManagerDelegate, CHIPPluginStorageDelegate, HMFLogging>



@property (retain) CHIPDeviceController *chipController; // ivar: _chipController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAPAccessoryServerBrowserDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableSet *discoveredAccessoryServers; // ivar: _discoveredAccessoryServers
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CHIPPluginResidentStateManager *residentStateManager; // ivar: _residentStateManager
@property (retain) NSOperationQueue *restartQueue; // ivar: _restartQueue
@property (readonly, nonatomic) NSMutableSet *stagedAccessoryServers; // ivar: _stagedAccessoryServers
@property (readonly, nonatomic) CHIPPluginStorage *storage; // ivar: _storage
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(NSInteger)linkType;
-(NSUInteger)_readNodeIDSync;
-(id)_allServers;
-(id)_createCHIPAccessoryForNodeID:(NSUInteger)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)logIdentifier;
-(id)stagedAccessoryServerWithIdentifier:(id)arg0 ;
-(void)_cleanupDiscoveredServers;
-(void)_cleanupStagedServers;
-(void)_deleteOldPairings;
-(void)_restartChipStack;
-(void)_setNodeIDSync:(NSUInteger)arg0 ;
-(void)_setupPairedDevices;
-(void)commitStagedAccessoryServer:(id)arg0 ;
-(void)discardStagedAccessoryServerWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg0 ;
-(void)invalidateAccessoryServer:(id)arg0 ;
-(void)invalidateAllDiscoveredServers;
-(void)matchAccessoryServerWithSetupID:(id)arg0 serverIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareForServerWithSetupCode:(id)arg0 discriminator:(id)arg1 identifier:(id)arg2 category:(id)arg3 name:(id)arg4 vendorID:(id)arg5 productID:(id)arg6 serialNumber:(id)arg7 completeionHandler:(id)arg8 ;
-(void)residentStateManagerDidUpdateIsCurrentDevicePrimaryResident:(id)arg0 ;
-(void)restartChipStack;
-(void)setupPairedDevices;
-(void)stageAccessoryServerWithSetupPayload:(id)arg0 completionHandler:(id)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)storageDidBecomeAvailable:(id)arg0 ;
-(void)storageDidUpdateData:(id)arg0 isLocalChange:(BOOL)arg1 ;


@end


#endif