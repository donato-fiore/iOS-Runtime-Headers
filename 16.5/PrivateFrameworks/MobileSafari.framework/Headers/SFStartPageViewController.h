// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSTARTPAGEVIEWCONTROLLER_H
#define SFSTARTPAGEVIEWCONTROLLER_H

@class UIViewController, NSHashTable, UIPanGestureRecognizer, UIScrollView, UINavigationController, UISearchController, UIVisualEffectView, NSArray, WBSStartPageBackgroundManager, UIImageView, NSString, UIColor;
@protocol UISearchControllerDelegate, UISearchResultsUpdating, SFStartPageCollectionDataSource, SFStartPageCollectionDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, WBSStartPagePreviewProviding, _UIScrollViewScrollObserver, SFStartPageVisualStyleProviding, WBSUserDefaultObservation, SFStartPageCustomizationDataSource, SFStartPageDataSource, SFStartPageDelegate, SFStartPageScrollObserver;


#import "SFStartPageCollectionViewController.h"

@interface SFStartPageViewController : UIViewController <UISearchControllerDelegate, UISearchResultsUpdating, SFStartPageCollectionDataSource, SFStartPageCollectionDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, WBSStartPagePreviewProviding, _UIScrollViewScrollObserver>

 {
    NSHashTable *_dataSourceObservers;
    UIPanGestureRecognizer *_unfocusGesture;
    UIScrollView *_foregroundScrollView;
    CGFloat _navigationBarPaletteHeight;
    UIEdgeInsets _navigationBarPaletteInsets;
    UINavigationController *_navigationController;
    BOOL _needsDataReloadAfterBatchUpdate;
    UISearchController *_searchController;
    UIVisualEffectView *_searchFieldBackgroundView;
    NSArray *_originalNavigationStack;
    BOOL _coalescingDataReload;
    SFStartPageCollectionViewController *_rootCollectionViewController;
    id<SFStartPageVisualStyleProviding> *_visualStyleProvider;
    id<WBSUserDefaultObservation> *_wallpaperDefaultsObservation;
    WBSStartPageBackgroundManager *_wallpaperManager;
    UIImageView *_wallpaperView;
}


@property (retain, nonatomic) UIViewController *alternateContentViewController; // ivar: _alternateContentViewController
@property (nonatomic) NSInteger backgroundDisplayMode; // ivar: _backgroundDisplayMode
@property (weak, nonatomic) NSObject<SFStartPageCustomizationDataSource> *customizationDataSource; // ivar: _customizationDataSource
@property (nonatomic) NSInteger customizationPolicy; // ivar: _customizationPolicy
@property (weak, nonatomic) NSObject<SFStartPageDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFStartPageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat navigationBarHeight;
@property (nonatomic) NSInteger navigationBarPosition;
@property (retain, nonatomic) UIColor *preferredControlTintColor; // ivar: _preferredControlTintColor
@property (nonatomic) BOOL rootViewHidesEmptyNavigationBar;
@property (readonly, nonatomic) CGFloat scrollDistance;
@property (weak, nonatomic) NSObject<SFStartPageScrollObserver> *scrollObserver; // ivar: _scrollObserver
@property (readonly, nonatomic, getter=isShowingRootView) BOOL showingRootView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIScrollView *test_scrollView;
@property (readonly, nonatomic, getter=isTrackingDropSession) BOOL trackingDropSession;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)showsWallpaper;
-(BOOL)startPageCollectionViewController:(id)arg0 isSectionExpanded:(id)arg1 ;
-(BOOL)startPageCollectionViewControllerShouldDeferLoadingContentUntilKeyboardAnimatesIn:(id)arg0 ;
-(BOOL)startPageCollectionViewControllerShouldInstallCustomBackdrops:(id)arg0 ;
-(CGFloat)navigationBarPrimaryContentHeight;
-(CGFloat)startPageCollectionViewControllerTopPadding:(id)arg0 ;
-(NSInteger)customizationControlPolicyForStartPageCollectionViewController:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(id)_wallpaperImageIdentifier;
-(id)effectiveControlTintColor;
-(id)init;
-(id)initWithVisualStyleProvider:(id)arg0 ;
-(id)previewViewControllerForItemIdentifier:(id)arg0 ;
-(id)scrollViewForStartPageCollectionViewsOnly:(BOOL)arg0 ;
-(id)sectionsForStartPageCollectionViewController:(id)arg0 ;
-(id)topStartPageCollectionViewController;
-(void)_createSearchControllerIfNeeded;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_reloadCustomizationViewController;
-(void)_setLeadingBarItems:(BOOL)arg0 trailingBarItems:(BOOL)arg1 onNavigationItem:(id)arg2 forSection:(id)arg3 ;
-(void)_updateSearchBarAppearance;
-(void)_updateWallpaperIfNeeded;
-(void)_wallpaperDidChange:(id)arg0 ;
-(void)_wallpaperDidChangeRemotely;
-(void)_wallpaperWasDeletedRemotely;
-(void)beginCustomizationForStartPageCollectionViewController:(id)arg0 ;
-(void)cancelGestures;
// -(void)coalesceDataReloadWithBlock:(id)arg0 animatingDifferences:(unk)arg1  ;
-(void)configureModelWithIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)configurePaletteForNavigationItem:(id)arg0 ;
-(void)dealloc;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentViewController:(id)arg0 fromItemWithIdentifier:(id)arg1 ;
-(void)reloadDataAnimatingDifferences:(BOOL)arg0 ;
-(void)reloadNavigationItemAnimated:(BOOL)arg0 ;
-(void)reloadSection:(id)arg0 animated:(BOOL)arg1 ;
-(void)resetToRootViewWithCustomizationPolicy:(NSInteger)arg0 ;
-(void)setNavigationBarPaletteHeight:(CGFloat)arg0 alignmentInsets:(struct UIEdgeInsets )arg1 ;
-(void)showDetailForItemWithIdentifier:(id)arg0 ;
-(void)startPageCollectionViewController:(id)arg0 didSelectItemWithIdentifier:(id)arg1 ;
-(void)startPageCollectionViewController:(id)arg0 toggleSectionExpanded:(id)arg1 ;
-(void)startPageCollectionViewControllerDidChangeBackgroundStyle:(id)arg0 ;
-(void)startPageCollectionViewControllerDidCompleteDismissGesture:(id)arg0 ;
-(void)startPageCollectionViewControllerDidScroll:(id)arg0 ;
-(void)startPageCollectionViewControllerDidUpdateContent:(id)arg0 ;
-(void)startPageCollectionViewControllerWillUpdateNavigationBar:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unfocusGestureDidUpdate:(id)arg0 ;
-(void)updateNavigationBarTintColor;
-(void)updateNavigationBarTitleInsets;
-(void)updateOverrideTraitCollection;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)updateStartPageTopPadding;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillLayoutSubviews;


@end


#endif