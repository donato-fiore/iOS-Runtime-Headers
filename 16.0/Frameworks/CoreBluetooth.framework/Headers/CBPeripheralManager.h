// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBPERIPHERALMANAGER_H
#define CBPERIPHERALMANAGER_H

@class NSMapTable, NSMutableDictionary, NSHashTable, NSNumber, NSMutableArray, NSLock;
@protocol CBPeripheralManagerDelegate;


#import "CBManager.h"

@interface CBPeripheralManager : CBManager {
    ? _delegateFlags;
    BOOL _observingKeyPaths;
}


@property NSUInteger attributeIDGenerator; // ivar: _attributeIDGenerator
@property (readonly, retain, nonatomic) NSMapTable *centrals; // ivar: _centrals
@property (readonly, retain, nonatomic) NSMutableDictionary *characteristicIDs; // ivar: _characteristicIDs
@property (weak, nonatomic) NSObject<CBPeripheralManagerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *incomingConnectionRequestCompletion; // ivar: _incomingConnectionRequestCompletion
@property (nonatomic) BOOL isAdvertising; // ivar: _isAdvertising
@property (readonly, nonatomic, getter=supportsMultipleAdvertising) BOOL isSupportingMultipleAdvertising;
@property (readonly, retain, nonatomic) NSHashTable *l2capChannels; // ivar: _l2capChannels
@property (retain, nonatomic) NSNumber *multipleAdvertisingSupported; // ivar: _multipleAdvertisingSupported
@property (readonly, nonatomic) BOOL readyForUpdates; // ivar: _readyForUpdates
@property (readonly, retain, nonatomic) NSMutableArray *services; // ivar: _services
@property (readonly, retain, nonatomic) NSLock *updateLock; // ivar: _updateLock
@property (readonly, nonatomic) BOOL waitingForReady; // ivar: _waitingForReady


+(BOOL)supportsFeatures:(NSUInteger)arg0 ;
+(NSInteger)authorizationStatus;
-(BOOL)isMsgAllowedAlways:(unsigned short)arg0 ;
-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg0 ;
-(BOOL)updateValue:(id)arg0 forCharacteristic:(id)arg1 onSubscribedCentrals:(id)arg2 ;
-(id)centralWithIdentifier:(id)arg0 ;
-(id)centralWithInfo:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 options:(id)arg2 ;
-(id)l2capChannelForPeer:(id)arg0 withPsm:(unsigned short)arg1 ;
-(id)peerWithInfo:(id)arg0 ;
-(void)HandleControllerPeripheralBTClockUpdateMsg:(id)arg0 ;
-(void)HandleOfflineAdvPayloadRequestedWithReason:(id)arg0 ;
-(void)addService:(id)arg0 ;
-(void)dealloc;
-(void)forEachCentral:(id)arg0 ;
-(void)handleAdvertisingAddressChanged:(id)arg0 ;
-(void)handleAdvertisingStarted:(id)arg0 ;
-(void)handleAdvertisingStopped:(id)arg0 ;
-(void)handleCentralDidUpdateANCSAuthorization:(id)arg0 ;
-(void)handleConnectionParametersUpdated:(id)arg0 ;
-(void)handleGetAttributeValue:(id)arg0 ;
-(void)handleIncomingCISConnectionRequest:(id)arg0 ;
-(void)handleL2CAPChannelClosed:(id)arg0 ;
-(void)handleL2CAPChannelOpened:(id)arg0 ;
-(void)handleL2CAPChannelPublished:(id)arg0 ;
-(void)handleL2CAPChannelUnpublished:(id)arg0 ;
-(void)handleMsg:(unsigned short)arg0 args:(id)arg1 ;
-(void)handleNotificationAdded:(id)arg0 ;
-(void)handleNotificationRemoved:(id)arg0 ;
-(void)handlePeriodicAdvertisingStarted:(id)arg0 ;
-(void)handlePeriodicAdvertisingStopped:(id)arg0 ;
-(void)handleReadyForUpdates:(id)arg0 ;
-(void)handleRestoringState:(id)arg0 ;
-(void)handleServiceAdded:(id)arg0 ;
-(void)handleSetAttributeValues:(id)arg0 ;
-(void)handleSolicitedServicesFound:(id)arg0 ;
-(void)handleSupportedFeatures:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)overrideLocalLeAddress:(id)arg0 ;
-(void)publishL2CAPChannel:(unsigned short)arg0 requiresEncryption:(BOOL)arg1 ;
-(void)publishL2CAPChannel:(unsigned short)arg0 requiresEncryption:(BOOL)arg1 options:(id)arg2 ;
-(void)publishL2CAPChannel:(unsigned short)arg0 requiresEncryption:(BOOL)arg1 priority:(NSInteger)arg2 ;
-(void)publishL2CAPChannelWithEncryption:(BOOL)arg0 ;
-(void)publishL2CAPChannelWithEncryption:(BOOL)arg0 priority:(NSInteger)arg1 ;
-(void)removeAllL2CAPChannels;
-(void)removeAllServices;
-(void)removeService:(id)arg0 ;
-(void)respondToRequest:(id)arg0 withResult:(NSInteger)arg1 ;
-(void)respondToTransaction:(id)arg0 value:(id)arg1 attributeID:(id)arg2 result:(NSInteger)arg3 ;
-(void)retrieveBluetoothUsageStatistics:(id)arg0 completion:(id)arg1 ;
-(void)setDesiredConnectionLatency:(NSInteger)arg0 forCentral:(id)arg1 ;
-(void)setOfflineAdvertisingParamsAndData:(id)arg0 ;
-(void)startAdvertising:(id)arg0 ;
-(void)startPeriodicAdvertising:(id)arg0 ;
-(void)stopAdvertising;
-(void)stopPeriodicAdvertising:(id)arg0 ;
-(void)unpublishL2CAPChannel:(unsigned short)arg0 ;


@end


#endif