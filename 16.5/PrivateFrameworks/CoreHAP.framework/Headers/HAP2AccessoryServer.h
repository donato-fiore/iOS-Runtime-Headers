// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVER_H
#define HAP2ACCESSORYSERVER_H

@class NSArray, NSString, HMFVersion, NSBackgroundActivityScheduler, NSData;
@protocol HAP2PairedAccessoryServerPrivate, HAPAccessoryReachabilityDelegate, HAP2UnpairedAccessoryServerPrivate, HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerPrivate, HAP2AccessoryServer, HAP2AccessoryServerMetadata, HAP2Cancelable, HAP2AccessoryServerPairingDriver, HAP2UnpairedAccessoryServerPairDelegate, HAPAccessoryReachabilityClient, HAPAccessoryReachabilityProfile, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerControllerPrivate, HAP2AccessoryServerDelegate, HAP2Accessory;


#import "HAP2LoggingObject.h"
#import "HAP2PropertyLock.h"
#import "HAPDeviceID.h"
#import "HAP2SerializedOperationQueue.h"

@interface HAP2AccessoryServer : HAP2LoggingObject <HAP2PairedAccessoryServerPrivate, HAPAccessoryReachabilityDelegate, HAP2UnpairedAccessoryServerPrivate, HAP2AccessoryServerPairingDriverDelegate, HAP2AccessoryServerPrivate, HAP2AccessoryServer>

 {
    BOOL _internallyPaired;
    id<HAP2AccessoryServerMetadata> *_currentMetadata;
    NSArray *_privateAccessories;
    NSString *_pairedName;
    HMFVersion *_pairedProtocolVersion;
    id<HAP2Cancelable> *_outstandingUpdateAccessoriesRequest;
    id<HAP2AccessoryServerPairingDriver> *_internalPairingDriver;
    id<HAP2UnpairedAccessoryServerPairDelegate> *_pairDelegate;
    id<HAPAccessoryReachabilityClient> *_reachability;
    id<HAPAccessoryReachabilityProfile> *_reachabilityProfile;
    NSBackgroundActivityScheduler *_backgroundScheduler;
    HAP2PropertyLock *_propertyLock;
}


