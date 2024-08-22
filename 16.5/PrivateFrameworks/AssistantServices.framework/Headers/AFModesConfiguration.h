// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFMODESCONFIGURATION_H
#define AFMODESCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFModesConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger buttonPressDetected; // ivar: _buttonPressDetected
@property (readonly, nonatomic) NSInteger deviceMotion; // ivar: _deviceMotion
@property (readonly, nonatomic) NSInteger deviceOrientation; // ivar: _deviceOrientation
@property (readonly, nonatomic) NSInteger deviceRaised; // ivar: _deviceRaised
@property (readonly, nonatomic) NSInteger faceDetected; // ivar: _faceDetected
@property (readonly, nonatomic) NSInteger flatDevicePosture; // ivar: _flatDevicePosture
@property (readonly, nonatomic) NSInteger isBacklightOn; // ivar: _isBacklightOn
@property (readonly, nonatomic) BOOL isConnectedToCarPlay; // ivar: _isConnectedToCarPlay
@property (readonly, nonatomic) BOOL isDeviceScreenON; // ivar: _isDeviceScreenON
@property (readonly, nonatomic) BOOL isEyesFree; // ivar: _isEyesFree
@property (readonly, nonatomic) BOOL isForCarDND; // ivar: _isForCarDND
@property (readonly, nonatomic) BOOL isInPocket; // ivar: _isInPocket
@property (readonly, nonatomic) NSInteger isInSleepLock; // ivar: _isInSleepLock
@property (readonly, nonatomic) NSInteger isInTheaterMode; // ivar: _isInTheaterMode
@property (readonly, nonatomic) NSInteger isInWaterLock; // ivar: _isInWaterLock
@property (readonly, nonatomic) NSInteger isInWorkout; // ivar: _isInWorkout
@property (readonly, nonatomic) BOOL isMapsNavigationActive; // ivar: _isMapsNavigationActive
@property (readonly, nonatomic) BOOL isMediaPlaying; // ivar: _isMediaPlaying
@property (readonly, nonatomic) NSInteger isOnWrist; // ivar: _isOnWrist
@property (readonly, nonatomic) BOOL isRequestMadeWithPhysicalDeviceInteraction; // ivar: _isRequestMadeWithPhysicalDeviceInteraction
@property (readonly, nonatomic) BOOL isSiriAutoPrompt; // ivar: _isSiriAutoPrompt
@property (readonly, nonatomic) BOOL isUIFree; // ivar: _isUIFree
@property (readonly, nonatomic) BOOL isVoiceTriggerRequest; // ivar: _isVoiceTriggerRequest
@property (readonly, nonatomic) BOOL liftToWakeDetected; // ivar: _liftToWakeDetected
@property (readonly, copy, nonatomic) NSString *modeOverrideValue; // ivar: _modeOverrideValue
@property (readonly, nonatomic) NSInteger touchScreenDetected; // ivar: _touchScreenDetected
@property (readonly, nonatomic) BOOL userInitiatedWakeDetected; // ivar: _userInitiatedWakeDetected
@property (readonly, nonatomic) BOOL userTypedInSiri; // ivar: _userTypedInSiri


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIsEyesFree:(BOOL)arg0 isUIFree:(BOOL)arg1 isForCarDND:(BOOL)arg2 isMapsNavigationActive:(BOOL)arg3 isVoiceTriggerRequest:(BOOL)arg4 isConnectedToCarPlay:(BOOL)arg5 isRequestMadeWithPhysicalDeviceInteraction:(BOOL)arg6 isSiriAutoPrompt:(BOOL)arg7 isMediaPlaying:(BOOL)arg8 userTypedInSiri:(BOOL)arg9 modeOverrideValue:(id)arg10 isDeviceScreenON:(BOOL)arg11 isInPocket:(BOOL)arg12 liftToWakeDetected:(BOOL)arg13 userInitiatedWakeDetected:(BOOL)arg14 deviceMotion:(NSInteger)arg15 deviceRaised:(NSInteger)arg16 faceDetected:(NSInteger)arg17 touchScreenDetected:(NSInteger)arg18 buttonPressDetected:(NSInteger)arg19 flatDevicePosture:(NSInteger)arg20 deviceOrientation:(NSInteger)arg21 isInWorkout:(NSInteger)arg22 isBacklightOn:(NSInteger)arg23 isInWaterLock:(NSInteger)arg24 isInSleepLock:(NSInteger)arg25 isInTheaterMode:(NSInteger)arg26 isOnWrist:(NSInteger)arg27 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif