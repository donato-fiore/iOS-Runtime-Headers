// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFMODESCONFIGURATION_H
#define AFMODESCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFModesConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger buttonPressDetected; // ivar: _buttonPressDetected
@property (readonly, nonatomic) NSInteger deviceOrientation; // ivar: _deviceOrientation
@property (readonly, nonatomic) NSInteger deviceRaised; // ivar: _deviceRaised
@property (readonly, nonatomic) NSInteger faceDetected; // ivar: _faceDetected
@property (readonly, nonatomic) NSInteger flatDevicePosture; // ivar: _flatDevicePosture
@property (readonly, nonatomic) NSInteger isBacklightOn; // ivar: _isBacklightOn
@property (readonly, nonatomic) BOOL isConnectedToCarPlay; // ivar: _isConnectedToCarPlay
@property (readonly, nonatomic) BOOL isEyesFree; // ivar: _isEyesFree
@property (readonly, nonatomic) BOOL isForCarDND; // ivar: _isForCarDND
@property (readonly, nonatomic) NSInteger isInSleepLock; // ivar: _isInSleepLock
@property (readonly, nonatomic) NSInteger isInTheaterMode; // ivar: _isInTheaterMode
@property (readonly, nonatomic) NSInteger isInWaterLock; // ivar: _isInWaterLock
@property (readonly, nonatomic) NSInteger isInWorkout; // ivar: _isInWorkout
@property (readonly, nonatomic) NSInteger isOnWrist; // ivar: _isOnWrist
@property (readonly, nonatomic) BOOL isRequestMadeWithPhysicalDeviceInteraction; // ivar: _isRequestMadeWithPhysicalDeviceInteraction
@property (readonly, nonatomic) BOOL isVoiceTriggerRequest; // ivar: _isVoiceTriggerRequest
@property (readonly, copy, nonatomic) NSString *modeOverrideValue; // ivar: _modeOverrideValue
@property (readonly, nonatomic) NSInteger touchScreenDetected; // ivar: _touchScreenDetected
@property (readonly, nonatomic) BOOL userTypedInSiri; // ivar: _userTypedInSiri


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIsEyesFree:(BOOL)arg0 isForCarDND:(BOOL)arg1 isVoiceTriggerRequest:(BOOL)arg2 isConnectedToCarPlay:(BOOL)arg3 isRequestMadeWithPhysicalDeviceInteraction:(BOOL)arg4 userTypedInSiri:(BOOL)arg5 modeOverrideValue:(id)arg6 deviceRaised:(NSInteger)arg7 faceDetected:(NSInteger)arg8 touchScreenDetected:(NSInteger)arg9 buttonPressDetected:(NSInteger)arg10 flatDevicePosture:(NSInteger)arg11 deviceOrientation:(NSInteger)arg12 isInWorkout:(NSInteger)arg13 isBacklightOn:(NSInteger)arg14 isInWaterLock:(NSInteger)arg15 isInSleepLock:(NSInteger)arg16 isInTheaterMode:(NSInteger)arg17 isOnWrist:(NSInteger)arg18 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif