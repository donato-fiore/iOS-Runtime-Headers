// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXSCROLLVIEWCONTROLLER_H
#define SXSCROLLVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSString, UIColor, UITraitCollection, UIResponder, UIScrollView, NSOrderedSet;
@protocol SXFormatInteractorDelegate, SXDocumentSectionHosting, SXPresentationDelegate, SXScrollViewDelegate, SXComponentHosting, UIGestureRecognizerDelegate, SXTangierControllerDelegate, SXViewportChangeListener, SXInteractionContextManagerDelegate, SXPresentationEnvironment, SXKeyboardSupport, SXScrollPositionRestoring, SXDOMObjectProviding, SXAdDocumentStateManager, SXAnalyticsReportingContainer, SXAppStateMonitor, SXComponentController, SXComponentInteractionManager, SXDocumentSectionBlueprint, SXScrollViewControllerDelegate, SXDocumentControllerContainer, SXDocumentSectionManager, SXDocumentStyleRenderer, SXInteractionContextManager, SXFormatInteractor, SXMediaSharingPolicyProvider, SXPresentationAttributesManager, SXPresentationDelegateContainer, UIViewControllerPreviewing, SXResourceDataSourceContainer, SXScrollPositionManager, SXScrollReporting, SXTextSelectionManager, SXTransitionDataSourceProvider;


#import "SXComponentAnimationController.h"
#import "SXComponentBehaviorController.h"
#import "SXContext.h"
#import "SXFullscreenCanvasController.h"
#import "SXDocumentProvider.h"
#import "SXComponentView.h"
#import "SXFontIndex.h"
#import "SXFullscreenCanvasViewController.h"
#import "SXFullscreenVideoPlaybackManager.h"
#import "SXMediaPlaybackController.h"
#import "SXPresentationAttributes.h"
#import "SXScrollPosition.h"
#import "SXTangierController.h"
#import "SXVideoPlayerViewControllerManager.h"
#import "SXViewControllerPresentingManager.h"
#import "SXViewport.h"
#import "SXViewportDebugger.h"

@interface SXScrollViewController : UIViewController <SXFormatInteractorDelegate, SXDocumentSectionHosting, SXPresentationDelegate, SXScrollViewDelegate, SXComponentHosting, UIGestureRecognizerDelegate, SXTangierControllerDelegate, SXViewportChangeListener, SXInteractionContextManagerDelegate, SXPresentationEnvironment, SXKeyboardSupport, SXScrollPositionRestoring>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, nonatomic) NSObject<SXAdDocumentStateManager> *adDocumentStateManager; // ivar: _adDocumentStateManager
@property (readonly, nonatomic) NSObject<SXAnalyticsReportingContainer> *analyticsReportingContainer; // ivar: _analyticsReportingContainer
@property (readonly, nonatomic) SXComponentAnimationController *animationController; // ivar: _animationController
@property (readonly, nonatomic) NSObject<SXAppStateMonitor> *appStateMonitor; // ivar: _appStateMonitor
@property (retain, nonatomic) NSMutableArray *articleScrollEvents; // ivar: _articleScrollEvents
@property (readonly, nonatomic) SXComponentBehaviorController *behaviorController; // ivar: _behaviorController
@property (readonly, nonatomic) NSObject<SXComponentController> *componentController; // ivar: _componentController
@property (readonly, nonatomic) NSObject<SXComponentInteractionManager> *componentInteractionManager; // ivar: _componentInteractionManager
@property (readonly, nonatomic) NSObject<SXDocumentSectionBlueprint> *contentOverlayBlueprint; // ivar: _contentOverlayBlueprint
@property (nonatomic) CGFloat contentOverlayTopOffset; // ivar: _contentOverlayTopOffset
@property (readonly, nonatomic) SXContext *context; // ivar: _context
@property (retain, nonatomic) SXFullscreenCanvasController *currentCanvasController; // ivar: _currentCanvasController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXScrollViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *documentBackgroundColor;
@property (readonly, nonatomic) NSObject<SXDocumentControllerContainer> *documentControllerContainer; // ivar: _documentControllerContainer
@property (readonly, nonatomic) SXDocumentProvider *documentProvider; // ivar: _documentProvider
@property (readonly, nonatomic) NSObject<SXDocumentSectionManager> *documentSectionManager; // ivar: _documentSectionManager
@property (readonly, nonatomic) NSObject<SXDocumentStyleRenderer> *documentStyleRenderer; // ivar: _documentStyleRenderer
@property (retain, nonatomic) SXComponentView *focussedComponentView; // ivar: _focussedComponentView
@property (readonly, nonatomic) SXFontIndex *fontIndex; // ivar: _fontIndex
@property (readonly, nonatomic) NSObject<SXDocumentSectionBlueprint> *footerBlueprint; // ivar: _footerBlueprint
@property (retain, nonatomic) SXFullscreenCanvasViewController *fullscreenCanvasViewController; // ivar: _fullscreenCanvasViewController
@property (readonly, nonatomic) SXFullscreenVideoPlaybackManager *fullscreenVideoPlaybackManager; // ivar: _fullscreenVideoPlaybackManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXDocumentSectionBlueprint> *headerBlueprint; // ivar: _headerBlueprint
@property (nonatomic) CGFloat headerHeight; // ivar: _headerHeight
@property (readonly, nonatomic) NSObject<SXInteractionContextManager> *interactionContextManager; // ivar: _interactionContextManager
@property (readonly, nonatomic) NSObject<SXFormatInteractor> *interactor; // ivar: _interactor
@property (readonly, nonatomic) BOOL isPresentingFullscreenCanvas;
@property (nonatomic) BOOL isPreviewing; // ivar: _isPreviewing
@property (readonly, nonatomic) SXMediaPlaybackController *mediaPlaybackController; // ivar: _mediaPlaybackController
@property (readonly, nonatomic) NSObject<SXMediaSharingPolicyProvider> *mediaSharingPolicyProvider; // ivar: _mediaSharingPolicyProvider
@property (readonly, nonatomic) SXPresentationAttributes *presentationAttributes; // ivar: _presentationAttributes
@property (readonly, nonatomic) NSObject<SXPresentationAttributesManager> *presentationAttributesManager; // ivar: _presentationAttributesManager
@property (readonly, nonatomic) NSObject<SXPresentationDelegateContainer> *presentationDelegateContainer; // ivar: _presentationDelegateContainer
@property (readonly, nonatomic) UITraitCollection *presentationTraitCollection;
@property (retain, nonatomic) NSObject<UIViewControllerPreviewing> *previewingContext; // ivar: _previewingContext
@property (retain, nonatomic) SXScrollPosition *previouslyRestoredScrollPosition; // ivar: _previouslyRestoredScrollPosition
@property (readonly, nonatomic) NSObject<SXResourceDataSourceContainer> *resourceDataSourceContainer; // ivar: _resourceDataSourceContainer
@property (readonly, nonatomic) UIResponder *responder;
@property (nonatomic) BOOL restoreScrollPositionOnNextLayout; // ivar: _restoreScrollPositionOnNextLayout
@property (retain, nonatomic) SXScrollPosition *restoredScrollPosition; // ivar: _restoredScrollPosition
@property (readonly, nonatomic) UIEdgeInsets safeAreaInsets;
@property (readonly, nonatomic) NSObject<SXScrollPositionManager> *scrollPositionManager; // ivar: _scrollPositionManager
@property (readonly, nonatomic) NSObject<SXScrollReporting> *scrollReporter; // ivar: _scrollReporter
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) NSOrderedSet *snapLines; // ivar: _snapLines
@property (readonly) Class superclass;
@property (retain, nonatomic) SXTangierController *tangierController; // ivar: _tangierController
@property (nonatomic) BOOL textSelectionEnabled;
@property (readonly, nonatomic) NSObject<SXTextSelectionManager> *textSelectionManager; // ivar: _textSelectionManager
@property (readonly, nonatomic) NSObject<SXTransitionDataSourceProvider> *transitionDataSourceProvider; // ivar: _transitionDataSourceProvider
@property (nonatomic) BOOL transitioning; // ivar: _transitioning
@property (readonly, nonatomic) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager; // ivar: _videoPlayerViewControllerManager
@property (readonly, nonatomic) SXViewControllerPresentingManager *viewControllerPresentingManager; // ivar: _viewControllerPresentingManager
@property (readonly, nonatomic) NSUInteger viewingLocation;
@property (retain, nonatomic) SXViewport *viewport; // ivar: _viewport
@property (retain, nonatomic) SXViewportDebugger *viewportDebugger; // ivar: _viewportDebugger
@property (readonly, nonatomic) CGSize viewportSize;


-(BOOL)accessibilityShouldScrollForScrollView:(id)arg0 defaultValue:(BOOL)arg1 ;
-(BOOL)addInteractivityFocusForComponent:(id)arg0 ;
-(BOOL)allowInteractivityFocusForComponent:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isScrolling;
-(BOOL)isValidBlueprintForCurrentSize:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(BOOL)scrollView:(id)arg0 shouldOccludeAccessibilityElement:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldPreventDraggingForScrollView:(id)arg0 ;
-(BOOL)shouldRestoreScrollPositionForLayoutBlueprint:(id)arg0 ;
-(BOOL)shouldStartPreviewForInteractionContextManager:(id)arg0 ;
-(CGFloat)snaplineForContentOffset:(CGFloat)arg0 velocity:(CGFloat)arg1 ;
-(id)canvasViewController;
-(id)headlineAccessibilityElement;
-(id)initWithScrollView:(id)arg0 documentControllerContainer:(id)arg1 resourceDataSourceContainer:(id)arg2 analyticsReportingContainer:(id)arg3 presentationDelegateContainer:(id)arg4 presentationAttributeManager:(id)arg5 viewport:(id)arg6 tangierController:(id)arg7 componentController:(id)arg8 interactor:(id)arg9 appStateMonitor:(id)arg10 viewControllerPresentingManager:(id)arg11 scrollPositionManager:(id)arg12 documentStyleRenderer:(id)arg13 componentInteractionManager:(id)arg14 interactionContextManager:(id)arg15 scrollReporter:(id)arg16 videoPlayerViewControllerManager:(id)arg17 mediaSharingPolicyProvider:(id)arg18 fontIndex:(id)arg19 documentProvider:(id)arg20 transitionDataSourceProvider:(id)arg21 DOMObjectProvider:(id)arg22 ;
-(id)interactiveCanvasController;
-(id)presentingContentViewController;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg0 canvasController:(id)arg1 withCompletionBlock:(id)arg2 ;
-(id)requestFullScreenCanvasViewControllerForComponent:(id)arg0 withCompletionBlock:(id)arg1 ;
-(id)scrollPosition;
-(id)scrollPositionForComponentViews:(id)arg0 ;
-(id)scrollPositionForPlayingVideoComponentInComponentViews:(id)arg0 ;
-(id)scrollViewForFullscreenGalleryWithComponentIdentifier:(id)arg0 ;
-(id)scrollViewForStripGalleryWithComponentIdentifier:(id)arg0 ;
-(id)sectionHostingView;
-(id)sectionHostingViewController;
-(id)textScrollPositionForComponentViews:(id)arg0 ;
-(id)videoComponentViewForVideoPlayerViewController:(id)arg0 ;
-(struct CGRect )frameOfComponentWithVideoPlayerViewController:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)addComponentView:(id)arg0 ;
-(void)applyContentOverlayBlueprint:(id)arg0 topOffset:(CGFloat)arg1 ;
-(void)applyFooterBlueprint:(id)arg0 ;
-(void)applyHeaderBlueprint:(id)arg0 ;
-(void)assistiveTechnologyStatusDidChange:(id)arg0 ;
-(void)dealloc;
-(void)dictionaryWithComponentOffsets:(id)arg0 forComponentViews:(id)arg1 ;
-(void)dismissFullscreenCanvasForComponent:(id)arg0 ;
-(void)displayContentsAfterLayoutWithInteractor:(id)arg0 ;
-(void)finishArticleScrollEvents;
-(void)hideContentsForLayoutWithInteractor:(id)arg0 ;
-(void)interactor:(id)arg0 didIntegrateBlueprint:(id)arg1 ;
-(void)interactor:(id)arg0 willIntegrateBlueprint:(id)arg1 ;
-(void)interactor:(id)arg0 willLayoutWithOptions:(id)arg1 ;
-(void)loadContext:(id)arg0 analyticsReporting:(id)arg1 ;
-(void)presentFullscreenGalleryWithComponentIdentifier:(id)arg0 ;
-(void)removeComponentView:(id)arg0 ;
-(void)removeInteractivityFocusForComponent:(id)arg0 ;
-(void)screenTraitCollectionDidChange:(id)arg0 ;
-(void)scrollToRect:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)showScrollViewIfNeeded;
-(void)spacebarPressedWithModifierFlags:(NSInteger)arg0 ;
-(void)tangierController:(id)arg0 scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)tangierController:(id)arg0 scrollViewWillBeginDragging:(id)arg1 ;
-(void)tangierController:(id)arg0 scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint )arg2 targetContentOffset:(struct CGPoint *)arg3 ;
-(void)tangierControllerDidScroll:(id)arg0 ;
-(void)tangierControllerDidStopScrolling:(id)arg0 ;
-(void)tangierControllerWillStartScrolling:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBehaviorForComponentView:(id)arg0 ;
-(void)updatePresentationWithAttributes:(id)arg0 ;
-(void)updateScrollPosition:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateStickyHeaders;
-(void)updateViewportForBlueprint:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)viewport:(id)arg0 appearStateChangedFromState:(NSUInteger)arg1 ;
-(void)willDismissFullscreenCanvasForComponent:(id)arg0 ;
-(void)willEndPreviewingForInteractionContextManager:(id)arg0 ;
-(void)willReturnToFullscreenForComponent:(id)arg0 ;
-(void)willStartPreviewingForInteractionContextManager:(id)arg0 ;


@end


#endif