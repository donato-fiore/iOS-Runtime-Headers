// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBRECALIBRATEPROXIMITYSENSORHARDWAREBUTTONINTERACTION_H
#define SBRECALIBRATEPROXIMITYSENSORHARDWAREBUTTONINTERACTION_H

@class NSString;
@protocol SBProximitySensorManagerObserver, SBHardwareButtonInteraction;


#import "SBHardwareButtonGestureParametersProviderBase.h"
#import "SBProximitySensorManager.h"

@interface SBRecalibrateProximitySensorHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBProximitySensorManagerObserver, SBHardwareButtonInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didResetProxCalibration; // ivar: _didResetProxCalibration
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBProximitySensorManager *sensorManager; // ivar: _sensorManager
@property (readonly) Class superclass;


-(BOOL)_disallowsAnyPressForReason:(*id)arg0 ;
-(BOOL)consumeInitialPressDown;
-(BOOL)consumeSinglePressUp;
-(BOOL)disallowsDoublePressForReason:(*id)arg0 ;
-(BOOL)disallowsLongPressForReason:(*id)arg0 ;
-(BOOL)disallowsSinglePressForReason:(*id)arg0 ;
-(BOOL)disallowsTriplePressForReason:(*id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)hardwareButtonGestureParameters;
-(id)initWithProximitySensorManager:(id)arg0 ;


@end


#endif