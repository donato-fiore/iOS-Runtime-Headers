// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EAACCESSORY_H
#define EAACCESSORY_H

@class NSString, NSArray;
@protocol EAAccessoryDelegate;

#import <Foundation/Foundation.h>

#import "EAAccessoryInternal.h"

@interface EAAccessory : NSObject {
    EAAccessoryInternal *_internal;
}


@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) NSUInteger connectionID;
@property (nonatomic) NSObject<EAAccessoryDelegate> *delegate;
@property (readonly, nonatomic) NSString *dockType;
@property (readonly, nonatomic) NSString *firmwareRevision;
@property (readonly, nonatomic) NSString *hardwareRevision;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) NSString *modelNumber;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *protocolStrings;
@property (readonly, nonatomic) NSString *serialNumber;


-(BOOL)_internalNotPresentInIAPAccessoriesArray;
-(BOOL)accessoryHasNMEASentencesAvailable;
-(BOOL)containsSameProtocolsAsiAPAccessoryProtocols:(id)arg0 ;
-(BOOL)createdByCoreAccessories;
-(BOOL)getEphemerisExpirationInterval:(*CGFloat)arg0 ;
-(BOOL)getEphemerisRecommendRefreshInterval:(*CGFloat)arg0 ;
-(BOOL)getEphemerisURL:(*id)arg0 ;
-(BOOL)getNMEASentence:(*id)arg0 ;
-(BOOL)hasIPConnection;
-(BOOL)isAvailableOverBonjour;
-(BOOL)pointOfInterestHandoffEnabled;
-(BOOL)sendDestinationInformation:(id)arg0 identifier:(id)arg1 ;
-(BOOL)sendEphemeris:(id)arg0 ;
-(BOOL)sendEphemerisPointDataGpsWeek:(NSUInteger)arg0 gpsTOW:(CGFloat)arg1 latitude:(CGFloat)arg2 longitude:(CGFloat)arg3 accuracy:(unsigned short)arg4 ;
-(BOOL)sendGPRMCDataStatusValueA:(BOOL)arg0 ValueV:(BOOL)arg1 ValueX:(BOOL)arg2 ;
-(BOOL)sendGpsWeek:(NSUInteger)arg0 gpsTOW:(CGFloat)arg1 ;
-(BOOL)sendPointOfInterestInformation:(id)arg0 identifier:(unsigned short)arg1 ;
-(BOOL)setNMEASentencesToFilter:(id)arg0 ;
-(BOOL)shouldBeHiddenFromUI;
-(BOOL)supportsAccessibility;
-(BOOL)supportsCamera;
-(BOOL)supportsCarPlay;
-(BOOL)supportsCarPlayAppLinks;
-(BOOL)supportsCarPlayConnectionRequest;
-(BOOL)supportsDestinationSharing;
-(BOOL)supportsLocation;
-(BOOL)supportsOOBBTPairing;
-(BOOL)supportsOOBBTPairing2;
-(BOOL)supportsPointOfInterest;
-(BOOL)supportsPublicIap;
-(BOOL)supportsUSBCarPlay;
-(BOOL)supportsWirelessCarPlay;
-(NSInteger)transportType;
-(NSUInteger)destinationSharingOptions;
-(id)_createWakeToken;
-(id)_initWithAccessory:(id)arg0 ;
-(id)_protocolIDForProtocolString:(id)arg0 ;
-(id)_shortDescription;
-(id)allPublicProtocolStrings;
-(id)audioPorts;
-(id)bonjourName;
-(id)cameraComponents;
-(id)certData;
-(id)certSerial;
-(id)coreAccessoriesPrimaryUUID;
-(id)description;
-(id)dictionaryWithLowercaseKeys:(id)arg0 ;
-(id)eqNames;
-(id)getVehicleInfoData;
-(id)init;
-(id)macAddress;
-(id)ppid;
-(id)preferredApp;
-(id)protocolDetails;
-(id)regionCode;
-(id)vehicleInfoInitialData;
-(id)vehicleInfoSupportedTypes;
-(id)wakeToken;
-(int)captureStillImage:(unsigned int)arg0 forCameraIds:(id)arg1 ;
-(int)classType;
-(int)locationSentenceTypesMask;
-(int)setCameraProperties:(unsigned int)arg0 forCameraId:(unsigned short)arg1 withProperties:(id)arg2 ;
-(int)startCameraInfo:(unsigned int)arg0 forCameraIds:(id)arg1 ;
-(int)startCameraUpdates:(unsigned int)arg0 forCameraIds:(id)arg1 withProperties:(id)arg2 withCapabilities:(id)arg3 ;
-(int)startLivePreview:(unsigned int)arg0 forCameraIds:(id)arg1 ;
-(int)stopCameraInfo:(unsigned int)arg0 forCameraIds:(id)arg1 ;
-(int)stopCameraUpdates:(unsigned int)arg0 forCameraIds:(id)arg1 ;
-(int)stopLivePreview:(unsigned int)arg0 forCameraIds:(id)arg1 ;
-(unsigned int)_internalConnectionID;
-(unsigned int)accessoryCapabilities;
-(unsigned int)eqIndex;
-(void)_OOBBTPairingCompletedWithStatus:(unsigned char)arg0 forAccessoryWithMACAddress:(id)arg1 ;
-(void)_addSession:(id)arg0 ;
-(void)_endSession:(unsigned int)arg0 ;
-(void)_openCompleteForSession:(unsigned int)arg0 ;
-(void)_removeSession:(id)arg0 ;
-(void)_setNotPresentInIAPAccessoriesArray:(BOOL)arg0 ;
-(void)_updateAccessoryInfo:(id)arg0 ;
-(void)addNMEASentence:(id)arg0 ;
-(void)beginOOBBTPairingWithCompletionBlock:(id)arg0 ;
-(void)dealloc;
-(void)getIAPTimeSyncInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)requestIAPAccessoryWiFiCredentials;
-(void)resetIAPTimeSyncKalmanFilter;
-(void)sendDeviceIdentifierNotification:(id)arg0 usbIdentifier:(id)arg1 ;
-(void)sendWiredCarPlayAvailable:(id)arg0 usbIdentifier:(id)arg1 wirelessCarPlayAvailable:(id)arg2 bluetoothIdentifier:(id)arg3 ;
-(void)setCameraComponents:(id)arg0 ;
-(void)setDestinationSharingOptions:(NSUInteger)arg0 ;
-(void)setEqIndex:(unsigned int)arg0 ;
-(void)setEqNames:(id)arg0 ;
-(void)setIAPTimeSyncParams:(id)arg0 ;
-(void)setLocationSentenceTypesMask:(int)arg0 ;
-(void)setPointOfInterestHandoffEnabled:(BOOL)arg0 ;
-(void)setVehicleInfoSupportedTypes:(id)arg0 ;
-(void)setVehicleInfovehicleInfoInitialData:(id)arg0 ;
-(void)updateItemProperty:(int)arg0 withValue:(id)arg1 ;
-(void)updateSystemProperty:(int)arg0 withValue:(id)arg1 ;


@end


#endif