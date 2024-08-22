// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDEVICE_H
#define UIDEVICE_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface UIDevice : NSObject {
    NSInteger _numDeviceOrientationObservers;
    float _batteryLevel;
    NSUInteger _remoteTouchSurfaceType;
    BOOL _remoteHasMicrophone;
    ? _deviceFlags;
}


@property (nonatomic, setter=_setBacklightLevel:) float _backlightLevel;
@property (readonly, nonatomic, getter=_isHardwareKeyboardAvailable) BOOL _hardwareKeyboardAvailable;
@property (readonly, nonatomic) BOOL _supportsPencil;
@property (readonly, nonatomic) float batteryLevel;
@property (nonatomic, getter=isBatteryMonitoringEnabled) BOOL batteryMonitoringEnabled;
@property (readonly, nonatomic) NSInteger batteryState;
@property (readonly, retain, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic, getter=_feedbackSupportLevel) NSInteger feedbackSupportLevel;
@property (readonly, nonatomic, getter=isGeneratingDeviceOrientationNotifications) BOOL generatesDeviceOrientationNotifications;
@property (readonly, nonatomic) NSUUID *identifierForVendor;
@property (readonly, nonatomic) NSString *localizedModel;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic, getter=isMultitaskingSupported) BOOL multitaskingSupported;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger orientation;
@property (nonatomic, getter=isProximityMonitoringEnabled) BOOL proximityMonitoringEnabled;
@property (readonly, nonatomic) BOOL proximityState;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) NSInteger userInterfaceIdiom;


+(BOOL)_hasHomeButton;
+(BOOL)_isLowEnd;
+(BOOL)_isWatch;
+(BOOL)_isWatchCompanion;
+(NSInteger)currentDeviceOrientationAllowingAmbiguous:(BOOL)arg0 ;
+(id)currentDevice;
+(id)modelSpecificLocalizedStringKeyForKey:(id)arg0 ;
-(BOOL)_hasGraphicsQualityOverride;
-(BOOL)_hasTouchPad;
-(BOOL)_isSystemSoundEnabled;
-(BOOL)_remoteHasMicrophoneCapability;
-(BOOL)_supportsDeepColor;
-(BOOL)_supportsForceTouch;
-(NSInteger)_graphicsQuality;
-(NSInteger)_keyboardGraphicsQuality;
-(NSInteger)_nativeScreenGamut;
-(NSInteger)_predictionGraphicsQuality;
-(NSUInteger)_remoteTouchSurfaceType;
-(float)_softwareDimmingAlpha;
-(id)_deviceInfoForKey:(struct __CFString *)arg0 ;
-(id)_tapticEngine;
-(id)init;
-(void)_clearGraphicsQualityOverride;
-(void)_enableDeviceOrientationEvents:(BOOL)arg0 ;
-(void)_hardwareKeyboardAvailabilityChanged;
-(void)_loadRemoteDeviceInfoIfNeeded;
-(void)_performShimmedRequestIfPossibleForDeviceOrientation:(NSInteger)arg0 ;
-(void)_playInputDeleteSound;
-(void)_playInputSelectSound;
-(void)_playSystemSound:(unsigned int)arg0 ;
-(void)_registerForSystemSounds:(id)arg0 ;
-(void)_setActiveUserInterfaceIdiom:(NSInteger)arg0 ;
-(void)_setExpectsFaceContactInLandscape:(BOOL)arg0 ;
-(void)_setGraphicsQualityOverride:(NSInteger)arg0 ;
-(void)_setHasTouchPad:(BOOL)arg0 ;
-(void)_unregisterForSystemSounds:(id)arg0 ;
-(void)_updateSystemSoundActiveStatus:(id)arg0 ;
-(void)beginGeneratingDeviceOrientationNotifications;
-(void)dealloc;
-(void)endGeneratingDeviceOrientationNotifications;
-(void)playInputClick;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif