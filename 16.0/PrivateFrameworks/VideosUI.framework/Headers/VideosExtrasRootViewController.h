// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOSEXTRASROOTVIEWCONTROLLER_H
#define VIDEOSEXTRASROOTVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, IKAppContext, UIButton, NSString, UIView, UIStackView, NSArray, UINavigationController, UITraitCollection;
@protocol IKApplication, IKAppContextDelegate, UINavigationControllerDelegate, UICollectionViewDelegate, IKAppDeviceConfig, OS_dispatch_queue, VideosExtrasRootViewControllerDelegate, IKAppDataStoring, IKAppUserDefaultsStoring;


#import "VideosExtrasArtworkDataSource.h"
#import "VideosExtrasContext.h"
#import "VideosExtrasFeatureContainerViewController.h"
#import "VideosExtrasMainTemplateViewController.h"

@interface VideosExtrasRootViewController : UIViewController <IKApplication, IKAppContextDelegate, UINavigationControllerDelegate, UICollectionViewDelegate, IKAppDeviceConfig>

 {
    NSLayoutConstraint *_bottomConstraint;
    NSObject<OS_dispatch_queue> *_imageRequestQueue;
    BOOL _didAttemptRestartAfterAppContextFailure;
}


@property (retain, nonatomic) IKAppContext *applicationContext; // ivar: _applicationContext
@property (retain, nonatomic) VideosExtrasArtworkDataSource *artworkDataSource; // ivar: _artworkDataSource
@property (retain, nonatomic) UIButton *backButton; // ivar: _backButton
@property (readonly, weak, nonatomic) VideosExtrasContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VideosExtrasRootViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *extrasMenuBarView; // ivar: _extrasMenuBarView
@property (retain, nonatomic) UIStackView *extrasMenuButtonsStackView; // ivar: _extrasMenuButtonsStackView
@property (retain, nonatomic) NSLayoutConstraint *extrasScrollViewLeadingConstraint; // ivar: _extrasScrollViewLeadingConstraint
@property (retain, nonatomic) VideosExtrasFeatureContainerViewController *featureContainer; // ivar: _featureContainer
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize initialPresentationSize; // ivar: _initialPresentationSize
@property (retain, nonatomic) NSArray *lastSelectedSnapshotViewControllers; // ivar: _lastSelectedSnapshotViewControllers
@property (retain, nonatomic) NSObject<IKAppDataStoring> *localStorage; // ivar: _localStorage
@property (readonly, nonatomic) UIView *mainMenuBar;
@property (readonly, nonatomic) NSArray *mainMenuItemElements;
@property (retain, nonatomic) VideosExtrasMainTemplateViewController *mainTemplateViewController; // ivar: _mainTemplateViewController
@property (readonly, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (copy, nonatomic) UITraitCollection *overrideTraitCollection;
@property (nonatomic) BOOL showsBuiltInNavigationControls; // ivar: _showsBuiltInNavigationControls
@property (nonatomic) BOOL showsMenuBar; // ivar: _showsMenuBar
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<IKAppUserDefaultsStoring> *userDefaultsStorage; // ivar: _userDefaultsStorage
@property (retain, nonatomic) NSObject<IKAppDataStoring> *vendorStorage; // ivar: _vendorStorage


+(id)currentController;
-(BOOL)_areExtrasVisible;
-(BOOL)_setMainDocumentWithViewController:(id)arg0 ;
-(BOOL)appIsTrusted;
-(BOOL)appUsesDefaultStyleSheets;
-(BOOL)isTimeZoneSet;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(BOOL)shouldExtrasBeVisibleForViewSize:(struct CGSize )arg0 ;
-(BOOL)shouldIgnoreJSValidation;
-(NSUInteger)preferredVideoFormat;
-(NSUInteger)preferredVideoPreviewFormat;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_createDataStorageForIdentifier:(id)arg0 ;
-(id)_extrasMenuBarViewForElements:(id)arg0 ;
-(id)appIdentifier;
-(id)appJSURL;
-(id)appLaunchParams;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)detectMainDocument:(id)arg0 ;
-(id)deviceConfigForContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)navigationController:(id)arg0 animationControllerForOperation:(NSInteger)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)navigationController:(id)arg0 interactionControllerForAnimationController:(id)arg1 ;
-(id)navigationControllerForContext:(id)arg0 ;
-(id)storeFrontCountryCode;
-(id)systemLanguage;
-(id)timeZone;
-(id)vendorIdentifier;
-(id)viewElementRegistry;
-(struct CGSize )screenSize;
-(void)_adjustExtrasVisibilityForViewSize:(struct CGSize )arg0 ;
-(void)_attemptRestart;
-(void)_backButtonPressed:(id)arg0 ;
-(void)_extrasMenuItemSelected:(id)arg0 ;
-(void)_playbackWillEndNotification:(id)arg0 ;
-(void)_setUpForApplication;
-(void)_showExtrasBar:(BOOL)arg0 ;
-(void)_stopOldContextIfNeeded;
-(void)appContext:(id)arg0 didFailWithError:(id)arg1 ;
-(void)appContext:(id)arg0 didStartWithOptions:(id)arg1 ;
-(void)appContext:(id)arg0 didStopWithOptions:(id)arg1 ;
-(void)appContext:(id)arg0 evaluateAppJavaScriptInContext:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)popToFeatureOrMain;
-(void)setClearsStackOnNextPush;
-(void)showExtrasMenuBarInFrame:(struct CGRect )arg0 ;
-(void)start;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateMenuButtonForSelectionAtIndex:(NSUInteger)arg0 deselectedIndex:(NSUInteger)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif