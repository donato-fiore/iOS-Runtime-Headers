// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NIGHTMODECONTROL_H
#define NIGHTMODECONTROL_H

@class NSMutableDictionary, NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SunriseSunsetProvider.h"
#import "CBAnalyticsNightShiftTracker.h"

@interface NightModeControl : NSObject {
    NSMutableDictionary *_properties;
    SunriseSunsetProvider *_sunriseSunsetProvider;
    int _sunriseSunsetInfoQueryTimeout;
    NSDictionary *_sunriseSunsetInfo;
    NSMutableArray *_supportObjs;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nextTransitionTimer;
    NSObject<OS_dispatch_source> *_transitionTimer;
    CBAnalyticsNightShiftTracker *_modeTracker;
    int _algoState;
    float _transitionLength;
    float _transitionLengthActual;
    float _transitionsTimesCoeff;
    float _transitionRate;
    float _minFactor;
    float _maxFactor;
    NMFactorState _factorState;
    *__CFTimeZone _currentTimeZone;
    CGFloat _sunsetAbsolute;
    CGFloat _sunsetPreviousAbsolute;
    CGFloat _sunriseAbsolute;
    CGFloat _sunrisePreviousAbsolute;
    CGFloat _offTransitionTimeAbsoluteUnrestricted;
    CGFloat _offTransitionTimeAbsoluteUnrestrictedPrev;
    BOOL _transitionTimesValid;
    BOOL _isDaylight;
    int _currentScheduledTransitionType;
    CGFloat _displayOffTimestamp;
    CGFloat _untilNexTransitionTimestamp;
    float _inactivityTimeout;
    BOOL _checkInactivity;
    BOOL _displayOff;
    int _logLevel;
    id *_callbackBlock;
    ? _status;
    ? _backupSchedule;
    BOOL _statusUpdated;
    NSString *_currentSunriseKey;
    NSString *_currentSunsetKey;
    NSString *_previousSunriseKey;
    NSString *_previousSunsetKey;
    NSString *_nextSunriseKey;
    NSString *_nextSunsetKey;
    NSString *_isDaylightKey;
    int _notifyUserAboutScheduleCounter;
    *__CFUserNotification _enableNotification;
    BOOL _notificationInProgress;
    BOOL _revertToSunriseSunset;
}




-(BOOL)parseStatusDictionary:(id)arg0 intoStruct:(struct ? *)arg1 shouldUpdatePrefs:(*BOOL)arg2 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)updateTransitionTimesFromSchedule:(CGFloat)arg0 ;
-(BOOL)updateTransitionTimesFromSunriseSunset:(CGFloat)arg0 ;
-(id)copyDictionaryFromStatus:(struct ? *)arg0 ;
-(id)copyLowPowerModeState;
-(id)copyPreferenceForKey:(id)arg0 user:(id)arg1 ;
-(id)copyStatusDictionaryFromPrefs;
-(id)copyTimeStringWithHour:(int)arg0 minute:(int)arg1 second:(int)arg2 ;
-(id)getPropertyForKey:(id)arg0 ;
-(id)initWithSupportObject:(id)arg0 queue:(id)arg1 callback:(id)arg2 ;
-(void)addSupportObject:(id)arg0 ;
-(void)cancelSchedule;
-(void)cancelTransition;
-(void)clockChanged;
-(void)dealloc;
-(void)displayAlertInteractive:(BOOL)arg0 ;
-(void)enableBlueLightReduction:(BOOL)arg0 withOption:(int)arg1 ;
-(void)initiateFullMaxTransition;
-(void)initiateFullMinTransition;
-(void)initiateRestrictedMaxTransition;
-(void)initiateTransitionTo:(float)arg0 andRampLength:(float)arg1 ;
-(void)reevaluateCurrentState;
-(void)reevaluateCurrentStateWithFactorFadeOption:(float)arg0 ;
-(void)removeSupportObject:(id)arg0 ;
-(void)retrieveSunriseSunsetTimesFromBackup:(CGFloat)arg0 ;
-(void)saveStatusToPrefs:(id)arg0 ;
-(void)scheduleNextTransition:(CGFloat)arg0 withType:(int)arg1 ;
-(void)setAlgoState:(int)arg0 ;
-(void)setMode:(int)arg0 ;
-(void)setNightModeFactor:(float)arg0 ;
-(void)setNightModeFactor:(float)arg0 withFadePeriod:(float)arg1 ;
-(void)setNightShiftFactorDictionary:(id)arg0 ;
-(void)setPreference:(id)arg0 forKey:(id)arg1 user:(id)arg2 ;
-(void)setSchedule:(id)arg0 ;
-(void)setSunPermitted:(BOOL)arg0 ;
-(void)tearDownAllTimers;
-(void)timeZoneChanged;
-(void)transitionTimerHandler;
-(void)updateLowPowerModeState:(id)arg0 ;
-(void)updateOptionTimestamp:(CGFloat)arg0 ;
-(void)updateStatusDictionaryWithValue:(id)arg0 forKey:(id)arg1 ;
-(void)updateSunriseSunsetBackup;
-(void)updateSunriseSunsetInfo:(id)arg0 ;
-(void)updateTransitionTimes:(CGFloat)arg0 ;


@end


#endif