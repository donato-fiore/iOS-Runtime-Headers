// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMESSAGEENTRYVIEW_H
#define CKMESSAGEENTRYVIEW_H

@class UIView, UIKBVisualEffectView, NSString, UIVisualEffectView, UILabel, NSArray, UIButton, NSMutableDictionary, NSMutableSet, UITraitCollection, UIInputContextHistory, _UISupplementalLexicon, NSMutableArray, _UIClickInteraction, CAMShutterButton, UISwipeGestureRecognizer;
@protocol CKMessageEntryContentViewDelegate, CKAudioRecorderDelegate, CKActionMenuControllerDelegate, CKMessageEntryRecordedAudioViewDelegate, CKActionMenuGestureRecognizerButtonDelegate, CKInlineAudioReplyButtonDelegate, UIGestureRecognizerDelegate, CKBrowserSwitcherFooterViewDelegate, CKMentionSuggestionViewDataSource, CKMentionSuggestionViewDelegate, CKPaddleOverlayViewDelegate, CKTextEntryLayoutManagerMentionsDelegate, CKAppSelectionInterface, CKMessageEntryViewStyleProtocol, TUIInputAccessoryViewTraits, CKMessageEntryViewAudioMessageAppDelegate, _UIClickInteractionDelegate, CKMessageEntryViewDelegate, CKExternalAppBrowserMenuHost, CKMessageEntryViewInputDelegate, UITextInputTraits_Private;


#import "CKBrowserSwitcherFooterView.h"
#import "CKEntryViewButton.h"
#import "CKActionMenuController.h"
#import "CKActionMenuGestureRecognizerButton.h"
#import "CKComposition.h"
#import "CKMessageEntryAudioHintView.h"
#import "CKInlineAudioReplyButtonController.h"
#import "CKMessageEntryContentView.h"
#import "CKConversation.h"
#import "CKMentionEntityNode.h"
#import "CKScheduledUpdater.h"
#import "CKMentionSuggestionView.h"
#import "CKPaddleOverlayView.h"
#import "CKMessageEntryRecordedAudioView.h"
#import "CKAudioRecorder.h"
#import "CKMessageEntryWaveformView.h"

@interface CKMessageEntryView : UIView <CKMessageEntryContentViewDelegate, CKAudioRecorderDelegate, CKActionMenuControllerDelegate, CKMessageEntryRecordedAudioViewDelegate, CKActionMenuGestureRecognizerButtonDelegate, CKInlineAudioReplyButtonDelegate, UIGestureRecognizerDelegate, CKBrowserSwitcherFooterViewDelegate, CKMentionSuggestionViewDataSource, CKMentionSuggestionViewDelegate, CKPaddleOverlayViewDelegate, CKTextEntryLayoutManagerMentionsDelegate, CKAppSelectionInterface, CKMessageEntryViewStyleProtocol, TUIInputAccessoryViewTraits>

 {
    BOOL _showAppStrip;
}


