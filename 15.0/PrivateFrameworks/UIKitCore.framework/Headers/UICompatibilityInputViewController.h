// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICOMPATIBILITYINPUTVIEWCONTROLLER_H
#define UICOMPATIBILITYINPUTVIEWCONTROLLER_H

@class NSString, NSArray;
@protocol _UIKBDelegateAwareInputController, UITextCursorAssertion;


#import "UIInputViewController.h"
#import "UIKeyboardInputMode.h"
#import "UIKeyboard.h"
#import "UILayoutGuide.h"
#import "UIViewController.h"

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController>

 {
    UIKeyboardInputMode *_inputMode;
    UIKeyboard *_deferredSystemView;
    UIKeyboardInputMode *_incomingExtensionInputMode;
    CGFloat _incomingExtensionInputModeTime;
    CGFloat _lastSuspendedTime;
    CGFloat _currentResumeTime;
    BOOL _shouldRegenerateSizingConstraints;
    BOOL _shouldSuppressRemoteInputController;
    BOOL _tearingDownInputController;
    CGFloat _resetInputModeTime;
    NSUInteger _latestDelayTime;
    UILayoutGuide *_focusSafeAreaLayoutGuide;
}


@property (retain, nonatomic) NSObject<UITextCursorAssertion> *blinkAssertion; // ivar: _blinkAssertion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILayoutGuide *focusSafeAreaLayoutGuide;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *inputController; // ivar: _inputController
@property (retain, nonatomic) NSArray *internalEdgeMatchConstraints; // ivar: _internalEdgeMatchConstraints
@property (readonly) Class superclass;


+(BOOL)_requiresProxyInterface;
+(id)deferredInputModeControllerWithKeyboard:(id)arg0 ;
+(id)inputSnapshotViewForInputMode:(id)arg0 orientation:(NSInteger)arg1 ;
+(id)inputViewControllerWithView:(id)arg0 ;
+(void)applicationDidReceiveMemoryWarning:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(id)_compatView;
-(id)_compatibilityController;
-(id)_initAsDeferredController;
-(id)_keyboard;
-(id)_keyboardForThisViewController;
-(id)_systemViewControllerForInputMode:(id)arg0 ;
-(id)childCompatibilityController;
-(id)preferredFocusedView;
-(void)_tvUpdateAppearanceForUserInterfaceStyle;
-(void)addSnapshotViewForInputMode:(id)arg0 ;
-(void)assertCurrentInputModeIfNecessary;
-(void)dealloc;
-(void)didFinishTranslation;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)didSuspend:(id)arg0 ;
-(void)finishSplitTransition:(BOOL)arg0 ;
-(void)generateCompatibleSizeConstraintsIfNecessary;
-(void)isHosted:(id)arg0 ;
-(void)keyboardWillChangeFromDelegate:(id)arg0 toDelegate:(id)arg1 ;
-(void)killIncomingExtension;
-(void)loadView;
-(void)rebuildChildConstraints;
-(void)removeSnapshotView;
-(void)resetInputMode;
-(void)resetInputModeInMainThread;
-(void)setDeferredSystemView:(id)arg0 ;
-(void)setInputMode:(id)arg0 ;
-(void)setTearingDownInputController;
-(void)shouldUpdateInputMode:(id)arg0 ;
-(void)takeSnapshotView;
-(void)tearDownInputController;
-(void)validateInputModeIsDisplayed;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willBeginTranslation;
-(void)willResume:(id)arg0 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif