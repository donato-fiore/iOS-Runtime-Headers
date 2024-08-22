// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBROOTSTATUSBARVIEWCONTROLLER_H
#define DBROOTSTATUSBARVIEWCONTROLLER_H

@class UIViewController, NSArray, UITapGestureRecognizer, UIVisualEffectView, NSString, SiriActivityAssertion, SiriLongPressButtonSource, NSTimer, UIView, CRSUIStatusBarStyleService;
@protocol CRSUIStatusBarStyleServiceDelegate, DBAppDockViewControllerDelegate, BSInvalidatable, DBStatusBarButtonStateManagerDelegate, DBWorkspaceObserver, DBEnvironment;


#import "DBAppDockViewController.h"
#import "DBStatusBarHomeButton.h"
#import "DBStatusBarScreenResizeButton.h"
#import "DBStatusBarViewController.h"

@interface DBRootStatusBarViewController : UIViewController <CRSUIStatusBarStyleServiceDelegate, DBAppDockViewControllerDelegate, BSInvalidatable, DBStatusBarButtonStateManagerDelegate, DBWorkspaceObserver>



@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (retain, nonatomic) DBAppDockViewController *appDockViewController; // ivar: _appDockViewController
@property (retain, nonatomic) UITapGestureRecognizer *backPressGestureRecognizer; // ivar: _backPressGestureRecognizer
@property (nonatomic) NSInteger contrastOverride; // ivar: _contrastOverride
@property (nonatomic) NSUInteger currentStatusBarEdge; // ivar: _currentStatusBarEdge
@property (retain, nonatomic) UIVisualEffectView *darkMaterial; // ivar: _darkMaterial
@property (retain, nonatomic) UIVisualEffectView *darkSiriMaterial; // ivar: _darkSiriMaterial
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DBStatusBarHomeButton *homeButton; // ivar: _homeButton
@property (retain, nonatomic) SiriActivityAssertion *homeButtonAssertion; // ivar: _homeButtonAssertion
@property (retain, nonatomic) NSArray *homeButtonConstraints; // ivar: _homeButtonConstraints
@property (retain, nonatomic) SiriLongPressButtonSource *homeButtonSource; // ivar: _homeButtonSource
@property (retain, nonatomic) NSTimer *homeButtonTimer; // ivar: _homeButtonTimer
@property (retain, nonatomic) UIView *keylineView; // ivar: _keylineView
@property (nonatomic) CGFloat lastHomeButtonDownTime; // ivar: _lastHomeButtonDownTime
@property (retain, nonatomic) UIVisualEffectView *lightMaterial; // ivar: _lightMaterial
@property (retain, nonatomic) UIVisualEffectView *lightSiriMaterial; // ivar: _lightSiriMaterial
@property (retain, nonatomic) NSArray *resizeButtonConstraints; // ivar: _resizeButtonConstraints
@property (retain, nonatomic) DBStatusBarScreenResizeButton *screenResizeButton; // ivar: _screenResizeButton
@property (retain, nonatomic) NSObject<BSInvalidatable> *serviceDomainActivationToken; // ivar: _serviceDomainActivationToken
@property (nonatomic) BOOL siriPresentationOverride; // ivar: _siriPresentationOverride
@property (retain, nonatomic) CRSUIStatusBarStyleService *statusBarStyleService; // ivar: _statusBarStyleService
@property (retain, nonatomic) DBStatusBarViewController *statusBarViewController; // ivar: _statusBarViewController
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transitionControlType; // ivar: _transitionControlType


-(id)_backgroundColorForStyle:(NSInteger)arg0 ;
-(id)_focusHighlightColor;
-(id)initWithEnvironment:(id)arg0 iconProvider:(id)arg1 stateProvider:(id)arg2 ;
-(void)_handleBackPressGesture:(id)arg0 ;
-(void)_handleLongPressActivation;
-(void)_resizeButtonPressed:(id)arg0 ;
-(void)_updateAdditionalSafeAreaInsets;
-(void)_updateConstraintsForStatusBar;
-(void)_updateMaterialForStyle:(NSInteger)arg0 ;
-(void)_updateScreenResizeButton;
-(void)appDockViewController:(id)arg0 didSelectBundleID:(id)arg1 ;
-(void)dealloc;
-(void)homeButtonCancel:(id)arg0 ;
-(void)homeButtonDown:(id)arg0 ;
-(void)homeButtonUp:(id)arg0 ;
-(void)invalidate;
-(void)statusBarHomeButtonStateManager:(id)arg0 didChangeToDisplayState:(NSUInteger)arg1 ;
-(void)statusBarStyleServiceUpdatedOverride:(id)arg0 animationSettings:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAppearanceForWallpaper;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)workspace:(id)arg0 stateDidChangeFromState:(id)arg1 toState:(id)arg2 ;


@end


#endif