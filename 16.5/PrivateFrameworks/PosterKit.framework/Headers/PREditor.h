// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITOR_H
#define PREDITOR_H

@class UIWindowScene, UIWindow, NSHashTable, NSMutableDictionary, UIScene, UIMenu, UIView, NSString, FBSceneWorkspace, UIAction;
@protocol _UISceneComponentProviding, _UISceneSettingsDiffAction, PREditingFontAndColorPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UISceneDelegate, PRInvalidatable, PREditingDelegate, PRPosterEditingEnvironment, PRPosterEditingPreferences;

#import <Foundation/Foundation.h>

#import "PRMutablePosterConfiguration.h"
#import "PREditingColorVariationStore.h"
#import "PREditingFontAndColorPickerViewController.h"
#import "PRPosterMutableConfiguredProperties.h"
#import "PREditingLook.h"
#import "PROverridableDateProvider.h"
#import "PREditorRootViewController.h"

@interface PREditor : NSObject <_UISceneComponentProviding, _UISceneSettingsDiffAction, PREditingFontAndColorPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UISceneDelegate>

 {
    UIWindowScene *_scene;
    UIWindow *_window;
    PRMutablePosterConfiguration *_targetConfig;
    BOOL _disconnected;
    NSHashTable *_lookSwitchingAssertions;
    NSHashTable *_backgroundTasks;
    NSMutableDictionary *_defaultTitleStyleConfigurationPerLook;
    PREditingColorVariationStore *_colorVariationStore;
    PREditingFontAndColorPickerViewController *_fontAndColorPickerViewController;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (nonatomic) NSInteger acceptButtonType; // ivar: _acceptButtonType
@property (copy, nonatomic) UIMenu *actionsMenu; // ivar: _actionsMenu
@property (nonatomic, getter=areComplicationsDisallowed) BOOL complicationsDisallowed; // ivar: _complicationsDisallowed
@property (nonatomic, getter=isComplicationsRowConfigured) BOOL complicationsRowConfigured; // ivar: _complicationsRowConfigured
@property (retain, nonatomic) PRPosterMutableConfiguredProperties *configuredProperties; // ivar: _configuredProperties
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (nonatomic, getter=areControlsHidden) BOOL controlsHidden; // ivar: _controlsHidden
@property (nonatomic, getter=isCoveredByHostModalPresentation) BOOL coveredByHostModalPresentation; // ivar: _coveredByHostModalPresentation
@property (retain, nonatomic) NSObject<PRInvalidatable> *coveredByHostModalPresentationDisableLookSwitchingAssertion; // ivar: _coveredByHostModalPresentationDisableLookSwitchingAssertion
@property (copy, nonatomic) PREditingLook *currentLook; // ivar: _currentLook
@property (readonly, nonatomic) PROverridableDateProvider *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<PREditingDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDepthEffectDisallowed) BOOL depthEffectDisallowed; // ivar: _depthEffectDisallowed
@property (nonatomic, getter=isDepthEffectEnabled) BOOL depthEffectEnabled;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDelayDismissWithAcceptAction; // ivar: _didDelayDismissWithAcceptAction
@property (nonatomic) NSInteger editingContext; // ivar: _editingContext
@property (readonly, nonatomic) NSObject<PRPosterEditingEnvironment> *environment; // ivar: _environment
@property (nonatomic) NSInteger focusedComplicationElement; // ivar: _focusedComplicationElement
@property (nonatomic) BOOL hasUpdatedLookProperties; // ivar: _hasUpdatedLookProperties
@property (nonatomic) BOOL hasUpdatedLooks; // ivar: _hasUpdatedLooks
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) PREditingLook *initialLook; // ivar: _initialLook
@property (nonatomic, getter=isInlineComplicationConfigured) BOOL inlineComplicationConfigured; // ivar: _inlineComplicationConfigured
@property (nonatomic) CGRect leadingTopButtonFrame; // ivar: _leadingTopButtonFrame
@property (nonatomic) CGFloat looksScrollingDecelerationRate; // ivar: _looksScrollingDecelerationRate
@property (nonatomic, getter=isPerspectiveZoomDisallowed) BOOL perspectiveZoomDisallowed; // ivar: _perspectiveZoomDisallowed
@property (nonatomic, getter=isPerspectiveZoomEnabled) BOOL perspectiveZoomEnabled;
@property (readonly, nonatomic) NSObject<PRPosterEditingPreferences> *preferences; // ivar: _preferences
@property (nonatomic, getter=isPresentingModalViewController) BOOL presentingModalViewController; // ivar: _presentingModalViewController
@property (retain, nonatomic) NSObject<PRInvalidatable> *presentingModalViewControllerDisableLookSwitchingAssertion; // ivar: _presentingModalViewControllerDisableLookSwitchingAssertion
@property (retain, nonatomic) PREditorRootViewController *rootViewController; // ivar: _rootViewController
@property (readonly, nonatomic) FBSceneWorkspace *sceneWorkspace; // ivar: _sceneWorkspace
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIAction *togglingDepthEffectAction; // ivar: _togglingDepthEffectAction
@property (readonly, nonatomic) UIAction *togglingPerspectiveZoomAction; // ivar: _togglingPerspectiveZoomAction
@property (nonatomic) CGRect trailingTopButtonFrame; // ivar: _trailingTopButtonFrame
@property (nonatomic) BOOL usesEditingLayout; // ivar: _usesEditingLayout
@property (nonatomic) NSInteger variant; // ivar: _variant
@property (nonatomic, getter=areViewsSharedBetweenLooks) BOOL viewsSharedBetweenLooks; // ivar: _viewsSharedBetweenLooks


