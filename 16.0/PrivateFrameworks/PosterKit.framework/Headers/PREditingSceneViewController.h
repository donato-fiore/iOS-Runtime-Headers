// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGSCENEVIEWCONTROLLER_H
#define PREDITINGSCENEVIEWCONTROLLER_H

@class NSHashTable, NSMutableArray, UIView, NSString, NSArray, ATXComplicationSet, UINavigationController, WFWidgetConfigurationViewController, BSUIVibrancyConfiguration;
@protocol PRComplicationContainerViewControllerDelegate, PRComplicationGalleryViewControllerDelegate, PRInlineComplicationGalleryViewControllerDelegate, UIGestureRecognizerDelegate, WFWidgetConfigurationViewControllerDelegate, UISheetPresentationControllerDelegate, BSInvalidatable, PREditingSceneViewControllerDelegate;


#import "PRSceneViewController.h"
#import "PREditingSceneClientSettingsDiffInspector.h"
#import "PRComplicationDescriptor.h"

@interface PREditingSceneViewController : PRSceneViewController <PRComplicationContainerViewControllerDelegate, PRComplicationGalleryViewControllerDelegate, PRInlineComplicationGalleryViewControllerDelegate, UIGestureRecognizerDelegate, WFWidgetConfigurationViewControllerDelegate, UISheetPresentationControllerDelegate>

 {
    NSHashTable *_observers;
    BOOL _didFinalize;
}


@property (nonatomic) NSInteger acceptButtonType; // ivar: _acceptButtonType
@property (nonatomic) BOOL allowsTransparentContent; // ivar: _allowsTransparentContent
@property (nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled; // ivar: _alternateDateEnabled
@property (retain, nonatomic) NSObject<BSInvalidatable> *backgroundTaskIdleTimerAssertion; // ivar: _backgroundTaskIdleTimerAssertion
@property (nonatomic) BOOL clientHasBackgroundTasks; // ivar: _clientHasBackgroundTasks
@property (nonatomic, getter=isClientPresentingModalViewController) BOOL clientPresentingModalViewController; // ivar: _clientPresentingModalViewController
@property (retain, nonatomic) NSMutableArray *complicationContainerViewControllers; // ivar: _complicationContainerViewControllers
@property (retain, nonatomic) UIView *complicationsAddGestureView; // ivar: _complicationsAddGestureView
@property (nonatomic, getter=isContentHidden) BOOL contentHidden; // ivar: _contentHidden
@property (nonatomic, getter=areControlsHidden) BOOL controlsHidden; // ivar: _controlsHidden
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PREditingSceneViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDismissing) BOOL dismissing; // ivar: _dismissing
@property (nonatomic, getter=isDraggingComplication) BOOL draggingComplication; // ivar: _draggingComplication
@property (nonatomic) NSInteger focusedElement; // ivar: _focusedElement
@property (retain, nonatomic) NSArray *graphicComplicationSuggestionSets; // ivar: _graphicComplicationSuggestionSets
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHero) BOOL hero; // ivar: _hero
@property (retain, nonatomic) UIView *inlineComplicationGestureView; // ivar: _inlineComplicationGestureView
@property (retain, nonatomic) ATXComplicationSet *inlineComplicationSuggestionSet; // ivar: _inlineComplicationSuggestionSet
@property (nonatomic) PREditingSceneViewControllerTopButtonLayout lastValidDelegateTopButtonLayout; // ivar: _lastValidDelegateTopButtonLayout
@property (nonatomic) CGRect leadingTopButtonFrame; // ivar: _leadingTopButtonFrame
@property (copy, nonatomic) NSArray *presentationDismissalGestureViews; // ivar: _presentationDismissalGestureViews
@property (retain, nonatomic) UINavigationController *presentedComplicationsGallery; // ivar: _presentedComplicationsGallery
@property (retain, nonatomic) UINavigationController *presentedInlineComplicationsGallery; // ivar: _presentedInlineComplicationsGallery
@property (retain, nonatomic) WFWidgetConfigurationViewController *presentedWidgetConfigurationViewController; // ivar: _presentedWidgetConfigurationViewController
@property (retain, nonatomic) PREditingSceneClientSettingsDiffInspector *sceneClientSettingsDiffInspector; // ivar: _sceneClientSettingsDiffInspector
@property (retain, nonatomic) NSArray *selectedGraphicComplications; // ivar: _selectedGraphicComplications
@property (retain, nonatomic) PRComplicationDescriptor *selectedInlineComplication; // ivar: _selectedInlineComplication
@property (nonatomic) BOOL showsContentWhenReady; // ivar: _showsContentWhenReady
@property (readonly) Class superclass;
@property (nonatomic) CGRect trailingTopButtonFrame; // ivar: _trailingTopButtonFrame
@property (nonatomic) BOOL usesEditingLayout; // ivar: _usesEditingLayout
@property (nonatomic) NSInteger variant; // ivar: _variant
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration
@property (retain, nonatomic) PRComplicationDescriptor *widgetBeingConfigured; // ivar: _widgetBeingConfigured


