// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPACCESSORYSERVER_H
#define CHIPACCESSORYSERVER_H

@class HAPAccessoryServer, CHIPDeviceController, NSString, NSNumber, HMFTimer, HAPAccessory;
@protocol CHIPDevicePairingDelegate, HMFLogging, HMFTimerDelegate;


#import "CHIPAccessoryServerBrowser.h"
#import "CHIPPluginPairing.h"
#import "CHIPPluginAccessoryReachabilityManager.h"
#import "CHIPPluginStorage.h"

@interface CHIPAccessoryServer : HAPAccessoryServer <CHIPDevicePairingDelegate, HMFLogging, HMFTimerDelegate>



@property (weak, nonatomic) CHIPAccessoryServerBrowser *browser; // ivar: _browser
@property (retain, nonatomic) CHIPDeviceController *chipDeviceController; // ivar: _chipDeviceController
@property (readonly, nonatomic) CHIPPluginPairing *currentPairing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *discriminator; // ivar: _discriminator
@property (readonly) NSUInteger hash;
@property unsigned int networkProvisioningFailures; // ivar: _networkProvisioningFailures
@property (retain, nonatomic) NSNumber *nodeID; // ivar: _nodeID
@property (nonatomic) NSInteger pairedState; // ivar: _pairedState
@property (retain, nonatomic) NSNumber *pairingID; // ivar: _pairingID
@property (nonatomic) NSUInteger pairingProgress; // ivar: _pairingProgress
@property (retain, nonatomic) HMFTimer *pairingTimer; // ivar: _pairingTimer
@property (retain, nonatomic) HAPAccessory *primaryAccessoryForServer; // ivar: _primaryAccessoryForServer
@property (retain, nonatomic) NSNumber *productID; // ivar: _productID
@property (retain, nonatomic) CHIPPluginAccessoryReachabilityManager *reachabilityManager; // ivar: _reachabilityManager
@property NSUInteger reportingRetryCount; // ivar: _reportingRetryCount
@property (retain, nonatomic) HMFTimer *reportingTimer; // ivar: _reportingTimer
@property (retain, nonatomic) NSNumber *setUpPINCode; // ivar: _setUpPINCode
@property (copy, nonatomic) id *stageCompletion; // ivar: _stageCompletion
@property (weak, nonatomic) CHIPPluginStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *vendorID; // ivar: _vendorID


+(id)logCategory;
+(id)shortDescription;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)hasNetworkProvisioningFailed:(unsigned int)arg0 ;
-(BOOL)isDisabled;
-(BOOL)isPaired;
-(BOOL)isStaged;
-(BOOL)matchesSetupID:(id)arg0 ;
-(BOOL)matchesSetupID:(id)arg0 serverIdentifier:(id)arg1 ;
-(BOOL)pingSupported;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg0 completion:(id)arg1 ;
-(BOOL)stopPairingWithError:(*id)arg0 ;
-(BOOL)tryPairingPassword:(id)arg0 error:(*id)arg1 ;
-(NSInteger)communicationProtocol;
-(NSInteger)linkType;
-(id)attributeDescriptions;
-(id)deviceID;
-(id)getPairedDeviceWithError:(*id)arg0 ;
-(id)initWithKeystore:(id)arg0 browser:(id)arg1 ;
-(id)logIdentifier;
-(id)primaryAccessory;
-(id)privateDescription;
-(id)reachabilityChangedReason;
-(void)_deleteAccessoryServerData;
-(void)_handlePairingFailureWithError:(id)arg0 ;
-(void)_onNetworkCredentialsAdded:(id)arg0 networkType:(NSUInteger)arg1 networkID:(id)arg2 ;
-(void)_onNetworkEnabled:(id)arg0 networkType:(NSUInteger)arg1 ;
-(void)_pairingComplete:(id)arg0 ;
-(void)_persistAccessoryServerData;
-(void)_provisionAccessory;
-(void)_startPairingWithError:(*id)arg0 ;
-(void)_unpair:(*id)arg0 ;
-(void)_updateCommissionerVendorIDOnAccessoryPairing;
-(void)addPairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)commitStagedPairing;
-(void)didUpdateReachability:(BOOL)arg0 ;
-(void)disable;
-(void)discoverAccessories;
// -(void)enableEvents:(BOOL)arg0 forCharacteristics:(id)arg1 withCompletionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)fetchPairingsWithCompletionHandler:(id)arg0 ;
-(void)handleUpdatesForCharacteristics:(id)arg0 stateNumber:(id)arg1 ;
-(void)identifyWithCompletion:(id)arg0 ;
-(void)listPairingsWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)onAddressUpdated:(id)arg0 ;
-(void)onNetworkCredentialsRequested:(NSUInteger)arg0 ;
-(void)onPairingComplete:(id)arg0 ;
-(void)onPairingDeleted:(id)arg0 ;
-(void)onStatusUpdate:(NSUInteger)arg0 ;
-(void)openPairingWindowForDuration:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)openPairingWindowWithPINForDuration:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)readCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)removeAllPairingsWithCompletionHandler:(id)arg0 ;
-(void)removePairing:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePairing:(id)arg0 completionQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)setupReporting;
-(void)startPairingWithConsentRequired:(BOOL)arg0 config:(id)arg1 ownershipToken:(id)arg2 ;
-(void)startStagedPairingWithCompletion:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateFabricLabel:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeCharacteristicValues:(id)arg0 timeout:(CGFloat)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif