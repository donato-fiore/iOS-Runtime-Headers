// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFMODESCONFIGURATIONMUTATION_H
#define _AFMODESCONFIGURATIONMUTATION_H

@class NSString;
@protocol AFModesConfigurationMutating;

#import <Foundation/Foundation.h>

#import "AFModesConfiguration.h"

@interface _AFModesConfigurationMutation : NSObject <AFModesConfigurationMutating>

 {
    AFModesConfiguration *_baseModel;
    BOOL _isEyesFree;
    BOOL _isForCarDND;
    BOOL _isVoiceTriggerRequest;
    BOOL _isConnectedToCarPlay;
    BOOL _isRequestMadeWithPhysicalDeviceInteraction;
    BOOL _userTypedInSiri;
    NSString *_modeOverrideValue;
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


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setButtonPressDetected:(NSInteger)arg0 ;
-(void)setDeviceOrientation:(NSInteger)arg0 ;
-(void)setDeviceRaised:(NSInteger)arg0 ;
-(void)setFaceDetected:(NSInteger)arg0 ;
-(void)setFlatDevicePosture:(NSInteger)arg0 ;
-(void)setIsBacklightOn:(NSInteger)arg0 ;
-(void)setIsConnectedToCarPlay:(BOOL)arg0 ;
-(void)setIsEyesFree:(BOOL)arg0 ;
-(void)setIsForCarDND:(BOOL)arg0 ;
-(void)setIsInSleepLock:(NSInteger)arg0 ;
-(void)setIsInTheaterMode:(NSInteger)arg0 ;
-(void)setIsInWaterLock:(NSInteger)arg0 ;
-(void)setIsInWorkout:(NSInteger)arg0 ;
-(void)setIsOnWrist:(NSInteger)arg0 ;
-(void)setIsRequestMadeWithPhysicalDeviceInteraction:(BOOL)arg0 ;
-(void)setIsVoiceTriggerRequest:(BOOL)arg0 ;
-(void)setModeOverrideValue:(id)arg0 ;
-(void)setTouchScreenDetected:(NSInteger)arg0 ;
-(void)setUserTypedInSiri:(BOOL)arg0 ;


@end


#endif