@property (nonatomic) BOOL animatingLayoutChange; // ivar: _animatingLayoutChange
@property (retain, nonatomic) CKBrowserSwitcherFooterView *appStrip; // ivar: _appStrip
@property (retain, nonatomic) UIView *appStripBackgroundBlurContainerView; // ivar: _appStripBackgroundBlurContainerView
@property (retain, nonatomic) UIKBVisualEffectView *appStripBackgroundBlurView; // ivar: _appStripBackgroundBlurView
@property (retain, nonatomic) CKEntryViewButton *arrowButton; // ivar: _arrowButton
@property (retain, nonatomic) CKActionMenuController *audioActionMenuController; // ivar: _audioActionMenuController
@property (nonatomic) CGRect audioActionMenuFrame; // ivar: _audioActionMenuFrame
@property (retain, nonatomic) CKActionMenuGestureRecognizerButton *audioActionMenuGestureRecognizerButton; // ivar: _audioActionMenuGestureRecognizerButton
@property (retain, nonatomic) CKEntryViewButton *audioButton; // ivar: _audioButton
@property (retain, nonatomic) CKComposition *audioComposition; // ivar: _audioComposition
@property (retain, nonatomic) CKMessageEntryAudioHintView *audioHintView; // ivar: _audioHintView
@property (weak, nonatomic) NSObject<CKMessageEntryViewAudioMessageAppDelegate> *audioMessageAppDelegate; // ivar: _audioMessageAppDelegate
@property (nonatomic, getter=isAudioMessageRecordingAvailable) BOOL audioMessageRecordingAvailable; // ivar: _audioMessageRecordingAvailable
@property (retain, nonatomic) CKInlineAudioReplyButtonController *audioReplyButton; // ivar: _audioReplyButton
@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) CKEntryViewButton *browserButton; // ivar: _browserButton
@property (retain, nonatomic) UIView *buttonAndTextAreaContainerView; // ivar: _buttonAndTextAreaContainerView
@property (retain, nonatomic) CKEntryViewButton *cancelButton; // ivar: _cancelButton
@property (nonatomic, getter=isCharacterCountHidden) BOOL characterCountHidden; // ivar: _characterCountHidden
@property (retain, nonatomic) UILabel *characterCountLabel; // ivar: _characterCountLabel
@property (nonatomic) CGSize characterCountSize; // ivar: _characterCountSize
@property (weak, nonatomic) NSObject<_UIClickInteractionDelegate> *clickInteractionDelegate; // ivar: _clickInteractionDelegate
@property (retain, nonatomic) UILabel *collpasedPlaceholderLabel; // ivar: _collpasedPlaceholderLabel
@property (nonatomic, getter=isComposingRecipient) BOOL composingRecipient; // ivar: _composingRecipient
@property (retain, nonatomic) CKComposition *composition;
@property (readonly, nonatomic) CKComposition *compositionWithAcceptedAutocorrection;
@property (retain, nonatomic) UIView *contentClipView; // ivar: _contentClipView
@property (retain, nonatomic) CKMessageEntryContentView *contentView; // ivar: _contentView
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (nonatomic) UIEdgeInsets coverInsets; // ivar: _coverInsets
@property (readonly) CGFloat coverViewWidth;
@property (retain, nonatomic) NSArray *currentMentionSuggestions; // ivar: _currentMentionSuggestions
@property (nonatomic) NSUInteger currentTappedCharacterIndex; // ivar: _currentTappedCharacterIndex
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKMessageEntryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKEntryViewButton *dictationButton; // ivar: _dictationButton
@property (copy, nonatomic) id *didSelectEntityCompletionHandler; // ivar: _didSelectEntityCompletionHandler
@property (nonatomic, getter=shouldDisablePluginButtons) BOOL disablePluginButtons; // ivar: _disablePluginButtons
@property (nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) UIButton *emojiButton; // ivar: _emojiButton
@property (retain, nonatomic) NSMutableDictionary *entityDictionary; // ivar: _entityDictionary
@property (retain, nonatomic) NSMutableSet *entityHandles; // ivar: _entityHandles
@property (retain, nonatomic) CKMentionEntityNode *entityTree; // ivar: _entityTree
@property (nonatomic) BOOL entryFieldCollapsed; // ivar: _entryFieldCollapsed
@property (retain, nonatomic) CKScheduledUpdater *entryFieldCollapsedUpdater; // ivar: _entryFieldCollapsedUpdater
@property (nonatomic) BOOL entryFieldUpdaterAnimatedValue; // ivar: _entryFieldUpdaterAnimatedValue
@property (nonatomic) BOOL entryFieldUpdaterCollapsedValue; // ivar: _entryFieldUpdaterCollapsedValue
@property (retain, nonatomic) UITraitCollection *entryViewTraitCollection; // ivar: _entryViewTraitCollection
@property (nonatomic) BOOL extendAppStripBlurToKeyplaneTop; // ivar: _extendAppStripBlurToKeyplaneTop
@property (weak, nonatomic) NSObject<CKExternalAppBrowserMenuHost> *externalAppBrowserMenuHost; // ivar: _externalAppBrowserMenuHost
@property (nonatomic, getter=hasFailedRecipients) BOOL failedRecipients; // ivar: _failedRecipients
@property (readonly, nonatomic) BOOL hasRecording;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *inputButtonContainerView; // ivar: _inputButtonContainerView
@property (nonatomic) CGSize inputButtonSize; // ivar: _inputButtonSize
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory; // ivar: _inputContextHistory
@property (weak, nonatomic) NSObject<CKMessageEntryViewInputDelegate> *inputDelegate; // ivar: _inputDelegate
@property (nonatomic) BOOL isAudioActionMenuResizing; // ivar: _isAudioActionMenuResizing
@property (nonatomic) BOOL isAudioActionMenuSuspended; // ivar: _isAudioActionMenuSuspended
@property (nonatomic) BOOL isTransitioningForBrowserSwitcher; // ivar: _isTransitioningForBrowserSwitcher
@property (nonatomic) BOOL isUpdatingMentionAttributedText; // ivar: _isUpdatingMentionAttributedText
@property (copy, nonatomic) NSArray *keyCommands; // ivar: _keyCommands
@property (nonatomic, getter=isKeyboardVisible) BOOL keyboardVisible; // ivar: _keyboardVisible
@property (retain, nonatomic) UIView *knockoutCoverView; // ivar: _knockoutCoverView
@property (retain, nonatomic) UIView *knockoutView; // ivar: _knockoutView
@property (nonatomic) BOOL languageHasSpaces; // ivar: _languageHasSpaces
@property (weak, nonatomic) NSObject<UITextInputTraits_Private> *lastConfiguredInputDelegate; // ivar: _lastConfiguredInputDelegate
@property (nonatomic) _NSRange lastFoundMentionRange; // ivar: _lastFoundMentionRange
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: _marginInsets
@property (retain, nonatomic) CKMentionSuggestionView *mentionSuggestionView; // ivar: _mentionSuggestionView
@property (retain, nonatomic) _UISupplementalLexicon *mentionsLexicon; // ivar: _mentionsLexicon
@property (retain, nonatomic) CKPaddleOverlayView *paddleOverlayView; // ivar: _paddleOverlayView
@property (nonatomic, getter=isPerformingActionMenuSend) BOOL performingActionMenuSend; // ivar: _performingActionMenuSend
@property (retain, nonatomic) CKEntryViewButton *photoButton; // ivar: _photoButton
@property (retain, nonatomic) NSMutableArray *powerLevels; // ivar: _powerLevels
@property (retain, nonatomic) CKComposition *previousAudioComposition; // ivar: _previousAudioComposition
@property (nonatomic) _NSRange rangeOfTappedMention; // ivar: _rangeOfTappedMention
@property (retain, nonatomic) NSMutableSet *recipientNames; // ivar: _recipientNames
@property (retain, nonatomic) CKMessageEntryRecordedAudioView *recordedAudioView; // ivar: _recordedAudioView
@property (retain, nonatomic) CKAudioRecorder *recorder; // ivar: _recorder
@property (readonly, nonatomic, getter=isRecording) BOOL recording;
@property (retain, nonatomic) CKEntryViewButton *sendAudioButton; // ivar: _sendAudioButton
@property (retain, nonatomic) CKEntryViewButton *sendButton; // ivar: _sendButton
@property (retain, nonatomic) _UIClickInteraction *sendButtonClickInteraction; // ivar: _sendButtonClickInteraction
@property (nonatomic) CGSize sendButtonSize; // ivar: _sendButtonSize
@property (nonatomic, getter=isSendingMessage) BOOL sendingMessage; // ivar: _sendingMessage
@property (nonatomic) BOOL shouldAllowImpactSend; // ivar: _shouldAllowImpactSend
@property (nonatomic) BOOL shouldCenterCharacterCount; // ivar: _shouldCenterCharacterCount
@property (nonatomic) BOOL shouldDisableAttachments; // ivar: _shouldDisableAttachments
@property (readonly, nonatomic) BOOL shouldEntryViewBeExpandedLayout;
@property (nonatomic) BOOL shouldOpaqueBackgroundView;
@property (readonly, nonatomic) BOOL shouldShowAppStrip;
@property (nonatomic) BOOL shouldShowCharacterCount; // ivar: _shouldShowCharacterCount
@property (nonatomic) BOOL shouldShowDictationButton; // ivar: _shouldShowDictationButton
@property (nonatomic) BOOL shouldShowPluginButtons; // ivar: _shouldShowPluginButtons
@property (nonatomic) BOOL shouldShowSendButton; // ivar: _shouldShowSendButton
@property (nonatomic) BOOL shouldShowSubject; // ivar: _shouldShowSubject
@property (nonatomic) BOOL showingMentionsSuggestions; // ivar: _showingMentionsSuggestions
@property (readonly, nonatomic) BOOL showsKeyboardPredictionBar;
@property (retain, nonatomic) CAMShutterButton *shutterButton; // ivar: _shutterButton
@property (retain, nonatomic) CKEntryViewButton *stopButton; // ivar: _stopButton
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipeGestureRecognizer; // ivar: _swipeGestureRecognizer
@property (nonatomic, getter=hasUnreachableEmergencyRecipient) BOOL unreachableEmergencyRecipient; // ivar: _unreachableEmergencyRecipient
@property (retain, nonatomic) CKMessageEntryWaveformView *waveformView; // ivar: _waveformView
@property (nonatomic) CGSize waveformViewSize; // ivar: _waveformViewSize


