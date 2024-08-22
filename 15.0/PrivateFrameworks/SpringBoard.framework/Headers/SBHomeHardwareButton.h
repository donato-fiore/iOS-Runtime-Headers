// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMEHARDWAREBUTTON_H
#define SBHOMEHARDWAREBUTTON_H

@class NSMutableSet, NSMutableOrderedSet, BKSButtonHapticsDefinition, NSString, NSMutableDictionary, UIGestureRecognizer;
@protocol UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBHomeHardwareButtonActions.h"
#import "SBHardwareButtonGestureParameters.h"
#import "SBHomeHardwareButtonGestureRecognizerConfiguration.h"

@interface SBHomeHardwareButton : NSObject <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver>

 {
    id<BSInvalidatable> *_fingerDetectEnabledAssertion;
    NSMutableSet *_hintSuppressionAssertions;
    NSMutableOrderedSet *_longPressDurationAssertions;
}


@property (retain, nonatomic) SBHomeHardwareButtonActions *buttonActions; // ivar: _buttonActions
@property (retain, nonatomic) BKSButtonHapticsDefinition *buttonDefinition; // ivar: _buttonDefinition
@property (readonly, nonatomic, getter=isButtonDown) BOOL buttonDown;
@property (retain, nonatomic) SBHardwareButtonGestureParameters *buttonGestureParameters; // ivar: _buttonGestureParameters
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *emulatedPerSenderDownCount; // ivar: _emulatedPerSenderDownCount
@property (retain, nonatomic) SBHomeHardwareButtonGestureRecognizerConfiguration *gestureRecognizerConfiguration; // ivar: _gestureRecognizerConfiguration
@property (nonatomic) NSInteger hapticType;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger homeButtonType; // ivar: _homeButtonType
@property (nonatomic) BOOL longPressDidOccur; // ivar: _longPressDidOccur
@property (nonatomic) NSInteger maximumPressCount; // ivar: _maximumPressCount
@property (nonatomic) NSInteger maximumTapCount; // ivar: _maximumTapCount
@property (weak, nonatomic) UIGestureRecognizer *screenshotGestureRecognizer; // ivar: _screenshotGestureRecognizer
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAcceleratedAppDismiss;


-(BOOL)_acceleratedSinglePressRecognizerShouldBegin;
-(BOOL)_isMenuDoublePressAllowed:(*id)arg0 ;
-(BOOL)_isMenuDoublePressDisabled;
-(BOOL)_longPressGestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)_processDoubleDownAndDoubleUpSimultaneously;
-(BOOL)emulateHomeButtonEventsIfNeeded:(struct __IOHIDEvent *)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg0 homeButtonType:(NSInteger)arg1 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg0 homeButtonType:(NSInteger)arg1 buttonActions:(id)arg2 gestureRecognizerConfiguration:(id)arg3 ;
-(void)_cancelGestureRecognizer:(id)arg0 ;
-(void)_createGestureRecognizersWithConfiguration:(id)arg0 ;
-(void)_reconfigureGestureRecognizersForNewMaximumPressCount:(NSInteger)arg0 oldMaximumPressCount:(NSInteger)arg1 ;
-(void)_reconfigureGestureRecognizersForNewMaximumTapCount:(NSInteger)arg0 oldMaximumTapCount:(NSInteger)arg1 ;
-(void)_reconfigureHomeButton;
-(void)_setFingerDetectionEnabled:(BOOL)arg0 ;
-(void)_singlePressUp:(id)arg0 ;
-(void)_startObservingReconfigurationTriggers;
-(void)_terminateHomeButtonEventAtCount:(NSInteger)arg0 ;
-(void)acceleratedSinglePressUp:(id)arg0 ;
-(void)addHintSuppressionAssertion:(id)arg0 ;
-(void)addLongPressDurationAssertion:(id)arg0 ;
-(void)cancelLongPress;
-(void)configureForwardingToLockButton:(id)arg0 ;
-(void)doublePressDown:(id)arg0 ;
-(void)doublePressUp:(id)arg0 ;
-(void)doubleTapUp:(id)arg0 ;
-(void)initialButtonDown:(id)arg0 ;
-(void)initialButtonUp:(id)arg0 ;
-(void)longPress:(id)arg0 ;
-(void)performAfterMenuButtonUpIsHandledUsingBlock:(id)arg0 ;
-(void)performWhenMenuButtonIsUpUsingBlock:(id)arg0 ;
-(void)provider:(id)arg0 didUpdateButtonGestureParameters:(id)arg1 ;
-(void)removeHintSuppressionAssertion:(id)arg0 ;
-(void)removeLongPressDurationAssertion:(id)arg0 ;
-(void)screenshotRecognizerDidRecognize:(id)arg0 ;
-(void)singlePressUp:(id)arg0 ;
-(void)triplePressUp:(id)arg0 ;


@end


#endif