// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHOMEHARDWAREBUTTONACTIONS_H
#define SBHOMEHARDWAREBUTTONACTIONS_H

@class NSString;
@protocol SBHardwareButtonGestureParametersObserver, SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider;


#import "SBHardwareButtonGestureParametersProviderBase.h"
#import "SBHardwareButtonActionList.h"
#import "SBProximitySensorManager.h"
#import "SBHardwareButtonService.h"
#import "SBHardwareButtonGestureParameters.h"

@interface SBHomeHardwareButtonActions : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver>

 {
    BOOL _screenWasDimOnMenuDown;
    BOOL _dontUnlockOnButtonUp;
    NSInteger _homeButtonType;
    SBHardwareButtonActionList *_buttonUpActions;
    SBHardwareButtonActionList *_buttonUpPostActions;
    NSUInteger _menuButtonHoldStartTime;
    CGFloat _menuButtonHoldStartAbsoluteTime;
    SBProximitySensorManager *_proximitySensorManager;
    SBHardwareButtonService *_hardwareButtonService;
    id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> *_accessibilityButtonInteraction;
    id<SBHardwareButtonInteraction><SBHardwareButtonGestureParametersProvider> *_siriButtonInteraction;
    SBHardwareButtonGestureParameters *_accessibilityGestureParameters;
    SBHardwareButtonGestureParameters *_siriGestureParameters;
}


@property (nonatomic, getter=isButtonDown) BOOL buttonDown; // ivar: _buttonDown
@property (nonatomic) CGFloat currentLongPressDuration; // ivar: _currentLongPressDuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_performButtonPreflightActions;
-(BOOL)_shouldIgnorePressesDueToProxOrIdle:(*id)arg0 ;
-(id)hardwareButtonGestureParameters;
-(id)initWitHomeButtonType:(NSInteger)arg0 ;
-(void)_logMenuButtonHoldTime;
-(void)configureForwardingToLockButtonActions:(id)arg0 ;
-(void)performAfterMenuButtonUpIsHandledUsingBlock:(id)arg0 ;
-(void)performDoublePressDownActions;
-(void)performDoubleTapUpActions;
-(void)performFinalButtonUpActions;
-(void)performInitialButtonDownActions;
-(void)performInitialButtonUpActions;
-(void)performLongPressActions;
-(void)performLongPressCancelledActions;
-(void)performSinglePressUpActions;
-(void)performSinglePressUpActionsWithSourceType:(NSUInteger)arg0 ;
-(void)performTriplePressUpActions;
-(void)performWhenMenuButtonIsUpUsingBlock:(id)arg0 ;
-(void)provider:(id)arg0 didUpdateButtonGestureParameters:(id)arg1 ;


@end


#endif