+(BOOL)attributedString:(id)arg0 containsConfirmedMentionInRange:(struct _NSRange )arg1 ;
+(BOOL)isValidPostfixCharacter:(unsigned short)arg0 ;
+(BOOL)range:(struct _NSRange )arg0 containsEmptySelectedRange:(struct _NSRange )arg1 ;
+(BOOL)range:(struct _NSRange )arg0 hasValidPostfixCharacterForString:(id)arg1 ;
+(BOOL)range:(struct _NSRange )arg0 isPrefixedWithAtForString:(id)arg1 ;
+(id)currentEntryView;
+(id)languagesWithoutSpaces;
+(id)sharedAppStripDatasource;
+(struct UIEdgeInsets )contentViewInsetsForMarginInsets:(struct UIEdgeInsets )arg0 shouldShowPluginButtons:(BOOL)arg1 shouldShowCharacterCount:(BOOL)arg2 shouldCoverSendButton:(BOOL)arg3 ;
+(struct UIEdgeInsets )coverViewInsetsForMarginInsets:(struct UIEdgeInsets )arg0 shouldShowPluginButtons:(BOOL)arg1 shouldShowCharacterCount:(BOOL)arg2 ;
+(struct UIEdgeInsets )coverViewInsetsForMarginInsets:(struct UIEdgeInsets )arg0 shouldShowPluginButtons:(BOOL)arg1 shouldShowCharacterCount:(BOOL)arg2 shouldCenterCharacterCount:(*BOOL)arg3 ;
+(struct _NSRange )range:(struct _NSRange )arg0 appendingSubstringRange:(struct _NSRange )arg1 ;
+(void)configureAttributedString:(id)arg0 automaticMentionAttributeWithOriginalText:(id)arg1 entityNode:(id)arg2 forRange:(struct _NSRange )arg3 ;
+(void)configureAttributedString:(id)arg0 inTextView:(id)arg1 boldingFont:(BOOL)arg2 inRange:(struct _NSRange )arg3 ;
+(void)configureAttributedString:(id)arg0 inTextView:(id)arg1 forConfirmedMentionInRange:(struct _NSRange )arg2 needingAnimation:(BOOL)arg3 ;
+(void)configureAttributedString:(id)arg0 inTextView:(id)arg1 forDirectMentionInRange:(struct _NSRange )arg2 forChildNode:(id)arg3 addingVisualStyling:(BOOL)arg4 shouldAddAutoComplete:(BOOL)arg5 ;
+(void)configureAttributedString:(id)arg0 inTextView:(id)arg1 forNoMentionInRange:(struct _NSRange )arg2 ;
+(void)configureAttributedString:(id)arg0 inTextView:(id)arg1 forUnconfirmedDirectMention:(id)arg2 inRange:(struct _NSRange )arg3 addingVisualStyling:(BOOL)arg4 ;
+(void)configureAttributedString:(id)arg0 inTextView:(id)arg1 forUnconfirmedMentionInRange:(struct _NSRange )arg2 ;
+(void)configureAttributedString:(id)arg0 inTextView:(id)arg1 withOriginalText:(id)arg2 inRange:(struct _NSRange )arg3 ;
+(void)configureAttributedString:(id)arg0 withFontColor:(id)arg1 forRange:(struct _NSRange )arg2 ;
+(void)configureAttributedString:(id)arg0 withParagraphStyleInTextView:(id)arg1 inRange:(struct _NSRange )arg2 ;
+(void)configureAttributedStringForMentionsChecking:(id)arg0 excludingRange:(struct _NSRange *)arg1 ;
+(void)hideMentionsInAttributedString:(id)arg0 inTextView:(id)arg1 ;
+(void)removeMentionsAtIndex:(NSInteger)arg0 onAttributedString:(id)arg1 inTextView:(id)arg2 ;
+(void)replaceAttributedString:(id)arg0 withEntity:(id)arg1 fromInputText:(id)arg2 inRange:(struct _NSRange )arg3 updatingRange:(struct _NSRange *)arg4 ;
+(void)setCurrentEntryView:(id)arg0 ;
-(BOOL)__im_ff_isNewAudioMessageFlowEnabled;
-(BOOL)__im_ff_supplementalLexiconMentionsEnabled;
-(BOOL)__im_ff_systemImageAdoptionEnabled;
-(BOOL)_isApplePayCashInShelf;
-(BOOL)_isRunningInMVS;
-(BOOL)_shouldNotAnimateCollapseInteractive;
-(BOOL)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg0 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg0 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg0 ;
-(BOOL)allowsMentions;
-(BOOL)attributedString:(id)arg0 nextCharacterRangeFromRange:(struct _NSRange )arg1 containsPossibleChild:(id)arg2 ;
-(BOOL)attributedString:(id)arg0 shouldAddAutoCompleteAttributeForRange:(struct _NSRange )arg1 ;
-(BOOL)canSuggestMentionForCurrentSelection;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)is3rdPartyKeyboardVisible;
-(BOOL)isAudioActionMenuVisible;
-(BOOL)isPredictionBarEnabled;
-(BOOL)isRunningInNotificationExtension;
-(BOOL)isValidPrefixCharacter:(unsigned short)arg0 ;
-(BOOL)layoutIsCurrentlyCompact;
-(BOOL)messageEntryContentView:(id)arg0 shouldInsertMediaObjects:(id)arg1 ;
-(BOOL)messageEntryContentViewCanSuggestMentionForCurrentSelection:(id)arg0 ;
-(BOOL)messageEntryContentViewShouldBeginEditing:(id)arg0 ;
-(BOOL)messageEntryContentViewWillChangeText:(id)arg0 inRange:(struct _NSRange )arg1 withReplacementText:(id)arg2 ;
-(BOOL)pluginButtonsEnabled;
-(BOOL)range:(struct _NSRange )arg0 hasValidPrefixCharacterForString:(id)arg1 ;
-(BOOL)shouldAllowSendWhenSendButtonDisabled;
-(BOOL)shouldHideBackgroundView;
-(BOOL)shouldRecordForService:(id)arg0 ;
-(BOOL)shouldShowMentionSuggestions;
-(BOOL)shouldUpdateMentionsForEntryContentViewWillChangeText:(id)arg0 inRange:(struct _NSRange )arg1 withReplacementText:(id)arg2 ;
-(BOOL)shouldUpdateMentionsInTextView:(id)arg0 inRange:(struct _NSRange )arg1 withReplacementText:(id)arg2 ;
-(CGFloat)_accessoryViewFadeDuration;
-(CGFloat)bottomInsetForAppStrip;
-(CGFloat)placeholderHeight;
-(NSUInteger)numberOfSuggestionsInSuggestionView:(id)arg0 forSection:(NSUInteger)arg1 ;
-(id)_currentInputDelegate;
-(id)entitiesForKey:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 marginInsets:(struct UIEdgeInsets )arg1 shouldAllowImpact:(BOOL)arg2 shouldShowSendButton:(BOOL)arg3 shouldShowSubject:(BOOL)arg4 shouldShowPluginButtons:(BOOL)arg5 shouldShowCharacterCount:(BOOL)arg6 traitCollection:(id)arg7 shouldDisableAttachments:(BOOL)arg8 ;
-(id)initWithFrame:(struct CGRect )arg0 marginInsets:(struct UIEdgeInsets )arg1 shouldShowSendButton:(BOOL)arg2 shouldShowSubject:(BOOL)arg3 shouldShowPluginButtons:(BOOL)arg4 shouldShowCharacterCount:(BOOL)arg5 traitCollection:(id)arg6 shouldDisableAttachments:(BOOL)arg7 ;
-(id)inputAccessoryViewBackdropColor;
-(id)pasteBoardTextFromComposition:(id)arg0 ;
-(id)snapshotForCompactBrowserAnimation;
-(id)suggestionView:(id)arg0 entityAtIndex:(NSUInteger)arg1 ;
-(id)suggestionView:(id)arg0 indexPathOfEntityWithIdentifier:(id)arg1 ;
-(struct CGPoint )sendButtonConvertPointToScreen:(struct CGPoint )arg0 ;
-(struct CGRect )activeKeyboardHeight;
-(struct CGRect )anchorRect;
-(struct CGRect )coverFrameThatFitsInSize:(struct CGSize )arg0 ;
-(struct CGSize )messageEntryContentViewMaxShelfPluginViewSize:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )adjustedCoverInsets;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)_addMessageToInputContextHistory:(id)arg0 ;
-(void)_animateExpandForManualToggle:(BOOL)arg0 completion:(id)arg1 ;
-(void)_animateToCompactLayoutCollapsing:(BOOL)arg0 completion:(id)arg1 ;
-(void)_contactLimitsChanged:(id)arg0 ;
-(void)_dictationAvailabilityDidChange;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_initializeInputContextHistory;
-(void)_localeChanged;
-(void)_overrideUserInterfaceStyleForEntryViewStyleIfNeeded:(NSInteger)arg0 ;
-(void)_participantsDidChange:(id)arg0 ;
-(void)_pausePlaying:(BOOL)arg0 ;
-(void)_sendAudioMessage;
-(void)_setBehaviorsForCurrentTransparencySetting;
-(void)_setupWaveformView;
-(void)_startPlaying:(BOOL)arg0 ;
-(void)_swipeDownGestureRecognized:(id)arg0 ;
-(void)_trackAudioMessageRecordingStarted;
-(void)_trackAudioMessageSentWithComposition:(id)arg0 ;
-(void)_updateUIForEntryFieldCollapsedStateChange;
-(void)acceptAutomaticMentionConfirmation;
-(void)actionMenuControllerDidDismissActionMenu:(id)arg0 ;
-(void)actionMenuControllerWillDismissActionMenu:(id)arg0 animated:(BOOL)arg1 ;
-(void)actionMenuControllerWillPresentActionMenu:(id)arg0 animated:(BOOL)arg1 ;
-(void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg0 ;
-(void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg0 ;
-(void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg0 ;
-(void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg0 ;
-(void)actionMenuGestureRecognizerButtonShowHint:(id)arg0 ;
-(void)appSelectionInterfaceSelectedItem:(id)arg0 ;
-(void)arrowButtonTapped:(id)arg0 ;
-(void)associateEntity:(id)arg0 withKey:(id)arg1 ;
-(void)audioButtonTapped:(id)arg0 ;
-(void)audioMenuItemAction:(id)arg0 ;
-(void)audioRecorderDidUpdateAveragePower:(float)arg0 ;
-(void)audioRecorderRecordingDidChange:(id)arg0 ;
-(void)audioRecorderRecordingDidFail:(id)arg0 ;
-(void)audioReplyButtonCancel:(id)arg0 ;
-(void)audioReplyButtonStart:(id)arg0 ;
-(void)audioReplyButtonStop:(id)arg0 ;
-(void)beginDeferringEntryFieldCollapsedStateChanges;
-(void)browserButtonTapped:(id)arg0 ;
-(void)cancelAudioMessage;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)cancelRecordingAndShowAudioHint;
-(void)checkForMentions;
-(void)checkForMentionsInAttributedString:(id)arg0 inTextView:(id)arg1 ;
-(void)clearAppStripSelection;
-(void)collapseGestureRecognized;
-(void)collapsedPlaceholderLabelTapped:(id)arg0 ;
-(void)configureAppStripBackgroundViewsIfNecessary;
-(void)configureAppStripOrMentionSuggestionsIfNeeded;
-(void)configureAttributedString:(id)arg0 inTextView:(id)arg1 forMentionOverrideInRange:(struct _NSRange )arg2 shouldOverride:(BOOL)arg3 ;
-(void)configureAudioActionMenuControllerForPlayback:(BOOL)arg0 ;
-(void)configureForDisplayMode:(NSUInteger)arg0 ;
-(void)confirmAutomaticMention:(id)arg0 inTextView:(id)arg1 isSending:(BOOL)arg2 selectedRange:(struct _NSRange *)arg3 ;
-(void)confirmAutomaticMention:(id)arg0 inTextView:(id)arg1 selectedRange:(struct _NSRange *)arg2 ;
-(void)conversationPreferredServiceChanged:(id)arg0 ;
-(void)dealloc;
-(void)deferredSetup;
-(void)dictationButtonTapped:(id)arg0 ;
-(void)didDismissPaddleOverlayView:(id)arg0 ;
-(void)didFinishAnimatingMentionWithAnimationIdentifier:(id)arg0 ;
-(void)didTapMention:(id)arg0 characterIndex:(CGFloat)arg1 ;
-(void)dismissAudioActionMenuAnimated:(BOOL)arg0 ;
-(void)dismissAudioActionMenuForResize;
-(void)endDeferringEntryFieldCollapsedStateChanges;
-(void)expandGestureRecongnized;
-(void)finishBrowserSwitcherCompactTransition;
-(void)handleContentViewChangeWithCompletion:(id)arg0 ;
-(void)handleLongPress:(id)arg0 ;
-(void)insertMentionByName:(id)arg0 ;
-(void)insertMentionWithEntity:(id)arg0 replacementRange:(struct _NSRange )arg1 fallbackName:(id)arg2 source:(unsigned char)arg3 ;
-(void)insertionPointEnteredRange:(struct _NSRange )arg0 forMention:(id)arg1 withEntities:(id)arg2 ;
-(void)insertionPointExitedRangeWithMention;
-(void)keyCommandSend:(id)arg0 ;
-(void)layoutManagerDidFinishAnimatingMentionWithAnimationIdentifier:(id)arg0 ;
-(void)layoutSubviews;
-(void)loadRecordedAudioViewsIfNeeded;
-(void)messageEntryContentView:(id)arg0 didPasteURL:(id)arg1 ;
-(void)messageEntryContentView:(id)arg0 didStagePluginPayload:(id)arg1 ;
-(void)messageEntryContentView:(id)arg0 didTapCharacterAtIndex:(NSUInteger)arg1 isLongPress:(BOOL)arg2 ;
-(void)messageEntryContentView:(id)arg0 didTapMediaObject:(id)arg1 ;
-(void)messageEntryContentView:(id)arg0 insertMention:(id)arg1 entity:(id)arg2 replacementRange:(struct _NSRange )arg3 ;
-(void)messageEntryContentView:(id)arg0 insertionPointEnteredRange:(struct _NSRange )arg1 forMention:(id)arg2 withEntities:(id)arg3 ;
-(void)messageEntryContentView:(id)arg0 showMentionSuggestionsForEntities:(id)arg1 replacementRange:(struct _NSRange )arg2 completionHandler:(id)arg3 ;
-(void)messageEntryContentViewCancelShowMentionSuggestions:(id)arg0 ;
-(void)messageEntryContentViewCancelWasTapped:(id)arg0 shelfPluginPayload:(id)arg1 ;
-(void)messageEntryContentViewDidBeginEditing:(id)arg0 wasAlreadyActive:(BOOL)arg1 ;
-(void)messageEntryContentViewDidChange:(id)arg0 ;
-(void)messageEntryContentViewDidChangeSelection:(id)arg0 ;
-(void)messageEntryContentViewDidEndEditing:(id)arg0 ;
-(void)messageEntryContentViewDidReturn:(id)arg0 ;
-(void)messageEntryContentViewDidTapHandwritingKey:(id)arg0 ;
-(void)messageEntryContentViewDidTapMention:(id)arg0 characterIndex:(CGFloat)arg1 ;
-(void)messageEntryContentViewInsertionPointExitedRangeWithMention:(id)arg0 ;
-(void)messageEntryContentViewShelfDidChange:(id)arg0 ;
-(void)messageEntryContentViewWasTapped:(id)arg0 isLongPress:(BOOL)arg1 ;
-(void)messageEntryRecordedAudioView:(id)arg0 mediaObjectDidFinishPlaying:(id)arg1 ;
-(void)messageEntryRecordedAudioViewPlaybackProgressDidChange:(CGFloat)arg0 ;
-(void)messageEntryRecordedAudioViewPressedDelete:(id)arg0 ;
-(void)messageEntryRecordedAudioViewPressedPause:(id)arg0 ;
-(void)messageEntryRecordedAudioViewPressedPlay:(id)arg0 ;
-(void)messageReceived:(id)arg0 ;
-(void)minifyAppStrip;
-(void)optionDownArrowClicked:(id)arg0 ;
-(void)optionUpArrowClicked:(id)arg0 ;
-(void)pauseMenuItemAction:(id)arg0 ;
-(void)pausePlaying;
-(void)photoButtonTapped:(id)arg0 ;
-(void)photoButtonTouchCancel:(id)arg0 ;
-(void)photoButtonTouchDown:(id)arg0 ;
-(void)photoButtonTouchUpOutside:(id)arg0 ;
-(void)playMenuItemAction:(id)arg0 ;
-(void)prepareForBrowserSwitcherCompactTransitionIsSnapshotting:(BOOL)arg0 ;
-(void)presentAudioActionButtons;
-(void)presentAudioActionMenu;
-(void)presentAudioActionMenuForResize;
-(void)reloadMentionsData;
-(void)replaceAttributedText:(id)arg0 inTextView:(id)arg1 atIndex:(NSUInteger)arg2 updatedSelectedRange:(struct _NSRange *)arg3 replacementRange:(struct _NSRange *)arg4 ;
-(void)resumeAudioActionMenu;
-(void)selectPluginAtIndexPath:(id)arg0 ;
-(void)sendAudioButtonTapped:(id)arg0 ;
-(void)sendAudioMessage;
-(void)sendCurrentLocationMessage;
-(void)sendMenuItemAction:(id)arg0 ;
-(void)setAudioActionMenuEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setShouldHideBackgroundView:(BOOL)arg0 ;
-(void)setShowAppStrip:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setShowMentionSuggestions:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)showEffectPicker;
-(void)showHintWithText:(id)arg0 animatingReferenceButton:(BOOL)arg1 ;
-(void)showMentionSuggestionsForEntities:(id)arg0 replacementRange:(struct _NSRange )arg1 ;
-(void)showMessageEffectsHint;
-(void)startPlaying;
-(void)startRecording;
-(void)startRecordingForRaiseGesture;
-(void)stopAudioActionMenuRecording;
-(void)stopAudioActionMenuRecordingForResize;
-(void)stopButtonTapped:(id)arg0 ;
-(void)stopRecording;
-(void)stopRecordingForRaiseGestureWithFailure:(BOOL)arg0 ;
-(void)suggestionView:(id)arg0 didSelectEntity:(id)arg1 ;
-(void)suggestionViewDidSelectEntity:(id)arg0 ;
-(void)suspendAudioActionMenu;
-(void)switcherView:(id)arg0 didMagnify:(BOOL)arg1 ;
-(void)switcherView:(id)arg0 didSelectPluginAtIndex:(id)arg1 ;
-(void)textEffectsWindowOffsetDidChange:(id)arg0 ;
-(void)touchUpInsideSendButton:(id)arg0 ;
-(void)updateAppStripFrame;
-(void)updateAppsMenu:(id)arg0 ;
-(void)updateAudioMessageRecordingAvailability;
-(void)updateBackgroundView;
-(void)updateEntryView;
-(void)updateKnockoutView;
-(void)updateMentionsAssociations;
-(void)updateTextInputContext;
-(void)updateTextViewIfNecessary:(id)arg0 withAttributedString:(id)arg1 ;
-(void)updateTextViewIfNecessary:(id)arg0 withAttributedString:(id)arg1 selectedRange:(struct _NSRange )arg2 ;
-(void)updateTextViewsForShouldHideCaret:(BOOL)arg0 ;
-(void)updateTypingAttributesIfNeededForTextView:(id)arg0 ;


@end


#endif