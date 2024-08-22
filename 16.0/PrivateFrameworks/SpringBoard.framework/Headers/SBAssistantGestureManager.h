// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBASSISTANTGESTUREMANAGER_H
#define SBASSISTANTGESTUREMANAGER_H

@class SBWindow<SBAssistantWindowProtocol>, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, SBFZStackParticipant;
@protocol UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBHomeGrabberPointerClickDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBAssistantGestureConfigurationObserving, SBFZStackParticipantDelegate, PTSettingsKeyObserver, SBAssistantSessionObserver, SBAssistantGestureManagerDelegate;

#import <Foundation/Foundation.h>

#import "SBSystemAnimationSettings.h"
#import "SBHomeGesturePanGestureRecognizer.h"
#import "SBAssistantContext.h"
#import "SBAssistantGestureConfiguration.h"
#import "SBTransientOverlayViewController.h"

@interface SBAssistantGestureManager : NSObject <UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBHomeGrabberPointerClickDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate, SBAssistantGestureConfigurationObserving, SBFZStackParticipantDelegate, PTSettingsKeyObserver, SBAssistantSessionObserver>

 {
    SBSystemAnimationSettings *_settings;
}


@property (readonly, nonatomic) SBWindow<SBAssistantWindowProtocol> *assistantWindow; // ivar: _assistantWindow
@property (retain, nonatomic) SBHomeGesturePanGestureRecognizer *bottomEdgeDismissGestureRecognizer; // ivar: _bottomEdgeDismissGestureRecognizer
@property (readonly, nonatomic) SBAssistantContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBAssistantGestureManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBAssistantGestureConfiguration *gestureConfiguration; // ivar: _gestureConfiguration
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger homeAffordanceSuppression; // ivar: _homeAffordanceSuppression
@property (retain, nonatomic) UIPanGestureRecognizer *panToDismissSiriGestureRecognizer; // ivar: _panToDismissSiriGestureRecognizer
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapToDismissSiriGestureRecognizer; // ivar: _tapToDismissSiriGestureRecognizer
@property (retain, nonatomic) SBTransientOverlayViewController *topmostTransientViewControllerAtPresentation; // ivar: _topmostTransientViewControllerAtPresentation
@property (retain, nonatomic) SBFZStackParticipant *zStackParticipant; // ivar: _zStackParticipant


+(BOOL)shouldDismissSiriForGestureTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)gesturesImplyFullscreenContent;
-(NSInteger)touchInterfaceOrientationForGestureRecognizer:(id)arg0 ;
-(id)_assistantRootViewController;
-(id)_createPanToDismissSiriGestureRecognizer;
-(id)_createTapToDimissSiriGestureRecognizer;
-(id)initWithAssistantWindow:(id)arg0 gestureConfiguration:(id)arg1 context:(id)arg2 ;
-(id)viewForSystemGestureRecognizer:(id)arg0 ;
-(void)_commonHandlerForSiriDismissalGesture:(id)arg0 ;
-(void)_configureHomeGesture;
-(void)_configurePanToDismissGestureDependencies;
-(void)_didUpdateHomeGestureSharing:(BOOL)arg0 ;
-(void)_didUpdateShouldDismissForSwipesOutsideContent:(BOOL)arg0 ;
-(void)_didUpdateShouldDismissForTapsOutsideContent:(BOOL)arg0 ;
-(void)_didUpdateShouldShowHomeAffordance:(BOOL)arg0 ;
-(void)_didUpdateSiriHomeAffordanceSuppression:(NSInteger)arg0 ;
-(void)_didUpdateTouchesPassThroughToSpringBoard:(BOOL)arg0 ;
-(void)_handleBottomEdgeDismissGesture:(id)arg0 ;
-(void)_pannedToDismissSiri:(id)arg0 ;
-(void)_prototypeSettingsChanged;
-(void)_removeHomeGesture;
-(void)_removeScreenEdgePanGestureRecognizerIfNecessary;
-(void)_resetDismissalSystemGestures;
-(void)_setupSystemDismissalGestures;
-(void)_tappedToDismissSiri:(id)arg0 ;
-(void)_tearDownDismissalSystemGestures;
-(void)_updateRootViewControllerOwnsHomeGesture;
-(void)_updateRootViewControllerShowsHomeAffordance:(BOOL)arg0 ;
-(void)_updateZStackParticipantWithReason:(id)arg0 ;
-(void)assistantGestureConfiguration:(id)arg0 didUpdateHomeAffordanceSuppression:(NSInteger)arg1 ;
-(void)assistantGestureConfiguration:(id)arg0 didUpdateHomeGestureSharing:(BOOL)arg1 ;
-(void)assistantGestureConfiguration:(id)arg0 didUpdateShouldDismissForSwipesOutsideContent:(BOOL)arg1 ;
-(void)assistantGestureConfiguration:(id)arg0 didUpdateShouldDismissForTapsOutsideContent:(BOOL)arg1 ;
-(void)assistantGestureConfiguration:(id)arg0 didUpdateShouldPassTouchesThroughToSpringBoard:(BOOL)arg1 ;
-(void)assistantGestureConfiguration:(id)arg0 didUpdateShouldShowHomeAffordance:(BOOL)arg1 ;
-(void)assistantSession:(id)arg0 viewDidAppearInWindowScene:(id)arg1 ;
-(void)assistantSession:(id)arg0 viewDidDisappearInWindowScene:(id)arg1 ;
-(void)assistantSession:(id)arg0 viewWillAppearInWindowScene:(id)arg1 ;
-(void)assistantSession:(id)arg0 viewWillDisappearInWindowScene:(id)arg1 ;
-(void)dealloc;
-(void)homeGrabberViewDidReceiveClick:(id)arg0 ;
-(void)setTouchesPassThroughToSpringBoard:(BOOL)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)zStackParticipant:(id)arg0 updatePreferences:(id)arg1 ;
-(void)zStackParticipantDidChange:(id)arg0 ;


@end


#endif