// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISYSTEMINPUTASSISTANTVIEWCONTROLLER_H
#define UISYSTEMINPUTASSISTANTVIEWCONTROLLER_H

@class NSTimer, NSMutableDictionary, UIViewController<UIPredictiveViewController>, TUISystemInputAssistantLayout, TUISystemInputAssistantStyleCompact, NSValue, NSString, TUIEmojiSearchInputViewController, TUISystemInputAssistantStyleFloat, TUISystemInputAssistantLayoutSplit, TUISystemInputAssistantLayoutStandard, TUISystemInputAssistantStyleStandard, TUISystemInputAssistantView;
@protocol UIPopoverPresentationControllerDelegate, UIKeyboardAutocorrectionObserver, TUISystemInputAssistantViewDelegate, TUIEmojiSearchInputViewControllerDelegate, UIKeyInput;


#import "UIInputViewController.h"
#import "UIViewController.h"
#import "UITextInputAssistantItem.h"
#import "UIView.h"
#import "_UILayerHostView.h"
#import "UIRemoteInputViewInfo.h"

@interface UISystemInputAssistantViewController : UIInputViewController <UIPopoverPresentationControllerDelegate, UIKeyboardAutocorrectionObserver, TUISystemInputAssistantViewDelegate, TUIEmojiSearchInputViewControllerDelegate>

 {
    id<UIKeyInput> *_pendingResponderForChangedNotification;
    NSTimer *_pendingResponderChangedTimer;
    BOOL _postedSwitchFromEmojiNotification;
    BOOL _isInputAssistantItemEmpty;
}


@property (nonatomic) NSInteger assistantBarStyle; // ivar: _assistantBarStyle
@property BOOL assistantEnabledPreference; // ivar: _assistantEnabledPreference
@property BOOL assistantOniPhonePreference; // ivar: _assistantOniPhonePreference
@property (retain, nonatomic) NSMutableDictionary *cachedPredictiveViewControllers; // ivar: _cachedPredictiveViewControllers
@property (retain, nonatomic) UIViewController<UIPredictiveViewController> *centerViewController; // ivar: _centerViewController
@property (retain, nonatomic) TUISystemInputAssistantLayout *compactAssistantViewLayout; // ivar: _compactAssistantViewLayout
@property (retain, nonatomic) TUISystemInputAssistantStyleCompact *compactStyle; // ivar: _compactStyle
@property (retain, nonatomic) NSValue *currentInputDelegatePointerValue; // ivar: _currentInputDelegatePointerValue
@property BOOL currentlyCheckingPreferences; // ivar: _currentlyCheckingPreferences
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TUIEmojiSearchInputViewController *emojiSearchViewController; // ivar: _emojiSearchViewController
@property (weak, nonatomic) UIViewController *expandedItemsController; // ivar: _expandedItemsController
@property (retain, nonatomic) TUISystemInputAssistantLayout *floatAssistantViewLayout; // ivar: _floatAssistantViewLayout
@property (retain, nonatomic) TUISystemInputAssistantStyleFloat *floatStyle; // ivar: _floatStyle
@property BOOL hasCheckedPreferences; // ivar: _hasCheckedPreferences
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UITextInputAssistantItem *observedInputAssistantItem; // ivar: _observedInputAssistantItem
@property (weak, nonatomic) UIView *popoverSourceView; // ivar: _popoverSourceView
@property (retain, nonatomic) UIViewController<UIPredictiveViewController> *predictiveViewController; // ivar: _predictiveViewController
@property (retain, nonatomic) UIView *remoteAssistantContainerView; // ivar: _remoteAssistantContainerView
@property (retain, nonatomic) UITextInputAssistantItem *remoteAssistantItem; // ivar: _remoteAssistantItem
@property (retain, nonatomic) _UILayerHostView *remoteAssistantView; // ivar: _remoteAssistantView
@property (retain, nonatomic) UIRemoteInputViewInfo *remoteAssistantViewInfo; // ivar: _remoteAssistantViewInfo
@property (nonatomic) CGFloat remoteCenterViewPreferredWidth; // ivar: _remoteCenterViewPreferredWidth
@property (nonatomic) BOOL showsRemoteInputDashViewController; // ivar: _showsRemoteInputDashViewController
@property (retain, nonatomic) TUISystemInputAssistantLayoutSplit *splitAssistantViewLayout; // ivar: _splitAssistantViewLayout
@property (retain, nonatomic) TUISystemInputAssistantLayoutStandard *standardAssistantViewLayout; // ivar: _standardAssistantViewLayout
@property (retain, nonatomic) TUISystemInputAssistantStyleStandard *standardStyle; // ivar: _standardStyle
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCompactStyle;
@property (readonly, nonatomic) TUISystemInputAssistantView *systemInputAssistantView;