+(id)role;
-(BOOL)_areComplicationsDisallowed;
-(BOOL)_canAddComplicationDescriptor:(id)arg0 ;
-(BOOL)_hasGraphicComplications;
-(BOOL)_isPosterCoveredByModalPresentation;
-(BOOL)_presentIntentConfigurationForComplicationDescriptorIfPossible:(id)arg0 ;
-(BOOL)_shouldAllowAddComplicationsTapGesture;
-(BOOL)_shouldAllowInlineComplicationTapGesture;
-(BOOL)_shouldDepthEffectBeDisallowed;
-(BOOL)complicationContainerViewController:(id)arg0 canAddGraphicComplication:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)prefersStatusBarHidden;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_configureNavigationControllerForGalleryViewController:(id)arg0 ;
-(id)_initWithProvider:(id)arg0 contents:(id)arg1 configurableOptions:(id)arg2 configuredProperties:(id)arg3 previewing:(BOOL)arg4 ;
-(id)_presentationBackgroundColor;
-(id)addComplicationGestureViewForElement:(NSUInteger)arg0 tapAction:(SEL)arg1 initiallyAllowed:(BOOL)arg2 ;
-(struct PREditingSceneViewControllerTopButtonLayout )_topButtonLayout;
-(void)_complicationsSceneCreated:(id)arg0 ;
-(void)_configureInitialSceneSettings:(id)arg0 ;
-(void)_configureUsingPath:(id)arg0 ;
-(void)_dismissWithAction:(NSInteger)arg0 ;
-(void)_finalize;
-(void)_insertGraphicComplication:(id)arg0 atIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_prefetchComplicationSuggestions;
-(void)_presentComplicationGallery;
-(void)_presentFullAlertForComplication:(id)arg0 ;
-(void)_presentInlineComplicationGallery;
-(void)_presentIntentConfigurationForComplicationDescriptor:(id)arg0 ;
-(void)_sceneContentReadinessDidChange;
-(void)_teardown;
-(void)_unregisterComplicationContainerViewControllerDelegates;
-(void)_updateAddComplicationsTapGestureAllowed;
-(void)_updateComplicationsVibrancyConfiguration;
-(void)_updatePresentationDismissalGestureView;
-(void)_updateSceneSettings:(id)arg0 transitionContext:(id)arg1 ;
-(void)_updateSceneSettingsForDepthEffectDisallowed;
-(void)_updateSceneSettingsForPosterCoveredByModalPresentation;
-(void)addComplicationTapped:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)complicationContainerViewController:(id)arg0 didCancelDropOperationForComplication:(id)arg1 ;
-(void)complicationContainerViewController:(id)arg0 didDropComplication:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)complicationContainerViewController:(id)arg0 didEditComplication:(id)arg1 ;
-(void)complicationContainerViewController:(id)arg0 didRemoveComplication:(id)arg1 ;
-(void)complicationContainerViewControllerDidTapAdd:(id)arg0 ;
-(void)complicationContainerViewControllerDidTapInlineGallery:(id)arg0 ;
-(void)complicationGalleryViewController:(id)arg0 didAddComplication:(id)arg1 ;
-(void)complicationGalleryViewController:(id)arg0 didBeginDraggingComplication:(id)arg1 ;
-(void)complicationGalleryViewController:(id)arg0 didEndDraggingComplication:(id)arg1 withOperation:(NSUInteger)arg2 ;
-(void)complicationGalleryViewControllerDidFinish:(id)arg0 ;
-(void)dealloc;
-(void)dismissAnyPresentedComplicationGalleryAnimated:(BOOL)arg0 ;
-(void)dismissWithAction:(NSInteger)arg0 ;
-(void)inlineComplicationGalleryViewController:(id)arg0 didSelectComplication:(id)arg1 ;
-(void)inlineComplicationGalleryViewController:(id)arg0 didToggleAlternateDate:(BOOL)arg1 ;
-(void)inlineComplicationGalleryViewControllerDidFinish:(id)arg0 ;
-(void)inlineComplicationGestureViewTapped:(id)arg0 ;
-(void)modalPresentationDismissGestureDidFire:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)presentedViewControllerDismissalDidEnd:(id)arg0 ;
-(void)presentedViewControllerDismissalWillBegin:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)widgetConfigurationViewController:(id)arg0 didFinishWithIntent:(id)arg1 ;


@end


#endif