// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVAPPDOCUMENTCONTROLLER_H
#define _TVAPPDOCUMENTCONTROLLER_H

@class IKAppDocument, NSString, UITapGestureRecognizer, UIView, NSArray, UIViewController;
@protocol UIGestureRecognizerDelegate, _TVModalPresenterFocusing, _TVPagePerformanceDelegate, _TVApplicationInspectorDocumentProvider, _TVIKAppDocumentDelegate, IKAppDocumentDelegate, _TVAppDocumentControllerDelegate, UIFocusItemContainer, UIFocusEnvironment;


#import "TVDocumentViewController.h"
#import "TVMediaQueryEvaluator.h"
#import "_TVPagePerformanceController.h"

@interface _TVAppDocumentController : TVDocumentViewController <UIGestureRecognizerDelegate, _TVModalPresenterFocusing, _TVPagePerformanceDelegate, _TVApplicationInspectorDocumentProvider, _TVIKAppDocumentDelegate, IKAppDocumentDelegate>

 {
    ? _delegateFlags;
    BOOL _shouldMarkStylesDirtyBeforeLayout;
}


@property (nonatomic) BOOL adoptsContext; // ivar: _adoptsContext
@property (weak, nonatomic) NSObject<_TVAppDocumentControllerDelegate> *appDelegate; // ivar: _appDelegate
@property (retain, nonatomic) IKAppDocument *appDocument; // ivar: _appDocument
@property (readonly, nonatomic) BOOL applicationDeactivatedOnMenu; // ivar: _applicationDeactivatedOnMenu
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissAppOnMenu; // ivar: _dismissAppOnMenu
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TVMediaQueryEvaluator *mediaQueryEvaluator; // ivar: _mediaQueryEvaluator
@property (copy, nonatomic) id *menuGestureHandler; // ivar: _menuGestureHandler
@property (weak, nonatomic) UITapGestureRecognizer *menuGestureRecognizer; // ivar: _menuGestureRecognizer
@property (nonatomic) BOOL opaque; // ivar: _opaque
@property (retain, nonatomic) _TVPagePerformanceController *pagePerformance; // ivar: _pagePerformance
@property (retain, nonatomic) UIView *pagePerformanceView; // ivar: _pagePerformanceView
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (nonatomic, getter=isPresentedModal) BOOL presentedModal; // ivar: _presentedModal
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *templateViewController; // ivar: _templateViewController
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _transitioning
@property (nonatomic, getter=isVisualEffectDisablementNeeded) BOOL visualEffectDisablementNeeded; // ivar: _visualEffectDisablementNeeded


-(BOOL)_isFlowcaseStack;
-(BOOL)_tvTabBarShouldOverlap;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(BOOL)document:(id)arg0 evaluateStyleMediaQuery:(id)arg1 ;
-(BOOL)ppt_isLoading;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)tv_isPresentedModalForDocument:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_alertControllerWithError:(id)arg0 ;
-(id)activeDocument;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForStatusBarHidden;
-(id)currentImpressionableElements;
-(id)customAnimatorForNavigationControllerOperation:(NSInteger)arg0 fromViewController:(id)arg1 ;
-(id)customAnimatorForNavigationControllerOperation:(NSInteger)arg0 toViewController:(id)arg1 ;
-(id)impressionableViewElementsForDocument:(id)arg0 ;
-(id)initWithAppDocument:(id)arg0 ;
-(id)overrideTraitCollectionForChildViewController:(id)arg0 ;
-(struct CGSize )formSize;
-(struct CGSize )tv_adjustedWindowSizeForDocument:(id)arg0 ;
-(void)_boldTextStatusChanged:(id)arg0 ;
-(void)_darkerSystemColorStatusChanged:(id)arg0 ;
-(void)_didHostTemplateViewController:(id)arg0 usedTransitions:(BOOL)arg1 ;
-(void)_markAndNotifyStylesDirty;
-(void)_menuGestureHandler:(id)arg0 ;
-(void)_updateIdleModeStatus;
-(void)_updateModalPresentationStateWithTemplateView:(id)arg0 ;
-(void)_updateTemplateViewController;
-(void)_willHostTemplateViewController:(id)arg0 usesTransitions:(*BOOL)arg1 ;
-(void)dealloc;
-(void)didHostTemplateViewController:(id)arg0 usedTransitions:(BOOL)arg1 ;
-(void)documentDidUpdate:(id)arg0 ;
-(void)documentDidUpdateImplicitly:(id)arg0 ;
-(void)documentNeedsUpdate:(id)arg0 ;
-(void)loadView;
-(void)pagePerformanceController:(id)arg0 didUpdateMetrics:(id)arg1 ;
-(void)reload;
-(void)replaceAppDocumentWithAppDocument:(id)arg0 ;
-(void)scrollToTop;
-(void)snapshotImpressions;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willHostTemplateViewController:(id)arg0 usesTransitions:(*BOOL)arg1 ;


@end


#endif