+(BOOL)_requiresProxyInterface;
+(CGFloat)_defaultPreferredHeightForTraitCollection:(id)arg0 ;
-(BOOL)_allowedToShowBarButtonItemsInline:(id)arg0 ;
-(BOOL)_assistantItemsVisibleForResponder:(id)arg0 ;
-(BOOL)_canShowCenterBarButtonItem;
-(BOOL)_canShowWhileLocked;
-(BOOL)_centerPredictionViewVisibleForInputDelegate:(id)arg0 inputViews:(id)arg1 ;
-(BOOL)_hasCustomCenterViewControllerWidth;
-(BOOL)_hidesCenterViewForActiveWindowingMode;
-(BOOL)_isAssistantPreferenceEnabled;
-(BOOL)_isEmojiInputMode;
-(BOOL)_shouldCollapseEmojiSearchView;
-(BOOL)_shouldShowExpandableButtonBarItemsForResponder:(id)arg0 ;
-(BOOL)_usesCustomBackground;
-(BOOL)isEmojiSearchResultsVisible;
-(BOOL)isInputAssistantItemEmpty;
-(BOOL)isVisibleWhenMinimized;
-(BOOL)layoutHasBuiltinAssistantView;
-(BOOL)shouldBeShownForInputDelegate:(id)arg0 inputViews:(id)arg1 ;
-(BOOL)shouldShowEmojiSearchViewControllerForInputDelegate:(id)arg0 ;
-(BOOL)shouldUseCustomBackground:(id)arg0 ;
-(CGFloat)_buttonBarWidthForTraitCollection:(id)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(CGFloat)_centerViewWidthForTraitCollection:(id)arg0 interfaceOrientation:(NSInteger)arg1 ;
-(CGFloat)preferredHeightForTraitCollection:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(id)UIAssistantItemForRTIAssistantItem:(id)arg0 ;
-(id)UIGroupsForRTIGroups:(id)arg0 ;
-(id)_currentInputDelegate;
-(id)_customCenterBarButtonItem:(id)arg0 ;
-(id)_customCenterViewController:(id)arg0 ;
-(id)_defaultTintColor;
-(id)_emojiSearchField;
-(id)_inputDelegateAsResponder:(id)arg0 ;
-(id)_popoverViewControllerForBarButtonItemGroup:(id)arg0 ;
-(id)candidateViewController;
-(id)compatibilityViewController;
-(id)init;
-(id)inputWindowController;
-(id)layoutFromAssistantBarStyle:(NSInteger)arg0 ;
-(id)placeholderItemOfWidth:(CGFloat)arg0 ;
-(id)predictionViewController;
-(id)styleFromAssistantBarStyle:(NSInteger)arg0 ;
-(struct CGRect )barFrame;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_beginObservingInputAssistantItemForRelevantItemChanges:(id)arg0 ;
-(void)_candidatesChanged;
-(void)_collapseBarItems;
-(void)_didChangePlacementOrInputSourceNotification:(id)arg0 ;
-(void)_didChangeTextEffectsRotationNotification:(id)arg0 ;
-(void)_dismissEmojiSearch;
-(void)_expandBarItems;
-(void)_inputModeChanged:(id)arg0 ;
-(void)_keyboardDictationAvailabilityDidChangeNotification:(id)arg0 ;
-(void)_queueResponderChangedForNewResponder:(id)arg0 ;
-(void)_registerForAssistantViewNotifications;
-(void)_responderCapabilitiesChangedNotification:(id)arg0 ;
-(void)_responderChangedNotification:(id)arg0 ;
-(void)_showCandidates;
-(void)_textDidChange;
-(void)_updateCenterViewWidthForInterfaceOrientation:(NSInteger)arg0 ;
-(void)_updateLanguageIndicatorPointerInteractionAndImage;
-(void)_updateSystemInputAssistantViewStylingForInputAssistantItem:(id)arg0 ;
-(void)_updateViewsForAssistantBarStyle:(NSInteger)arg0 ;
-(void)_willChangePlacementNotification:(id)arg0 ;
-(void)_willChangeTextEffectsRotationNotification:(id)arg0 ;
-(void)_willShowKeyboardSwitcher;
-(void)applyRemoteAssistantItem:(id)arg0 ;
-(void)autocorrectionController:(id)arg0 didUpdateAutocorrectionList:(id)arg1 ;
-(void)autocorrectionControllerDidClearAutocorrections:(id)arg0 ;
-(void)automaticallySetCenterViewControllerBasedOnInputDelegate:(id)arg0 ;
-(void)dealloc;
-(void)dismissDictationMenuIfNeeded;
-(void)dismissEmojiSearch;
-(void)dismissKeyboardItemIfNeeded;
-(void)dismissLanguageIndicatorMenuIfNeeded;
-(void)emojiSearchTextFieldDidBecomeActive:(id)arg0 ;
-(void)emojiSearchTextFieldDidBecomeInactive:(id)arg0 ;
-(void)emojiSearchTextFieldWillBecomeActive:(id)arg0 ;
-(void)emojiSearchTextFieldWillBecomeInactive:(id)arg0 ;
-(void)emojiSearchWillInsertEmoji:(id)arg0 forSearchQuery:(id)arg1 ;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)preferencesControllerChanged:(id)arg0 ;
-(void)prepareForFloating:(BOOL)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)prepareTransition:(id)arg0 animated:(BOOL)arg1 ;
-(void)setInputAssistantButtonItemsForResponder:(id)arg0 ;
-(void)setNeedsValidation;
-(void)showEmojiSearch:(BOOL)arg0 ;
-(void)systemInputAssistantView:(id)arg0 wantsToShowCollapsedItemGroup:(id)arg1 fromView:(id)arg2 ;
-(void)updateAssistantBarStyle:(NSInteger)arg0 ;
-(void)updateAssistantPreferences;
-(void)updateCenterViewVisibilityStateForInputDelegate:(id)arg0 ;
-(void)updateRemoteAssistantViewHidden;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif