// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKHARDWAREBUTTON_H
#define SBLOCKHARDWAREBUTTON_H

@class NSString, UIGestureRecognizer;
@protocol UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBPressPrecedenceArbiter;


#import "SBHardwareButtonGestureParametersProviderBase.h"
#import "SBLockHardwareButtonActions.h"
#import "SBPressGestureRecognizer.h"
#import "SBHardwareButtonGestureParameters.h"
#import "SBClickGestureRecognizer.h"
#import "SBHomeHardwareButton.h"
#import "SBLongPressGestureRecognizer.h"
#import "SBVolumeHardwareButton.h"

@interface SBLockHardwareButton : SBHardwareButtonGestureParametersProviderBase <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBPressPrecedenceArbiter>

 {
    NSUInteger _aggdStartTime;
    CGFloat _lastPressDownTime;
    int _sysdiagnoseDidBeginNotificationToken;
}


@property (retain, nonatomic) SBLockHardwareButtonActions *buttonActions; // ivar: _buttonActions
@property (retain, nonatomic) SBPressGestureRecognizer *buttonDownGestureRecognizer; // ivar: _buttonDownGestureRecognizer
@property (retain, nonatomic) SBHardwareButtonGestureParameters *buttonGestureParameters; // ivar: _buttonGestureParameters
@property (nonatomic) NSUInteger configuredMaximumPressCount; // ivar: _configuredMaximumPressCount
@property (nonatomic) NSUInteger currentPressCount; // ivar: _currentPressCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBClickGestureRecognizer *doublePressGestureRecognizer; // ivar: _doublePressGestureRecognizer
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger homeButtonType; // ivar: _homeButtonType
@property (weak, nonatomic) SBHomeHardwareButton *homeHardwareButton; // ivar: _homeHardwareButton
@property (readonly, nonatomic) BOOL isButtonDown;
@property (retain, nonatomic) SBLongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (retain, nonatomic) SBClickGestureRecognizer *quadruplePressGestureRecognizer; // ivar: _quadruplePressGestureRecognizer
@property (weak, nonatomic) UIGestureRecognizer *screenshotGestureRecognizer; // ivar: _screenshotGestureRecognizer
@property (weak, nonatomic) SBLongPressGestureRecognizer *shutdownGestureRecognizer; // ivar: _shutdownGestureRecognizer
@property (retain, nonatomic) SBClickGestureRecognizer *singlePressGestureRecognizer; // ivar: _singlePressGestureRecognizer
@property (readonly) Class superclass;
@property (retain, nonatomic) SBLongPressGestureRecognizer *terminalLockLongPressGestureRecognizer; // ivar: _terminalLockLongPressGestureRecognizer
@property (retain, nonatomic) SBClickGestureRecognizer *triplePressGestureRecognizer; // ivar: _triplePressGestureRecognizer
@property (weak, nonatomic) SBVolumeHardwareButton *volumeHardwareButton; // ivar: _volumeHardwareButton


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)reverseFadeOutIfNeeded;
-(id)hardwareButtonGestureParameters;
-(id)initWithScreenshotGestureRecognizer:(id)arg0 shutdownGestureRecognizer:(id)arg1 proximitySensorManager:(id)arg2 homeHardwareButton:(id)arg3 volumeHardwareButton:(id)arg4 buttonActions:(id)arg5 homeButtonType:(NSInteger)arg6 createGestures:(BOOL)arg7 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg0 shutdownGestureRecognizer:(id)arg1 proximitySensorManager:(id)arg2 homeHardwareButton:(id)arg3 volumeHardwareButton:(id)arg4 homeButtonType:(NSInteger)arg5 ;
-(id)preemptablePressGestureRecognizers;
-(void)_cancelLongPressRecognizer:(id)arg0 ;
-(void)_createGestureRecognizers;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_reconfigureButtonGestureRecognizers;
-(void)_reportAggdLoggingForButtonEventIsDownEvent:(BOOL)arg0 ;
-(void)_updatePressCountForDownEvent;
-(void)buttonDown:(id)arg0 ;
-(void)cancelLongPress;
-(void)dealloc;
-(void)doublePress:(id)arg0 ;
-(void)forceResetSequenceDidBegin;
-(void)longPress:(id)arg0 ;
-(void)provider:(id)arg0 didUpdateButtonGestureParameters:(id)arg1 ;
-(void)quadruplePress:(id)arg0 ;
-(void)screenshotRecognizerDidRecognize:(id)arg0 ;
-(void)singlePress:(id)arg0 ;
-(void)terminalLockLongPress:(id)arg0 ;
-(void)triplePress:(id)arg0 ;


@end


#endif