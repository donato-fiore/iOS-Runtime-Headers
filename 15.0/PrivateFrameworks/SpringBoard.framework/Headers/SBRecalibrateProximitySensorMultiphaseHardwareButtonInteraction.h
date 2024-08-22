// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBRECALIBRATEPROXIMITYSENSORMULTIPHASEHARDWAREBUTTONINTERACTION_H
#define SBRECALIBRATEPROXIMITYSENSORMULTIPHASEHARDWAREBUTTONINTERACTION_H

@class NSString, BSTimer;
@protocol SBProximitySensorManagerObserver, SBHardwareButtonInteraction;


#import "SBHardwareButtonGestureParametersProviderBase.h"
#import "SBProximitySensorManager.h"

@interface SBRecalibrateProximitySensorMultiphaseHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBProximitySensorManagerObserver, SBHardwareButtonInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger phase; // ivar: _phase
@property (retain, nonatomic) SBProximitySensorManager *sensorManager; // ivar: _sensorManager
@property (readonly) Class superclass;
@property (retain, nonatomic) BSTimer *timer; // ivar: _timer


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
-(void)_transitionToPhase:(NSInteger)arg0 ;
-(void)_transitionToPhase:(NSInteger)arg0 timeout:(CGFloat)arg1 ;
-(void)dealloc;
-(void)proximitySensorManager:(id)arg0 objectWithinProximityDidChange:(BOOL)arg1 ;


@end


#endif