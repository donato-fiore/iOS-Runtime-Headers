// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIDOCUMENTCONTAINERVIEWCONTROLLER_H
#define SKUIDOCUMENTCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSArray, IKAppDocument, SSVLoadURLOperation, NSNumber, NSSet, NSDictionary, NSValue, NSString, UIView, UIScrollView;
@protocol IKAppDocumentDelegate, SKUIMediaQueryDelegate, SKUIModalSourceViewProvider, SKUINavigationBarControllerDelegate, SKUINavigationBarDisplayConfiguring, SKUINavigationPaletteProvider, SKUIToolbarControllerDelegate, UIViewControllerTransitioningDelegate, SKUIResourceLoaderDelegate, SKUIViewControllerTesting, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling;


#import "SKUIViewController.h"
#import "SKUIMediaQueryEvaluator.h"
#import "SKUINavigationBarController.h"
#import "SKUIToolbarController.h"
#import "SKUIMetricsDOMChangeQueue.h"
#import "SKUIMetricsPageRenderEvent.h"

@interface SKUIDocumentContainerViewController : SKUIViewController <IKAppDocumentDelegate, SKUIMediaQueryDelegate, SKUIModalSourceViewProvider, SKUINavigationBarControllerDelegate, SKUINavigationBarDisplayConfiguring, SKUINavigationPaletteProvider, SKUIToolbarControllerDelegate, UIViewControllerTransitioningDelegate, SKUIResourceLoaderDelegate, SKUIViewControllerTesting, SKUIScrollingTabAppearanceStatusObserver, SKUIScrollingTabNestedPagedScrolling>

 {
    UIViewController *_beforeErrorChildViewController;
    UIViewController *_childViewController;
    NSArray *_defaultLeftBarButtonItems;
    IKAppDocument *_document;
    CGFloat _lastBottomLayoutGuideLength;
    CGFloat _lastTopLayoutGuideLength;
    SSVLoadURLOperation *_loadURLOperation;
    BOOL _makeSearchBarFirstResponderOnLoad;
    SKUIMediaQueryEvaluator *_mediaQueryEvaluator;
    SKUINavigationBarController *_navigationBarController;
    BOOL _selectSearchBarContentOnBecomingFirstResponder;
    SKUIToolbarController *_toolbarController;
    NSNumber *_orientationAtDisappear;
    NSNumber *_pageResponseAbsoluteTime;
    NSSet *_personalizationItems;
    NSDictionary *_presentationOptions;
    ? _scrollingTabAppearanceStatus;
    NSArray *_searchBarControllers;
    NSValue *_sizeAtDisappear;
    NSUInteger _templateViewElementType;
    CGSize _viewSize;
    NSString *_urlString;
    id *_pendingSizeTransitionCompletion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SKUIMetricsDOMChangeQueue *domChangeTimingQueue; // ivar: _domChangeTimingQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *navigationPaletteView;
@property (retain, nonatomic) SKUIMetricsPageRenderEvent *pageRenderEvent; // ivar: _pageRenderEvent
@property (readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)allowsChildViewControllerNavigationBarManagement;
-(BOOL)_makeSearchBarFirstResponderOnLoad;
-(BOOL)_selectSearchBarContentOnBecomingFirstResponder;
-(BOOL)_shouldFillNavigationBarContentsBasedOnNavigationBarViewElement;
-(BOOL)document:(id)arg0 evaluateStyleMediaQuery:(id)arg1 ;
-(BOOL)performTestWithName:(id)arg0 options:(id)arg1 ;
-(BOOL)prefersNavigationBarBackgroundViewHidden;
-(BOOL)prefersNavigationBarHidden;
-(NSInteger)navigationBarTintAdjustmentMode;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_navigationBarViewElement;
-(id)_newViewControllerWithTemplateElement:(id)arg0 options:(id)arg1 clientContext:(id)arg2 ;
-(id)_sidepackViewControllerWithOptions:(id)arg0 clientContext:(id)arg1 ;
-(id)_toolbarViewElement;
-(id)additionalLeftBarButtonItemForNavigationBarController:(id)arg0 ;
-(id)additionalRightBarButtonItemForNavigationBarController:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)childViewController;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)contentScrollView;
-(id)impressionableViewElementsForDocument:(id)arg0 ;
-(id)initWithDocument:(id)arg0 options:(id)arg1 clientContext:(id)arg2 ;
-(id)mediaQueryEvaluator:(id)arg0 valueForKey:(id)arg1 ;
-(id)navigationBarTintColor;
-(id)navigationBarTitleTextTintColor;
-(id)pendingSizeTransitionCompletion:(SEL)arg0 ;
-(id)previewMenuItems;
-(id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(NSUInteger)arg0 ;
-(id)toolbarItems;
-(void)_enqueueLoadURLOperation;
-(void)_finishLegacyProtocolOperationForResponse:(id)arg0 dataProvider:(id)arg1 dictionary:(id)arg2 ;
-(void)_finishLoadOperationWithResponse:(id)arg0 error:(id)arg1 ;
-(void)_networkTypeChangeNotification:(id)arg0 ;
-(void)_onReportDOMChange:(id)arg0 ;
-(void)_onReportDocumentReady:(id)arg0 ;
-(void)_onReportPlatformJsonTimes:(id)arg0 ;
-(void)_onReportRequestTimes:(id)arg0 ;
-(void)_redirectToURL:(id)arg0 ;
-(void)_reloadDefaultBarButtonItems;
-(void)_reloadNavigationBarController;
-(void)_reloadNavigationBarControllerIfNeeded;
-(void)_reloadNavigationItemContents;
-(void)_reloadNavigationPalette;
-(void)_reloadPageData;
-(void)_reloadToolbar;
-(void)_sendOnViewAttributesChangeWithAttributes:(id)arg0 viewWillAppear:(BOOL)arg1 ;
-(void)_setChildViewController:(id)arg0 ;
-(void)_setMakeSearchBarFirstResponderOnLoad:(BOOL)arg0 ;
-(void)_setSelectSearchBarContentOnBecomingFirstResponder:(BOOL)arg0 ;
-(void)_showAccountViewControllerWithURL:(id)arg0 ;
-(void)_showLegacyStorePageWithRequest:(id)arg0 page:(id)arg1 pageType:(NSInteger)arg2 URLResponse:(id)arg3 ;
-(void)_skui_applicationDidEnterBackground:(id)arg0 ;
-(void)_skui_applicationWillEnterForeground:(id)arg0 ;
-(void)_submitPageRenderIfPossible;
-(void)dealloc;
-(void)document:(id)arg0 runTestWithName:(id)arg1 options:(id)arg2 ;
-(void)documentDidSendMessage:(id)arg0 ;
-(void)documentDidUpdate:(id)arg0 ;
-(void)documentNeedsUpdate:(id)arg0 ;
-(void)documentScrollToTop:(id)arg0 ;
-(void)getModalSourceViewForElementIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadView;
-(void)mediaQueryEvaluatorDidChange:(id)arg0 ;
-(void)reloadData;
-(void)resourceLoader:(id)arg0 didLoadAllForReason:(NSInteger)arg1 ;
-(void)resourceLoaderDidBeginLoading:(id)arg0 ;
-(void)scrollingTabAppearanceStatusWasUpdated:(struct ? )arg0 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)skui_viewWillAppear:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif