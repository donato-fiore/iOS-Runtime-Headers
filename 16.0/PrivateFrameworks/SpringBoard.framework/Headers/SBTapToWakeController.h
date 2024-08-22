// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTAPTOWAKECONTROLLER_H
#define SBTAPTOWAKECONTROLLER_H

@class NSString, SBIdleTimerDefaults, SBFTapToWakeGestureRecognizer, NSHashTable;
@protocol UIGestureRecognizerDelegate, SBTapToWakeDelegate;

#import <Foundation/Foundation.h>

#import "SBInactiveTouchShieldWindow.h"

@interface SBTapToWakeController : NSObject <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBTapToWakeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDigitizerInTapToWakeMode) BOOL digitizerInTapToWakeMode; // ivar: _digitizerInTapToWakeMode
@property (nonatomic) BOOL digitizerModeRequiresHitTestSuppression; // ivar: _digitizerModeRequiresHitTestSuppression
@property (nonatomic, getter=_gesturesEnabled, setter=_setGesturesEnabled:) BOOL gesturesEnabled; // ivar: _gesturesEnabled
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_isHitTestSuppressionEnabled, setter=_setHitTestSuppressionEnabled:) BOOL hitTestSuppressionEnabled; // ivar: _hitTestSuppressionEnabled
@property (retain, nonatomic) SBIdleTimerDefaults *idleTimerDefaults; // ivar: _idleTimerDefaults
@property (readonly, nonatomic, getter=_inactiveTouchShieldWindow) SBInactiveTouchShieldWindow *inactiveTouchShieldWindow; // ivar: _inactiveTouchShieldWindow
@property (retain, nonatomic) SBFTapToWakeGestureRecognizer *pencilToWakeGestureRecognizer; // ivar: _pencilToWakeGestureRecognizer
@property (readonly, nonatomic, getter=_recycledInactiveTouchShieldWindows) NSHashTable *recycledInactiveTouchShieldWindows; // ivar: _recycledInactiveTouchShieldWindows
@property (readonly, nonatomic) BOOL shouldTapToWake;
@property (readonly) Class superclass;
@property (retain, nonatomic) SBFTapToWakeGestureRecognizer *tapToWakeGestureRecognizer; // ivar: _tapToWakeGestureRecognizer


+(BOOL)isTapToWakeSupported;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)init;
-(void)_evaluateEnablement;
-(void)pencilToWakeDidRecognize:(id)arg0 ;
-(void)tapToWakeDidRecognize:(id)arg0 ;


@end


#endif