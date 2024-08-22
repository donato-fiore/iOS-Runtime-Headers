// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARSESSIONCONFIGURATION_H
#define CARSESSIONCONFIGURATION_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface CARSessionConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *PPID; // ivar: _PPID
@property (readonly, nonatomic) NSArray *altScreenSuggestUIURLs; // ivar: _altScreenSuggestUIURLs
@property (nonatomic) NSEdgeInsets dashboardRoundedCorners; // ivar: _dashboardRoundedCorners
@property (nonatomic) NSInteger defaultUserInterfaceStyle; // ivar: _defaultUserInterfaceStyle
@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly, copy, nonatomic) NSString *endpointIdentifier; // ivar: _endpointIdentifier
@property (nonatomic) BOOL hasAccessory; // ivar: _hasAccessory
@property (copy, nonatomic) NSDictionary *infoResponse; // ivar: _infoResponse
@property (readonly, nonatomic) NSArray *lastOnDisplayUIContextURLs; // ivar: _lastOnDisplayUIContextURLs
@property (readonly, nonatomic) NSUInteger limitableUserInterfaces; // ivar: _limitableUserInterfaces
@property (copy, nonatomic) NSString *manufacturerIconLabel; // ivar: _manufacturerIconLabel
@property (nonatomic) BOOL manufacturerIconVisible; // ivar: _manufacturerIconVisible
@property (copy, nonatomic) NSArray *manufacturerIcons; // ivar: _manufacturerIcons
@property (readonly, copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (readonly, copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL nightModeSupported; // ivar: _nightModeSupported
@property (readonly, nonatomic) NSArray *nowOnDisplayUIContextURLs; // ivar: _nowOnDisplayUIContextURLs
@property (readonly, nonatomic) NSInteger nowPlayingAlbumArtMode; // ivar: _nowPlayingAlbumArtMode
@property (readonly, nonatomic) BOOL rightHandDrive; // ivar: _rightHandDrive
@property (readonly, copy, nonatomic) NSArray *screenIDs; // ivar: _screenIDs
@property (readonly, copy, nonatomic) NSArray *screens; // ivar: _screens
@property (readonly, nonatomic) BOOL supportsACBack; // ivar: _supportsACBack
@property (nonatomic) BOOL supportsElectronicTollCollection; // ivar: _supportsElectronicTollCollection
@property (readonly, nonatomic) BOOL supportsSiriMixable; // ivar: _supportsSiriMixable
@property (readonly, nonatomic) BOOL supportsSiriZLL; // ivar: _supportsSiriZLL
@property (readonly, nonatomic) BOOL supportsSiriZLLButton; // ivar: _supportsSiriZLLButton
@property (readonly, nonatomic) NSUInteger transportType; // ivar: _transportType
@property (readonly, nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (readonly, nonatomic) NSArray *vehicleButtons; // ivar: _vehicleButtons
@property (readonly, copy, nonatomic) NSString *vehicleFirmwareVersion; // ivar: _vehicleFirmwareVersion
@property (readonly, copy, nonatomic) NSString *vehicleHardwareVersion; // ivar: _vehicleHardwareVersion
@property (readonly, copy, nonatomic) NSString *vehicleManufacturer; // ivar: _vehicleManufacturer
@property (readonly, copy, nonatomic) NSString *vehicleModelName; // ivar: _vehicleModelName
@property (readonly, copy, nonatomic) NSString *vehicleName; // ivar: _vehicleName
@property (readonly, copy, nonatomic) NSString *vehicleSerialNumber; // ivar: _vehicleSerialNumber
@property (readonly, nonatomic) BOOL vehicleSupportsCNG; // ivar: _vehicleSupportsCNG
@property (readonly, nonatomic) BOOL vehicleSupportsDestinationSharing; // ivar: _vehicleSupportsDestinationSharing
@property (readonly, nonatomic) BOOL vehicleSupportsDiesel; // ivar: _vehicleSupportsDiesel
@property (readonly, nonatomic) BOOL vehicleSupportsElectric; // ivar: _vehicleSupportsElectric
@property (readonly, nonatomic) BOOL vehicleSupportsGasoline; // ivar: _vehicleSupportsGasoline
@property (readonly, nonatomic) NSEdgeInsets viewAreaInsets; // ivar: _viewAreaInsets
@property (readonly, nonatomic) NSInteger voiceTriggerMode; // ivar: _voiceTriggerMode


+(NSInteger)_defaultInterfaceStyleFromAppearanceDefault:(id)arg0 ;
+(NSUInteger)_limitableUserInterfacesFromLimitedUIValues:(id)arg0 ;
+(id)_descriptionForTransportType:(NSUInteger)arg0 ;
+(id)descriptionForCapability:(NSInteger)arg0 ;
+(id)descriptionForEdgeInsets:(struct NSEdgeInsets )arg0 ;
+(id)descriptionForUserInterfaceStyle:(NSInteger)arg0 ;
-(id)description;
-(id)descriptionForLimitableUserInterfaces;
-(id)descriptionForTransportType;
-(id)descriptionForVoiceTriggerMode;
-(id)initForCarPlayShell:(BOOL)arg0 propertySupplier:(id)arg1 ;
-(id)primaryDisplayPhysicalSize;
-(id)screenInfoForScreenID:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)updateCarCapabilities;


@end


#endif