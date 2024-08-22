// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSLIDESHOWVIEWCONTROLLER_H
#define PUSLIDESHOWVIEWCONTROLLER_H

@class UIViewController, OKPresentationViewController, UITapGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, PUSlideshowViewModelChangeObserver, PUSlideshowSettingsViewControllerDelegate, OKPresentationViewControllerDelegate, PHAirPlayControllerContentProvider, PHAirPlayControllerRouteObserver, PUViewControllerSpecChangeObserver, PUSlideshowDisplayContext, PUSlideshowViewControllerDelegate;


#import "PUSlideshowViewControllerSpec.h"
#import "PUSlideshowViewController.h"
#import "PHPlaceholderView.h"
#import "PUSlideshowSession.h"

@interface PUSlideshowViewController : UIViewController <UIGestureRecognizerDelegate, PUSlideshowViewModelChangeObserver, PUSlideshowSettingsViewControllerDelegate, OKPresentationViewControllerDelegate, PHAirPlayControllerContentProvider, PHAirPlayControllerRouteObserver, PUViewControllerSpecChangeObserver, PUSlideshowDisplayContext>

 {
    OKPresentationViewController *_currentPresentationController;
    PUSlideshowViewControllerSpec *_spec;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSUInteger _playerStateButtonItemIndex;
}


@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec; // ivar: __needsUpdateSpec
@property (retain, nonatomic, setter=_setSecondScreenBrowser:) PUSlideshowViewController *_secondScreenBrowser; // ivar: __secondScreenBrowser
@property (retain, nonatomic, setter=_setSlideshowPlaceHolderView:) PHPlaceholderView *_slideshowPlaceholderView; // ivar: __slideshowPlaceholderView
@property (retain, nonatomic, setter=_setSlideshowSettingsViewController:) UIViewController *_slideshowSettingsViewController; // ivar: __slideshowSettingsViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUSlideshowViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) PUSlideshowSession *session; // ivar: _session
@property (readonly) Class superclass;


-(BOOL)_needsUpdate;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
-(BOOL)pu_wantsNavigationBarVisible;
-(BOOL)pu_wantsTabBarVisible;
-(BOOL)pu_wantsToolbarVisible;
-(id)ancestorViewOfInstance:(id)arg0 ;
-(id)contentViewControllerForAirPlayController:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSession:(id)arg0 ;
-(id)initWithSession:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)visibleAssets;
-(void)_airplayButtonTapped:(id)arg0 ;
-(void)_dismissSlideshow;
-(void)_doneButtonTapped:(id)arg0 ;
-(void)_handleAppWillResignActiveNotification:(id)arg0 ;
-(void)_handleStateChange;
-(void)_installPresentationController:(id)arg0 ;
-(void)_invalidateSpec;
-(void)_playerStateButtonTapped:(id)arg0 ;
-(void)_removeCurrentPresentationController;
-(void)_removeSlideshowSettingsViewController;
-(void)_setNeedsUpdate;
-(void)_settingsButtonTapped:(id)arg0 ;
-(void)_setupChromeBar;
-(void)_setupTapGesture;
-(void)_tapGesture:(id)arg0 ;
-(void)_updateAirplayButton;
-(void)_updateChromeVisibility;
-(void)_updateIfNeeded;
-(void)_updatePlaceholder;
-(void)_updatePlayerButton;
-(void)_updateRouteObservation;
-(void)_updateSpecIfNeeded;
-(void)airPlayControllerRouteAvailabilityChanged:(id)arg0 ;
-(void)airPlayControllerScreenAvailabilityChanged:(id)arg0 ;
-(void)couchPotatoPlaybackFinished;
-(void)dealloc;
-(void)finishSession;
-(void)loadView;
-(void)settingsDidFinished:(id)arg0 ;
-(void)slideshowSession:(id)arg0 startDisplayingPresentationViewController:(id)arg1 ;
-(void)slideshowSession:(id)arg0 stopDisplayingPresentationViewController:(id)arg1 ;
-(void)viewControllerSpec:(id)arg0 didChange:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif