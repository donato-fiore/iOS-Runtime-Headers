// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSTARTPAGEVIEWCONTROLLER_H
#define SFSTARTPAGEVIEWCONTROLLER_H

@class UIViewController, NSHashTable, UIPanGestureRecognizer, UIScrollView, UINavigationController, NSArray, WBSStartPageBackgroundManager, UIImageView, NSString, UIColor;
@protocol SFStartPageCollectionDataSource, SFStartPageCollectionDelegate, SFStartPagePreviewProviding, UINavigationControllerDelegate, UIGestureRecognizerDelegate, _UIScrollViewScrollObserver, SFStartPageVisualStyleProviding, WBSUserDefaultObservation, SFStartPageCustomizationDataSource, SFStartPageDataSource, SFStartPageDelegate, SFStartPageScrollObserver;


#import "SFStartPageCollectionViewController.h"

@interface SFStartPageViewController : UIViewController <SFStartPageCollectionDataSource, SFStartPageCollectionDelegate, SFStartPagePreviewProviding, UINavigationControllerDelegate, UIGestureRecognizerDelegate, _UIScrollViewScrollObserver>

 {
    NSHashTable *_dataSourceObservers;
    UIPanGestureRecognizer *_dismissGesture;
    UIPanGestureRecognizer *_unfocusGesture;
    UIScrollView *_foregroundScrollView;
    NSInteger _interactiveDismissalState;
    UIScrollView *_interactiveDismissalScrollView;
    CGFloat _navigationBarPaletteHeight;
    UIEdgeInsets _navigationBarPaletteInsets;
    UINavigationController *_navigationController;
    NSArray *_originalNavigationStack;
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
@property (readonly, nonatomic) CGFloat navigationBarPrimaryContentHeight;
@property (retain, nonatomic) UIColor *preferredControlTintColor; // ivar: _preferredControlTintColor
@property (nonatomic) BOOL rootViewHidesEmptyNavigationBar;
@property (readonly, nonatomic) CGFloat scrollDistance;
@property (weak, nonatomic) NSObject<SFStartPageScrollObserver> *scrollObserver; // ivar: _scrollObserver
@property (readonly, nonatomic, getter=isShowingRootView) BOOL showingRootView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIScrollView *test_scrollView;


-(BOOL)allowsDismissGestureWithStyle:(NSInteger)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)showsWallpaper;
-(BOOL)startPageCollectionViewController:(id)arg0 isSectionExpanded:(id)arg1 ;
-(BOOL)startPageCollectionViewControllerShouldDeferLoadingContentUntilKeyboardAnimatesIn:(id)arg0 ;
-(BOOL)startPageCollectionViewControllerShouldInstallCustomBackdrops:(id)arg0 ;
-(CGFloat)distanceRequiredToCommitInteractiveDismissGesture;
-(CGFloat)interactiveDismissGestureTranslation;
-(NSInteger)customizationControlPolicyForStartPageCollectionViewController:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(id)effectiveControlTintColor;
-(id)init;
-(id)initWithVisualStyleProvider:(id)arg0 ;
-(id)previewViewControllerForItemIdentifier:(id)arg0 ;
-(id)scrollViewForStartPageCollectionViewsOnly:(BOOL)arg0 ;
-(id)sectionsForStartPageCollectionViewController:(id)arg0 ;
-(id)topStartPageCollectionViewController;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_setLeadingBarItems:(BOOL)arg0 trailingBarItems:(BOOL)arg1 onNavigationItem:(id)arg2 forSection:(id)arg3 ;
-(void)_updateWallpaperIfNeeded;
-(void)_wallpaperDidChange:(id)arg0 ;
-(void)_wallpaperDidChangeRemotely;
-(void)_wallpaperWasDeletedRemotely;
-(void)beginCustomizationForStartPageCollectionViewController:(id)arg0 ;
-(void)cancelGestures;
-(void)completeDismissGesture;
-(void)configureModelWithIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)configurePaletteForNavigationItem:(id)arg0 ;
-(void)dealloc;
-(void)dismissGestureDidUpdate:(id)arg0 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)postNavigationBarDidChangeHeight;
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
-(void)startPageCollectionViewControllerWillUpdateNavigationBar:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unfocusGestureDidUpdate:(id)arg0 ;
-(void)updateNavigationBarTintColor;
-(void)updateOverrideTraitCollection;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif