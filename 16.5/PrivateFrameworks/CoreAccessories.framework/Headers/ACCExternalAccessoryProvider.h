// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACCEXTERNALACCESSORYPROVIDER_H
#define ACCEXTERNALACCESSORYPROVIDER_H

@class NSMutableSet, NSString, NSDictionary, NSXPCConnection;
@protocol ACCExternalAccessoryXPCClientProtocol, ACCExternalAccessoryProviderProtocol, ACCExternalAccessoryXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface ACCExternalAccessoryProvider : NSObject <ACCExternalAccessoryXPCClientProtocol>



@property (nonatomic) int clientCapabilities; // ivar: _clientCapabilities
@property (retain, nonatomic) NSMutableSet *currentlyConnectedAccessories; // ivar: _currentlyConnectedAccessories
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACCExternalAccessoryProviderProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *eaClientRegistrationInfo; // ivar: _eaClientRegistrationInfo
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<ACCExternalAccessoryXPCServerProtocol> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


+(id)accessoryDictionaryForLogging:(id)arg0 ;
-(id)_findAccessoryForPrimaryUUID:(id)arg0 ;
-(id)currentVehicleInfo:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 capabilities:(int)arg1 ;
-(void)ExternalAccessoryArrived:(id)arg0 ;
-(void)ExternalAccessoryLeft:(id)arg0 ;
-(void)_constructClientRegistrationInfo;
-(void)_removeAccessoryForPrimaryUUID:(id)arg0 ;
-(void)_removeAllAccessories;
-(void)accessoryCloseExternalAccessorySession:(id)arg0 ;
-(void)closeExternalAccessorySession:(id)arg0 ;
-(void)connectToServer:(BOOL)arg0 ;
-(void)createExternalAccessorySessionForProtocol:(id)arg0 accessoryUUID:(id)arg1 withEASessionReply:(id)arg2 ;
-(void)dealloc;
-(void)destinationInformation:(id)arg0 forUUID:(id)arg1 ;
-(void)destinationSharingStatus:(BOOL)arg0 forDestinationUUID:(id)arg1 supportedParams:(id)arg2 forUUID:(id)arg3 ;
-(void)enqueueLocationNMEASentence:(id)arg0 forUUID:(id)arg1 withTimestamps:(id)arg2 ;
-(void)handleIncomingExternalAccessoryData:(id)arg0 forEASessionIdentifier:(id)arg1 withReply:(id)arg2 ;
-(void)openSocketForAccessoryToApp:(id)arg0 ;
-(void)openSocketForAppToAccessory:(id)arg0 ;
-(void)requestAccessoryWifiCredentials:(id)arg0 ;
-(void)resumeEASessionData:(id)arg0 ;
-(void)sendDeviceIdentifierNotification:(id)arg0 usbIdentifier:(id)arg1 forUUID:(id)arg2 ;
-(void)sendGPRMCDataStatus:(BOOL)arg0 ValueV:(BOOL)arg1 ValueX:(BOOL)arg2 forAccessoryUUID:(id)arg3 ;
-(void)sendNMEAFilterList:(id)arg0 forAccessoryUUID:(id)arg1 ;
-(void)sendOutgoingExternalAccessoryData:(id)arg0 forEASessionIdentifier:(id)arg1 withReply:(id)arg2 ;
-(void)sendWiredCarPlayAvailable:(id)arg0 usbIdentifier:(id)arg1 wirelessAvailable:(id)arg2 bluetoothIdentifier:(id)arg3 forUUID:(id)arg4 ;
-(void)startDestinationSharingForUUID:(id)arg0 options:(NSUInteger)arg1 ;
-(void)startLocationInformationForAccessoryUUID:(id)arg0 ;
-(void)stopDestinationSharingForUUID:(id)arg0 ;
-(void)stopLocationInformationForAccessoryUUID:(id)arg0 ;
-(void)updateAccessoryInfo:(id)arg0 forUUID:(id)arg1 ;
-(void)vehicleStatusUpdate:(id)arg0 forUUID:(id)arg1 ;


@end


#endif