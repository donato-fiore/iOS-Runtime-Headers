// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WPDADVERTISINGMANAGER_H
#define WPDADVERTISINGMANAGER_H

@class NSMutableDictionary, NSMutableSet, CBPeripheralManager, NSMutableIndexSet, NSString, NSIndexSet;
@protocol CBPeripheralManagerDelegate;


#import "WPDManager.h"
#import "WPAdvertisingRequestsQueue.h"
#import "WPDAdvertisingData.h"

@interface WPDAdvertisingManager : WPDManager <CBPeripheralManagerDelegate>



@property (retain) WPAdvertisingRequestsQueue *advertisingRequests; // ivar: _advertisingRequests
@property BOOL allowCompoundAdvertisements; // ivar: _allowCompoundAdvertisements
@property (retain) NSMutableDictionary *clientAdvertisingRequests; // ivar: _clientAdvertisingRequests
@property (retain) NSMutableSet *clientsToNotifyOnAddressChange; // ivar: _clientsToNotifyOnAddressChange
@property (retain, nonatomic) CBPeripheralManager *connectablePeripheralManager; // ivar: _connectablePeripheralManager
@property (retain) NSMutableIndexSet *currentAdvertisers; // ivar: _currentAdvertisers
@property (retain, nonatomic) WPDAdvertisingData *currentConnectableAdvertisingData; // ivar: _currentConnectableAdvertisingData
@property (retain, nonatomic) WPDAdvertisingData *currentNonConnectableAdvertisingData; // ivar: _currentNonConnectableAdvertisingData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRanging;
@property (retain, nonatomic) CBPeripheralManager *nonConnectablePeripheralManager; // ivar: _nonConnectablePeripheralManager
@property (retain) NSMutableDictionary *preallocatedServices; // ivar: _preallocatedServices
@property (retain) NSMutableDictionary *publishedServices; // ivar: _publishedServices
@property (retain) NSMutableSet *rangingClients; // ivar: _rangingClients
@property (readonly, nonatomic) NSIndexSet *rangingTypes; // ivar: _rangingTypes
@property (readonly) Class superclass;


-(BOOL)heySiriAdvertActive:(BOOL)arg0 ;
-(BOOL)isAdvertiserTestMode;
-(BOOL)platformSupportsMultipleAdvertising;
-(id)NSUUIDfromCBUUID:(id)arg0 ;
-(id)addAdvertisingRequest:(id)arg0 forClient:(id)arg1 ;
-(id)advertisingRules;
-(id)clientForAdvRequest:(id)arg0 ;
-(id)generateStateDumpStrings;
-(id)getCharacteristicForClient:(id)arg0 ;
-(id)getClientUUIDsForCharacteristic:(id)arg0 ;
-(id)getCurrentAdvertisers;
-(id)getManager;
-(id)initWithServer:(id)arg0 ;
-(id)removeAdvertisingRequest:(id)arg0 forClient:(id)arg1 ;
-(id)removeAdvertisingRequest:(id)arg0 forClient:(id)arg1 shouldUpdate:(BOOL)arg2 ;
-(id)removeAdvertisingRequestsForClient:(id)arg0 ;
-(id)requestFromAdvertisingDataConnectable:(BOOL)arg0 AddressChangeNotificationNeeded:(BOOL)arg1 ;
-(void)addAdvertisingRequest:(id)arg0 forDaemon:(id)arg1 ;
-(void)addCharacteristic:(id)arg0 Properties:(NSUInteger)arg1 Permissions:(NSUInteger)arg2 Service:(id)arg3 Name:(id)arg4 ;
-(void)addCharacteristic:(id)arg0 forService:(id)arg1 forClient:(id)arg2 ;
-(void)enableRanging:(BOOL)arg0 forClient:(id)arg1 ;
-(void)informClientsAdvertisingPending:(id)arg0 ;
-(void)peripheralManager:(id)arg0 central:(id)arg1 didSubscribeToCharacteristic:(id)arg2 ;
-(void)peripheralManager:(id)arg0 central:(id)arg1 didUnsubscribeFromCharacteristic:(id)arg2 ;
-(void)peripheralManager:(id)arg0 didAddService:(id)arg1 error:(id)arg2 ;
-(void)peripheralManager:(id)arg0 didReceiveReadRequest:(id)arg1 ;
-(void)peripheralManager:(id)arg0 didReceiveWriteRequests:(id)arg1 ;
-(void)peripheralManager:(id)arg0 didStopAdvertisingWithError:(id)arg1 ;
-(void)peripheralManagerDidStartAdvertising:(id)arg0 error:(id)arg1 ;
-(void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg0 ;
-(void)preallocateServices;
-(void)removeAdvertisingRequest:(id)arg0 forDaemon:(id)arg1 ;
-(void)removeServiceForClient:(id)arg0 ;
-(void)resetAdvertisingManager;
-(void)update;
-(void)updateAdvertiser;


@end


#endif