@property (readonly, nonatomic) NSArray *accessories;
@property (readonly, weak, nonatomic) NSObject<HAP2AccessoryServerBrowserPrivate> *browser;
@property (readonly, weak, nonatomic) NSObject<HAP2AccessoryServerBrowserPrivate> *browser;
@property (readonly, weak, nonatomic) NSObject<HAP2AccessoryServerBrowserPrivate> *browser; // ivar: _browser
@property (readonly, nonatomic) NSUInteger category;
@property (readonly, nonatomic) NSUInteger category;
@property (readonly, nonatomic) NSUInteger category;
@property (readonly, nonatomic) unsigned short configNumber;
@property (readonly, nonatomic) unsigned short configNumber;
@property (readonly, nonatomic) unsigned short configNumber;
@property (readonly, nonatomic) NSUInteger connectionState;
@property (readonly, nonatomic) NSUInteger connectionState;
@property (readonly, nonatomic) NSUInteger connectionState; // ivar: _connectionState
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerControllerPrivate> *controller;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerControllerPrivate> *controller;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerControllerPrivate> *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAP2AccessoryServerDelegate> *delegate;
@property (weak, nonatomic) NSObject<HAP2AccessoryServerDelegate> *delegate;
@property (weak, nonatomic) NSObject<HAP2AccessoryServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HAPDeviceID *deviceID;
@property (readonly, nonatomic) HAPDeviceID *deviceID;
@property (readonly, nonatomic) HAPDeviceID *deviceID;
@property (readonly, nonatomic) BOOL hasDiscoveryAdvertisement;
@property (readonly, nonatomic) BOOL hasDiscoveryAdvertisement;
@property (nonatomic) BOOL hasDiscoveryAdvertisement; // ivar: _hasDiscoveryAdvertisement
@property (readonly, nonatomic) BOOL hasPairings;
@property (readonly, nonatomic) BOOL hasPairings;
@property (readonly, nonatomic) BOOL hasPairings;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerPairingDriver> *pairingDriver;
@property (readonly, nonatomic) NSObject<HAP2Accessory> *primaryAccessory;
@property (retain, nonatomic) NSString *productData;
@property (retain, nonatomic) NSString *productData;
@property (retain, nonatomic) NSString *productData; // ivar: _productData
@property (readonly, nonatomic) HMFVersion *protocolVersion;
@property (readonly, nonatomic) HMFVersion *protocolVersion;
@property (readonly, nonatomic) HMFVersion *protocolVersion;
@property (readonly, copy, nonatomic) NSString *reachabilityChangedReason;
@property (readonly, copy, nonatomic) NSString *reachabilityChangedReason;
@property (copy, nonatomic) NSString *reachabilityChangedReason; // ivar: _reachabilityChangedReason
@property (readonly, nonatomic) CGFloat sessionCheckInterval;
@property (readonly, nonatomic) CGFloat sessionCheckInterval;
@property (readonly, nonatomic) CGFloat sessionCheckInterval; // ivar: _sessionCheckInterval
@property (readonly, nonatomic) NSData *setupHash;
@property (readonly, nonatomic) NSData *setupHash;
@property (readonly, nonatomic) NSData *setupHash;
@property (readonly, nonatomic) NSString *setupID;
@property (retain, nonatomic) NSString *setupID; // ivar: _setupID
@property (readonly, nonatomic) unsigned short stateNumber;
@property (readonly, nonatomic) unsigned short stateNumber;
@property (readonly, nonatomic) unsigned short stateNumber;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)new;
+(id)pairedAccessoryServerWithMetadata:(id)arg0 browser:(id)arg1 controller:(id)arg2 operationQueue:(id)arg3 ;
+(id)unpairedAccessoryServerWithMetadata:(id)arg0 browser:(id)arg1 controller:(id)arg2 pairingDriver:(id)arg3 operationQueue:(id)arg4 ;
-(BOOL)isConfirming;
-(id)addPairing:(id)arg0 completion:(id)arg1 ;
-(id)disableNotificationsForCharacteristics:(id)arg0 completion:(id)arg1 ;
-(id)enableNotificationsForCharacteristics:(id)arg0 completion:(id)arg1 ;
-(id)getPairingsWithCompletion:(id)arg0 ;
-(id)identifyWithCompletion:(id)arg0 ;
-(id)init;
-(id)pairWithDelegate:(id)arg0 ;
-(id)readValuesForCharacteristics:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;
-(id)removePairing:(id)arg0 completion:(id)arg1 ;
-(id)unpairWithCompletion:(id)arg0 ;
-(id)updateAccessoriesWithReason:(id)arg0 ;
-(id)writeValuesForCharacteristics:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;
-(void)_performBackgroundPollWithCompletion:(id)arg0 ;
-(void)_setBackgroundActivityScheduler:(id)arg0 ;
-(void)becomePairedWithAccessoryServer:(id)arg0 ;
-(void)becomeUnpairedWithAccessoryServer:(id)arg0 ;
-(void)clearAccessories;
-(void)closeSession;
-(void)dealloc;
-(void)handleEvents:(id)arg0 ;
-(void)handleLostDiscoveryAdvertisement;
-(void)handleLostDiscoveryAdvertisementWithWillSleep:(BOOL)arg0 ;
-(void)handleNetworkChanged;
-(void)handleReestablishedSession;
-(void)handleUpdatedCharacteristicValues:(id)arg0 ;
-(void)mergeWithNewlyDiscoveredPairedAccessoryServer:(id)arg0 ;
-(void)mergeWithNewlyDiscoveredUnpairedAccessoryServer:(id)arg0 ;
-(void)pairingDriver:(id)arg0 authenticateSoftwareAuthUUID:(id)arg1 token:(id)arg2 completion:(id)arg3 ;
-(void)pairingDriver:(id)arg0 confirmSoftwareAuthUUID:(id)arg1 token:(id)arg2 completion:(id)arg3 ;
-(void)pairingDriver:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)pairingDriver:(id)arg0 didFinishAuthWithError:(id)arg1 ;
-(void)pairingDriver:(id)arg0 didRejectSetupCodeForAccessory:(id)arg1 backoffInterval:(CGFloat)arg2 completion:(id)arg3 ;
-(void)pairingDriver:(id)arg0 didRequestLocalPairingIdentityWithCompletion:(id)arg1 ;
-(void)pairingDriver:(id)arg0 didSaveRemotePairingIdentity:(id)arg1 completion:(id)arg2 ;
-(void)pairingDriver:(id)arg0 doesRequirePermission:(NSUInteger)arg1 accessory:(id)arg2 completion:(id)arg3 ;
-(void)pairingDriver:(id)arg0 doesRequireSetupCodeForAccessory:(id)arg1 completion:(id)arg2 ;
-(void)pairingDriver:(id)arg0 validatePairingCert:(id)arg1 model:(id)arg2 completion:(id)arg3 ;
-(void)pairingDriver:(id)arg0 validateSoftwareAuthUUID:(id)arg1 token:(id)arg2 model:(id)arg3 completion:(id)arg4 ;
-(void)pollAccessory;
-(void)startConfirming;
-(void)stopConfirming;
-(void)verifyConnection;


@end


#endif