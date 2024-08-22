// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBEXTERNALDISPLAYCOVERSHEETCONTROLLER_H
#define SBEXTERNALDISPLAYCOVERSHEETCONTROLLER_H

@class UIWindow, NSString, SBSDisplayLayoutElement, NSHashTable;
@protocol SBExternalDisplayCoverSheetControllerWindowFactory, SBSDisplayLayoutElementProviding, SBBacklightControllerObserver, SBUILockStateProviding, BSInvalidatable, SBLockStateProvider;

#import <Foundation/Foundation.h>

#import "SBBacklightController.h"
#import "SBExternalDisplayCoverSheetViewController.h"
#import "SBWindowScene.h"

@interface SBExternalDisplayCoverSheetController : NSObject <SBExternalDisplayCoverSheetControllerWindowFactory, SBSDisplayLayoutElementProviding, SBBacklightControllerObserver, SBUILockStateProviding>



@property (readonly, nonatomic) SBBacklightController *backlightController; // ivar: _backlightController
@property (retain, nonatomic) UIWindow *blankingWindow; // ivar: _blankingWindow
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
@property (nonatomic) BOOL noAnimations; // ivar: _noAnimations
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) SBExternalDisplayCoverSheetViewController *rootViewController; // ivar: _rootViewController
@property (weak, nonatomic, getter=_sbWindowScene) SBWindowScene *sbWindowScene; // ivar: _sbWindowScene
@property (nonatomic, getter=_isScreenOn, setter=_setScreenOn:) BOOL screenOn; // ivar: _screenOn
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SBExternalDisplayCoverSheetControllerWindowFactory> *windowFactory; // ivar: _windowFactory


-(BOOL)_embeddedHasAnyLockState;
-(BOOL)_shouldIgnoreEmbeddedBacklightChangingSource:(NSInteger)arg0 ;
-(BOOL)isUILocked;
-(id)_initWithWindowScene:(id)arg0 lockStateProvider:(id)arg1 backlightController:(id)arg2 windowFactory:(id)arg3 externalDisplayCoverSheetViewController:(id)arg4 ;
-(id)initWithWindowScene:(id)arg0 ;
-(id)newBlankingWindowForScene:(id)arg0 ;
-(id)newCoverSheetWindowForScene:(id)arg0 ;
-(void)_embeddedLockStateDidChange:(id)arg0 ;
-(void)_notifyObserversDidUpdateExternalDisplayCoverSheetAppearance:(BOOL)arg0 ;
-(void)_notifyObserversWillUpdateExternalDisplayCoverSheetAppearance:(BOOL)arg0 ;
-(void)_setCoverSheetWindowVisible:(BOOL)arg0 fadeDuration:(CGFloat)arg1 ;
-(void)_updateExternalDisplayCoverSheetExistence;
-(void)addObserver:(id)arg0 ;
-(void)backlightController:(id)arg0 willAnimateBacklightToFactor:(float)arg1 source:(NSInteger)arg2 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)updateDisplayLayoutElementWithBuilder:(id)arg0 ;


@end


#endif