-(BOOL)areComplicationsAllowed;
-(BOOL)displaysHeaderElements;
-(BOOL)fontAndColorPickerViewController:(id)arg0 shouldShowFont:(id)arg1 ;
-(BOOL)isDepthEffectDisabled;
-(BOOL)isDepthEffectEffectivelyDisabled;
-(BOOL)shouldApplyTitleStyleAcrossAllLooksFromConfiguredTitleStyleConfiguration:(id)arg0 ;
-(BOOL)shouldIgnorePreviouslyConfiguredTitleStyleConfiguration;
-(NSUInteger)backgroundTypeForLuminance:(CGFloat)arg0 ;
-(NSUInteger)timeViewControllerDisplayedElements;
-(id)_contentLuminanceValuesForCurrentLooks;
-(id)_defaultLuminanceValuesForLooks:(id)arg0 initialLook:(id)arg1 initialLookLuminanceValue:(CGFloat)arg2 ;
-(id)_refetchLooks;
-(id)_refetchLooksForProperties;
-(id)_refreshLuminanceValuesForCurrentPerLookLuminanceValues:(id)arg0 ;
-(id)_settingsDiffActionsForScene:(id)arg0 ;
-(id)additionalFontsForFontAndColorPickerViewController:(id)arg0 ;
-(id)beginBackgroundTaskForReason:(id)arg0 ;
-(id)defaultTitleStyleConfigurationForLook:(id)arg0 ;
-(id)delegateSafeForCallbackType:(NSInteger)arg0 ;
-(id)disableSwitchingLooksForReason:(id)arg0 ;
-(id)effectiveTitleStyleConfigurationForLook:(id)arg0 ;
-(id)extensionBundle;
-(id)extensionBundleURL;
-(id)homeScreenConfigurationWithPosterProvidedColorConfigurations;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(id)prepareActionsMenu:(id)arg0 ;
-(void)_applyStylePropertiesFromConfiguredProperties:(id)arg0 toConfiguredProperties:(id)arg1 forLook:(id)arg2 ;
-(void)_discardRootViewController;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_rebuildRootViewController;
-(void)_refetchLooksAndBuildUI;
-(void)_refreshDefaultTitleStyleConfigurationsForLooks:(id)arg0 luminanceForLooks:(id)arg1 initialLook:(id)arg2 configuredTitleStyleConfiguration:(id)arg3 ;
-(void)_togglePerspectiveZoom;
-(void)appendDescriptionToFormatter:(id)arg0 ;
-(void)createColorVariationStoreIfNeeded;
-(void)dealloc;
-(void)didFinishTransitionToLook:(id)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)endBackgroundTask:(id)arg0 completionStatus:(NSInteger)arg1 ;
-(void)fontAndColorPickerViewController:(id)arg0 didUpdateDesiredDetent:(CGFloat)arg1 ;
-(void)fontAndColorPickerViewControllerDidFinish:(id)arg0 ;
-(void)presentColorPickerWithConfiguration:(id)arg0 changeHandler:(id)arg1 ;
-(void)presentColorPickerWithPrompt:(id)arg0 suggestedColors:(id)arg1 selectedColor:(id)arg2 changeHandler:(id)arg3 ;
-(void)presentFontAndColorPickerWithPrompt:(id)arg0 titleStyleConfiguration:(id)arg1 colorPickerConfiguration:(id)arg2 changeHandler:(id)arg3 ;
-(void)presentTimeStyleEditor;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentedViewControllerDismissalDidEnd:(id)arg0 ;
-(void)presentedViewControllerDismissalWillBegin:(id)arg0 ;
-(void)removeLookSwitchingAssertion:(id)arg0 ;
-(void)requestDismissalWithAction:(NSInteger)arg0 ;
-(void)requireGestureRecognizerToFailForLooksScroll:(id)arg0 ;
-(void)scene:(id)arg0 willConnectToSession:(id)arg1 options:(id)arg2 ;
-(void)sceneDidDisconnect:(id)arg0 ;
-(void)setAlternateDateEnabled:(BOOL)arg0 ;
-(void)setComplicationsVibrancyConfiguration:(id)arg0 ;
-(void)setEditingFocusActive:(BOOL)arg0 ;
-(void)toggleDepthEffect;
-(void)updateActions;
-(void)updateLookProperties;
-(void)updateLooks;
-(void)updateLuminanceValuesForLooks;
-(void)updatePreferences:(id)arg0 ;
-(void)updateRootViewControllerActionsMenu;
-(void)updateScrollViewDecelerationRate:(id)arg0 ;


@end


#endif