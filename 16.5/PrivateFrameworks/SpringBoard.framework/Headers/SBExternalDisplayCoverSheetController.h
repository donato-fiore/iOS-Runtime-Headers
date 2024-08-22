// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBEXTERNALDISPLAYCOVERSHEETCONTROLLER_H
#define SBEXTERNALDISPLAYCOVERSHEETCONTROLLER_H

@class UIWindow, NSString, SBSDisplayLayoutElement, SBFMouseButtonDownGestureRecognizer, NSHashTable;
@protocol SBExternalDisplayCoverSheetControllerWindowFactory, SBSDisplayLayoutElementProviding, SBTouchTemplateGestureRecognizerDelegate, SBBacklightControllerObserver, SBCoverSheetPresentationManagerDismissalObserver, SBUILockStateProviding, BSInvalidatable, SBLockStateProvider;

#import <Foundation/Foundation.h>

#import "SBBacklightController.h"
#import "SBCoverSheetPresentationManager.h"
#import "SBExternalDisplayCoverSheetViewController.h"
#import "SBWindowScene.h"
#import "SBFluidScrunchGestureRecognizer.h"

@interface SBExternalDisplayCoverSheetController : NSObject <SBExternalDisplayCoverSheetControllerWindowFactory, SBSDisplayLayoutElementProviding, SBTouchTemplateGestureRecognizerDelegate, SBBacklightControllerObserver, SBCoverSheetPresentationManagerDismissalObserver, SBUILockStateProviding, BSInvalidatable>

 {
    BOOL _isInvalidated;
}


@property (readonly, nonatomic) SBBacklightController *backlightController; // ivar: _backlightController
@property (nonatomic, getter=_isCoverSheetPresented) BOOL coversheetPresented; // ivar: _coversheetPresented
@property (retain, nonatomic) UIWindow *coversheetWindow; // ivar: _coversheetWindow
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBSDisplayLayoutElement *displayLayoutElement; // ivar: _displayLayoutElement
@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;
@property (retain, nonatomic) NSObject<BSInvalidatable> *displayLayoutElementAssertion; // ivar: _displayLayoutElementAssertion
@property (copy, nonatomic) NSString *externalDisplayUUID; // ivar: _externalDisplayUUID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SBLockStateProvider> *lockStateProvider; // ivar: _lockStateProvider
@property (retain, nonatomic) SBFMouseButtonDownGestureRecognizer *mouseButtonDownGesture; // ivar: _mouseButtonDownGesture
@property (nonatomic) BOOL noAnimations; // ivar: _noAnimations
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) SBCoverSheetPresentationManager *presentationManager; // ivar: _presentationManager
@property (retain, nonatomic) SBExternalDisplayCoverSheetViewController *rootViewController; // ivar: _rootViewController
@property (weak, nonatomic, getter=_sbWindowScene) SBWindowScene *sbWindowScene; // ivar: _sbWindowScene
@property (nonatomic, getter=_isScreenOn, setter=_setScreenOn:) BOOL screenOn; // ivar: _screenOn
@property (retain, nonatomic) SBFluidScrunchGestureRecognizer *scrunchDismissGestureRecognizer; // ivar: _scrunchDismissGestureRecognizer
@property (nonatomic) BOOL shouldBeVisible; // ivar: _shouldBeVisible
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SBExternalDisplayCoverSheetControllerWindowFactory> *windowFactory; // ivar: _windowFactory


-(BOOL)_shouldIgnoreEmbeddedBacklightChangingSource:(NSInteger)arg0 ;
-(BOOL)_shouldShowExternalCoverSheet;
-(BOOL)isUILocked;
-(id)_initWithWindowScene:(id)arg0 lockStateProvider:(id)arg1 backlightController:(id)arg2 presentationManager:(id)arg3 windowFactory:(id)arg4 externalDisplayCoverSheetViewController:(id)arg5 ;
-(id)initWithWindowScene:(id)arg0 ;
-(id)newCoverSheetWindowForScene:(id)arg0 ;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(void)_embeddedLockStateDidChange:(id)arg0 ;
-(void)_handleScrunchGesture:(id)arg0 ;
-(void)_notifyObserversDidUpdateExternalDisplayCoverSheetAppearance:(BOOL)arg0 ;
-(void)_notifyObserversWillUpdateExternalDisplayCoverSheetAppearance:(BOOL)arg0 ;
-(void)_postNotificationForExternalCoverSheetVisibilityDidChange:(BOOL)arg0 ;
-(void)_setCoverSheetWindowVisible:(BOOL)arg0 fadeDuration:(CGFloat)arg1 ;
-(void)_updateExternalDisplayCoverSheetExistence;
-(void)_wakeScreenForMouseButtonDown:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)backlightController:(id)arg0 willAnimateBacklightToFactor:(float)arg1 source:(NSInteger)arg2 ;
-(void)coverSheetPresentationManagerDidChangeDismissedSinceKeyBagLock:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)updateDisplayLayoutElementWithBuilder:(id)arg0 ;


@end


#endif