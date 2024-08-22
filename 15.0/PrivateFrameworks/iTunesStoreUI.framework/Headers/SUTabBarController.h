// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUTABBARCONTROLLER_H
#define SUTABBARCONTROLLER_H

@class UITabBarController, NSMutableArray, UIViewController, UIImage, NSString, NSArray;
@protocol SUOverlayBackgroundDelegate, _UIBasicAnimationFactory, SUTabBarControllerDelegate;


#import "SUViewController.h"
#import "SUPreviewOverlayViewController.h"
#import "SUNavigationBarBackgroundView.h"
#import "SUClientInterface.h"

@interface SUTabBarController : UITabBarController <SUOverlayBackgroundDelegate, _UIBasicAnimationFactory>

 {
    NSMutableArray *_overlayBackgroundViewControllers;
    UIViewController *_preTransientSelectedViewController;
    NSInteger _reloadingUnderneathTransientControllerCount;
    BOOL _ignoreTabReselection;
    UIImage *_moreListSelectedImage;
    UIImage *_moreListUnselectedImage;
    SUViewController *_preloadedViewController;
    NSString *_preloadedViewControllerIdentifier;
    NSString *_preloadedViewControllerKey;
    SUPreviewOverlayViewController *_previewOverlayViewController;
    NSInteger _storeBarStyle;
    SUNavigationBarBackgroundView *_tabBarBackdropView;
}


@property (readonly, nonatomic, getter=_previewOverlayViewController) SUPreviewOverlayViewController *_previewOverlayViewController;
@property (readonly, nonatomic) SUClientInterface *clientInterface; // ivar: _clientInterface
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SUTabBarControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *moreListTitle; // ivar: _moreListTitle
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) NSString *selectedIdentifier;
@property (readonly) Class superclass;


+(Class)_moreNavigationControllerClass;
-(BOOL)_isReloadingUnderneathTransientViewController;
-(BOOL)_saveNavigationPathToDefaults;
-(BOOL)_saveTransientNavigationPathToDefaults;
-(BOOL)loadFromDefaults;
-(BOOL)loadFromDefaultsAndSetSections:(id)arg0 ;
-(BOOL)presentOverlayBackgroundViewController:(id)arg0 ;
-(BOOL)saveOrderingToDefaults;
-(BOOL)saveToDefaults;
-(BOOL)window:(id)arg0 shouldAutorotateToInterfaceOrientation:(NSInteger)arg1 ;
-(NSInteger)ITunesStoreUIBarStyle;
-(NSUInteger)indexOfViewControllerWithSectionType:(NSInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_archivedContextsForViewController:(id)arg0 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_rootViewControllerForSection:(id)arg0 ;
-(id)_sectionForIdentifier:(id)arg0 ;
-(id)_sectionForType:(NSInteger)arg0 ;
-(id)_sectionForViewController:(id)arg0 ;
-(id)_timingFunctionForAnimation;
-(id)_viewControllerForContext:(id)arg0 ;
-(id)init;
-(id)initWithClientInterface:(id)arg0 ;
-(id)overlayBackgroundViewController;
-(id)rotatingFooterView;
-(id)rotatingHeaderView;
-(id)selectedViewController;
-(id)viewControllerForSectionIdentifier:(id)arg0 ;
-(id)viewControllerForSectionType:(NSInteger)arg0 ;
-(void)_applicationDidChangeStatusBarFrame:(id)arg0 ;
-(void)_applyMoreListConfiguration;
-(void)_beginReloadingUnderneathTransientViewController;
-(void)_endReloadingUnderneathTransientViewController;
-(void)_fixupTabBarSelection;
-(void)_fixupViewControllers;
-(void)_hidePreviewOverlayAnimated:(BOOL)arg0 ;
-(void)_longPressAction:(id)arg0 ;
-(void)_moveTransientViewController:(id)arg0 toSectionWithIdentifier:(id)arg1 asRoot:(BOOL)arg2 ;
-(void)_moveView:(id)arg0 toView:(id)arg1 ;
-(void)_partnerChanged:(id)arg0 ;
-(void)_reloadViewControllersFromSections:(id)arg0 animated:(BOOL)arg1 ;
-(void)_restoreArchivedContexts:(id)arg0 ;
-(void)_restoreArchivedTransientContexts:(id)arg0 ;
-(void)_restoreOverlayContexts:(id)arg0 ;
-(void)_setSelectedViewController:(id)arg0 ;
-(void)_setStoreBarStyle:(NSInteger)arg0 ;
-(void)_showPreviewOverlay:(id)arg0 animated:(BOOL)arg1 ;
-(void)_transitionSafeHandlePartnerChange:(id)arg0 ;
-(void)cancelTransientViewController:(id)arg0 ;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)dismissOverlayBackgroundViewController;
-(void)loadView;
-(void)pushTransientViewController:(id)arg0 onSectionWithIdentifier:(id)arg1 ;
-(void)reloadSectionVisibilityAnimated:(BOOL)arg0 ;
-(void)reloadSectionWithIdentifier:(id)arg0 URL:(id)arg1 ;
-(void)resetToSystemDefaults;
-(void)resetUserDefaults;
-(void)scriptOverlayBackgroundDidDismiss:(id)arg0 ;
-(void)selectDefaultSection;
-(void)selectSectionOfType:(NSInteger)arg0 ;
-(void)setMoreListSelectedImage:(id)arg0 unselectedImage:(id)arg1 ;
-(void)setSectionOrdering:(id)arg0 ;
-(void)setTransientViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setTransientViewController:(id)arg0 onSectionWithIdentifier:(id)arg1 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)tabBar:(id)arg0 didEndCustomizingItems:(id)arg1 changed:(BOOL)arg2 ;
-(void)tabBar:(id)arg0 willEndCustomizingItems:(id)arg1 changed:(BOOL)arg2 ;
-(void)tabBar:(id)arg0 willShowCustomizationSheet:(id)arg1 withNavigationBar:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif