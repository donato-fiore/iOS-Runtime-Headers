// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFMODESCONFIGURATIONMUTATION_H
#define _AFMODESCONFIGURATIONMUTATION_H

@class NSString;
@protocol AFModesConfigurationMutating;

#import <Foundation/Foundation.h>

#import "AFModesConfiguration.h"

@interface _AFModesConfigurationMutation : NSObject <AFModesConfigurationMutating>

 {
    AFModesConfiguration *_base;
    BOOL _isEyesFree;
    BOOL _isUIFree;
    BOOL _isForCarDND;
    BOOL _isMapsNavigationActive;
    BOOL _isVoiceTriggerRequest;
    BOOL _isConnectedToCarPlay;
    BOOL _isRequestMadeWithPhysicalDeviceInteraction;
    BOOL _isSiriAutoPrompt;
    BOOL _isMediaPlaying;
    BOOL _userTypedInSiri;
    NSString *_modeOverrideValue;
    BOOL _isDeviceScreenON;
    BOOL _isInPocket;
    BOOL _liftToWakeDetected;
    BOOL _userInitiatedWakeDetected;
    NSInteger _deviceMotion;
    NSInteger _deviceRaised;
    NSInteger _faceDetected;
    NSInteger _touchScreenDetected;
    NSInteger _buttonPressDetected;
    NSInteger _flatDevicePosture;
    NSInteger _deviceOrientation;
    NSInteger _isInWorkout;
    NSInteger _isBacklightOn;
    NSInteger _isInWaterLock;
    NSInteger _isInSleepLock;
    NSInteger _isInTheaterMode;
    NSInteger _isOnWrist;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getIsConnectedToCarPlay;
-(BOOL)getIsDeviceScreenON;
-(BOOL)getIsEyesFree;
-(BOOL)getIsForCarDND;
-(BOOL)getIsInPocket;
-(BOOL)getIsMapsNavigationActive;
-(BOOL)getIsMediaPlaying;
-(BOOL)getIsRequestMadeWithPhysicalDeviceInteraction;
-(BOOL)getIsSiriAutoPrompt;
-(BOOL)getIsUIFree;
-(BOOL)getIsVoiceTriggerRequest;
-(BOOL)getLiftToWakeDetected;
-(BOOL)getUserInitiatedWakeDetected;
-(BOOL)getUserTypedInSiri;
-(BOOL)isDirty;
-(NSInteger)getButtonPressDetected;
-(NSInteger)getDeviceMotion;
-(NSInteger)getDeviceOrientation;
-(NSInteger)getDeviceRaised;
-(NSInteger)getFaceDetected;
-(NSInteger)getFlatDevicePosture;
-(NSInteger)getIsBacklightOn;
-(NSInteger)getIsInSleepLock;
-(NSInteger)getIsInTheaterMode;
-(NSInteger)getIsInWaterLock;
-(NSInteger)getIsInWorkout;
-(NSInteger)getIsOnWrist;
-(NSInteger)getTouchScreenDetected;
-(id)getModeOverrideValue;
-(id)initWithBase:(id)arg0 ;
-(void)setButtonPressDetected:(NSInteger)arg0 ;
-(void)setDeviceMotion:(NSInteger)arg0 ;
-(void)setDeviceOrientation:(NSInteger)arg0 ;
-(void)setDeviceRaised:(NSInteger)arg0 ;
-(void)setFaceDetected:(NSInteger)arg0 ;
-(void)setFlatDevicePosture:(NSInteger)arg0 ;
-(void)setIsBacklightOn:(NSInteger)arg0 ;
-(void)setIsConnectedToCarPlay:(BOOL)arg0 ;
-(void)setIsDeviceScreenON:(BOOL)arg0 ;
-(void)setIsEyesFree:(BOOL)arg0 ;
-(void)setIsForCarDND:(BOOL)arg0 ;
-(void)setIsInPocket:(BOOL)arg0 ;
-(void)setIsInSleepLock:(NSInteger)arg0 ;
-(void)setIsInTheaterMode:(NSInteger)arg0 ;
-(void)setIsInWaterLock:(NSInteger)arg0 ;
-(void)setIsInWorkout:(NSInteger)arg0 ;
-(void)setIsMapsNavigationActive:(BOOL)arg0 ;
-(void)setIsMediaPlaying:(BOOL)arg0 ;
-(void)setIsOnWrist:(NSInteger)arg0 ;
-(void)setIsRequestMadeWithPhysicalDeviceInteraction:(BOOL)arg0 ;
-(void)setIsSiriAutoPrompt:(BOOL)arg0 ;
-(void)setIsUIFree:(BOOL)arg0 ;
-(void)setIsVoiceTriggerRequest:(BOOL)arg0 ;
-(void)setLiftToWakeDetected:(BOOL)arg0 ;
-(void)setModeOverrideValue:(id)arg0 ;
-(void)setTouchScreenDetected:(NSInteger)arg0 ;
-(void)setUserInitiatedWakeDetected:(BOOL)arg0 ;
-(void)setUserTypedInSiri:(BOOL)arg0 ;


@end


#endif