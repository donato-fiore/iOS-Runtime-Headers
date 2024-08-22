// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KEYBOARDBACKLIGHT_H
#define KEYBOARDBACKLIGHT_H

@class HIDElement, NSMutableArray, NSMutableDictionary, NSLock, NSString, HIDDevice;
@protocol CBContainerModuleProtocol, CBHIDServiceProtocol, OS_dispatch_source;


#import "CBModule.h"

@interface KeyboardBacklight : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol>

 {
    BOOL _muted;
    BOOL _keyboardAvailable;
    BOOL _manualAdjust;
    BOOL _saturated;
    BOOL _dimmed;
    BOOL _suspend;
    BOOL _suspendDimming;
    BOOL _userActive;
    BOOL _displayOn;
    float _previousLevelPercentage;
    int _numOfBacklightUpdateRetries;
    HIDElement *_levelElement;
    HIDElement *_levelFadeSpeedElement;
    HIDElement *_enableElement;
    HIDElement *_enableFadeSpeedElement;
    NSMutableArray *_elements;
    NSMutableArray *_alsServiceClients;
    NSUInteger _activityNotificationHandle;
    NSMutableDictionary *_properties;
    NSObject<OS_dispatch_source> *_forceLuxUpdateTimer;
    NSObject<OS_dispatch_source> *_backlightUpdateTimer;
    HIDElement *_enableAuthenticationElement;
    BOOL _backlightUpdateInProgress;
    NSLock *_backlightUpdateLock;
    mach_timebase_info _clockInfo;
    int _backlightUpdateFrequency;
    NSUInteger _lastBacklightUpdate;
    NSUInteger _backlightUpdateType;
    int _turnOnBacklightDelayMS;
    BOOL _forceDelayToTurnOnBacklight;
    NSObject<OS_dispatch_source> *_rampTimer;
    Ramp _ramp;
    *IONotificationPort _deviceManagementArrivalNotificationPort;
    unsigned int _deviceManagementArrivalIterator;
}


@property (readonly) float ambientHighThreshold; // ivar: _ambientHighThreshold
@property (readonly) float ambientLowThreshold; // ivar: _ambientLowThreshold
@property float ambientOffset; // ivar: _ambientOffset
@property (readonly) float ambientSlope; // ivar: _ambientSlope
@property BOOL autoAdjust; // ivar: _autoAdjust
@property float brightness;
@property BOOL builtIn; // ivar: _builtIn
@property int color; // ivar: _color
@property float currentLux; // ivar: _currentLux
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property HIDDevice *device; // ivar: _device
@property int dimTime; // ivar: _dimTime
@property BOOL dimmed;
@property (readonly) NSUInteger hash;
@property BOOL keyboardAvailable;
@property NSUInteger keyboardID; // ivar: _keyboardID
@property (retain) NSMutableDictionary *keyboardSpecificPreferences; // ivar: _keyboardSpecificPreferences
@property float levelMax; // ivar: _levelMax
@property float levelMin; // ivar: _levelMin
@property float levelOff; // ivar: _levelOff
@property float levelPercentage; // ivar: _levelPercentage
@property unsigned int levelUnit; // ivar: _levelUnit
@property BOOL manualAdjust;
@property (readonly) float maxUserLevel;
@property BOOL muted;
@property float previousLevel; // ivar: _previousLevel
@property BOOL saturated;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsAuthentication;
@property (readonly) BOOL suppressed;
@property BOOL suspend;
@property unsigned int unitExponent; // ivar: _unitExponent
@property BOOL userActive;


+(NSUInteger)getHashIDForDevice:(id)arg0 ;
-(BOOL)KBAuthenticationHandler:(id)arg0 ;
-(BOOL)KBAutoBrightnessEnablePropertyHandler:(id)arg0 ;
-(BOOL)KBAutoBrightnessSuspendPropertyHandler:(id)arg0 ;
-(BOOL)KBAvailabilityUpdateHandler:(id)arg0 ;
-(BOOL)KBBrightnessPropertyHandler:(id)arg0 ;
-(BOOL)KBDisplayBrightnessFactorPropertyHandler:(id)arg0 ;
-(BOOL)KBIdleDimPropertyHandler:(id)arg0 ;
-(BOOL)KBIdleDimTimeHandler:(id)arg0 ;
-(BOOL)KBSuspendDimmingPropertyHandler:(id)arg0 ;
-(BOOL)KBUpdateFrequencyHandler:(id)arg0 ;
-(BOOL)KBUserActivityUpdateHandler:(id)arg0 ;
-(BOOL)KBUserOffsetPropertyHandler:(id)arg0 ;
-(BOOL)addHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)retrieveKeyboardBacklightElements;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(CGFloat)timeToNextBacklightUpdate;
-(float)level;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 withParameter:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 device:(id)arg1 ;
-(id)initWithQueue:(id)arg0 device:(id)arg1 ambientOffset:(float)arg2 ;
-(void)calculateLevelPercentageAtAmbient:(float)arg0 ;
-(void)dealloc;
-(void)didUpdateBacklightLevel:(float)arg0 brightness:(float)arg1 result:(BOOL)arg2 error:(id)arg3 ;
-(void)endKeyDim;
-(void)forceBacklightUpdateRoutine;
-(void)forceLuxUpdate;
-(void)forceLuxUpdateRoutine;
-(void)getCurrentLux;
-(void)getKeyboardBacklightPreferences;
-(void)handleDeviceManagementArrival:(unsigned int)arg0 ;
-(void)handleLuxUpdate:(float)arg0 ;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)handlePMUserActivityStateChanged:(NSUInteger)arg0 ;
-(void)rampToBrightness:(float)arg0 withDuration:(unsigned int)arg1 ;
-(void)resetKeyDimTimeout;
-(void)scheduleBacklightUpdate:(int)arg0 ;
-(void)sendNotificationForKey:(id)arg0 withValue:(id)arg1 ;
-(void)sendSuppressedNotification:(BOOL)arg0 ;
-(void)setKBPreferenceBacklightMaxUser;
-(void)start;
-(void)startKBDeviceManagementServiceLookup;
-(void)startRamp;
-(void)stop;
-(void)stopKBDeviceManagementServiceLookup;
-(void)stopRamp;
-(void)storeKeyboardBacklightPreferences;
-(void)timerRoutine:(id)arg0 ;
-(void)toggleMute;
-(void)updateAmbientOffset;
-(void)updateAuthentication:(BOOL)arg0 ;
-(void)updateBacklightDevice;
-(void)updateBacklightDeviceWithFadeSpeed:(int)arg0 commit:(BOOL)arg1 reason:(NSUInteger)arg2 ;
-(void)updateBacklightDeviceWithReason:(NSUInteger)arg0 ;


@end


#endif