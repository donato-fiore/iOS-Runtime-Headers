// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUARTICLEVIEWCONTROLLER_H
#define NUARTICLEVIEWCONTROLLER_H

@class UIViewController, FCObservable, NSString, NFEventManager, NSHashTable, NSDate, UIResponder, UIScrollView, SXScrollViewController, SXVideoPlayerViewControllerManager;
@protocol SXScrollViewControllerDelegate, SXAnalyticsReporting, NUANFDebugSettingsObserver, NULoadable, NUBarCompressible, NUArticleDataProvider, NUArticleScrollPositionManagerType, NUChromeControl, NUANFDebugSettingsProvider, NUArticleViewControllerDelegate, NUDocumentSectionBlueprintProvider, NUEndOfArticleDataProvider, NUArticleKeyCommandManager, NULoadingDelegate, NUSpotlightManager;


#import "NUArticleContext.h"

@interface NUArticleViewController : UIViewController <SXScrollViewControllerDelegate, SXAnalyticsReporting, NUANFDebugSettingsObserver, NULoadable, NUBarCompressible>



@property (weak, nonatomic) NSObject<SXAnalyticsReporting> *analyticsReporting; // ivar: _analyticsReporting
@property (retain, nonatomic) NUArticleContext *articleContext; // ivar: _articleContext
@property (readonly, nonatomic) NSObject<NUArticleDataProvider> *articleDataProvider; // ivar: _articleDataProvider
@property (nonatomic) BOOL articleIsPresentingFullscreen; // ivar: _articleIsPresentingFullscreen
@property (nonatomic) CGFloat articleLoadedTime; // ivar: _articleLoadedTime
@property (readonly, nonatomic) NSObject<NUArticleScrollPositionManagerType> *articleScrollPositionManager; // ivar: _articleScrollPositionManager
@property (readonly, nonatomic) FCObservable *articleViewStyler; // ivar: _articleViewStyler
@property (readonly, nonatomic) NSObject<NUChromeControl> *chromeControl; // ivar: _chromeControl
@property (nonatomic) NSInteger contentScale; // ivar: _contentScale
@property (retain, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<NUANFDebugSettingsProvider> *debugSettingsProvider; // ivar: _debugSettingsProvider
@property (weak, nonatomic) NSObject<NUArticleViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRestoreScrollPosition; // ivar: _didRestoreScrollPosition
@property (readonly, nonatomic) NSObject<NUDocumentSectionBlueprintProvider> *documentSectionBlueprintProvider; // ivar: _documentSectionBlueprintProvider
@property (readonly, nonatomic) NSObject<NUEndOfArticleDataProvider> *endOfArticleDataProvider; // ivar: _endOfArticleDataProvider
@property (readonly, nonatomic) NFEventManager *eventManager; // ivar: _eventManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NUArticleKeyCommandManager> *keyCommandManager; // ivar: _keyCommandManager
@property (weak, nonatomic) NSObject<NULoadingDelegate> *loadingDelegate; // ivar: _loadingDelegate
@property (readonly, nonatomic) NSHashTable *loadingListeners; // ivar: _loadingListeners
@property (retain, nonatomic) NSDate *manualScrollingStartDate; // ivar: _manualScrollingStartDate
@property (nonatomic) NSUInteger presentationMode; // ivar: _presentationMode
@property (readonly, nonatomic) UIResponder *responder;
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) SXScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (nonatomic) BOOL shouldAutoPlayVideo; // ivar: _shouldAutoPlayVideo
@property (readonly, nonatomic) NSObject<NUSpotlightManager> *spotlightManager; // ivar: _spotlightManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager; // ivar: _videoPlayerViewControllerManager


+(id)_parentOrPresentingViewControllerFor:(id)arg0 ;
-(BOOL)accessibilityShouldScrollForScrollViewController:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isPreviewingOrShowingHardPaywall;
-(BOOL)prefersStatusBarHidden;
-(BOOL)resignFirstResponder;
-(BOOL)scrollViewController:(id)arg0 shouldOccludeAccessibilityElement:(id)arg1 ;
-(BOOL)shouldSaveScrollPosition;
-(CGFloat)navigationBarHeightForScrollViewController:(id)arg0 ;
-(CGFloat)toolBarHeightForScrollViewController:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(id)articleMessager;
-(id)currentPresentationAttributes;
-(id)initWithArticleDataProvider:(id)arg0 scrollViewController:(id)arg1 appStateMonitor:(id)arg2 keyCommandManager:(id)arg3 loadingListeners:(id)arg4 headerBlueprintProvider:(id)arg5 debugSettingsProvider:(id)arg6 videoPlayerViewControllerManager:(id)arg7 articleScrollPositionManager:(id)arg8 chromeControl:(id)arg9 spotlightManager:(id)arg10 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)nowPlayingDidDisappear:(id)arg0 ;
-(void)nowPlayingWillDisappear:(id)arg0 ;
-(void)reportEvent:(id)arg0 ;
-(void)saveScrollPosition:(id)arg0 ;
-(void)scrollToAudioPositionAndHideMessageAfterEvent:(id)arg0 ;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)scrollViewController:(id)arg0 didApplyDocumentStyle:(id)arg1 ;
-(void)scrollViewController:(id)arg0 enableNavigation:(BOOL)arg1 ;
-(void)scrollViewControllerDidLayoutContent:(id)arg0 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)scrollViewControllerDidStopScrolling:(id)arg0 ;
-(void)scrollViewControllerDismissFullscreen:(id)arg0 ;
-(void)scrollViewControllerRequestsFullscreen:(id)arg0 ;
-(void)scrollViewControllerWillDismissFullscreen:(id)arg0 ;
-(void)showArticleMessage:(NSInteger)arg0 hideAfterEvent:(id)arg1 ;
-(void)testingConditionEnabled:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePresentationAttributes;
-(void)updateScrollPositionFromContext;
-(void)updateScrollViewControllerWithContentOverlayBlueprint:(id)arg0 topOffset:(CGFloat)arg1 ;
-(void)updateScrollViewControllerWithFooterBlueprint:(id)arg0 ;
-(void)updateScrollViewControllerWithHeaderBlueprint:(id)arg0 ;
-(void)updateTextSelectionForPaywallPresentation;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewportDebuggingEnabled:(BOOL)arg0 ;
-(void)willReturnToFullscreen:(id)arg0 ;


@end


#endif