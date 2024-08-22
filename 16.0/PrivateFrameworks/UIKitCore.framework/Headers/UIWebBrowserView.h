// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWEBBROWSERVIEW_H
#define UIWEBBROWSERVIEW_H

@class DOMNode, NSMutableArray, NSHashTable, NSMutableSet, NSLock, NSMutableDictionary, NSString;
@protocol UIWebTouchEventsGestureRecognizerDelegate, UIWebFormAccessoryDelegate, _UIWebRotationDelegate, UIFormPeripheral, UIWebAutoFillDelegate;


#import "UIWebDocumentView.h"
#import "UIWebTouchEventsGestureRecognizer.h"
#import "UIWebFormDelegate.h"
#import "UIWebFormAccessory.h"
#import "UIResponder.h"

@interface UIWebBrowserView : UIWebDocumentView <UIWebTouchEventsGestureRecognizerDelegate, UIWebFormAccessoryDelegate, _UIWebRotationDelegate>

 {
    DOMNode *_assistedNodeStartingFocusRedirects;
    CGRect _inputViewBounds;
    CGRect _addressViewBounds;
    CGFloat _lastAdjustmentForScroller;
    NSUInteger _audioSessionCategoryOverride;
    BOOL _forceInputView;
    BOOL _formIsAutoFilling;
    BOOL _alwaysDispatchesScrollEvents;
    BOOL _allowsPictureInPictureVideo;
    BOOL _allowsLinkPreview;
    UIWebTouchEventsGestureRecognizer *_webTouchEventsGestureRecognizer;
    UIWebFormDelegate *_formDelegate;
    NSUInteger _dispatchedTouchEvents;
    NSMutableArray *_deferredTouchEvents;
    NSHashTable *_activeHighlighters;
    NSMutableSet *_overflowScrollViewsPendingInsertion;
    NSMutableSet *_overflowScrollViewsPendingDeletion;
    NSMutableSet *_overflowScrollViews;
    NSLock *_pendingOverflowDataLock;
    NSMutableArray *_pendingOverflowScrolls;
    BOOL _pendingGeometryChangeAfterOverflowScroll;
    NSMutableDictionary *_focusPreservingTokens;
    ? _messages;
    ? _pdf;
}


@property (retain, nonatomic) UIWebFormAccessory *_accessory; // ivar: _accessory
@property (retain, nonatomic) DOMNode *_currentAssistedNode; // ivar: _currentAssistedNode
@property (nonatomic) UIResponder *_editingDelegateForEverythingExceptForms; // ivar: _editingDelegateForEverythingExceptForms
@property (retain, nonatomic) NSObject<UIFormPeripheral> *_input; // ivar: _input
@property (nonatomic, getter=isAccessoryEnabled) BOOL accessoryEnabled; // ivar: _accessoryEnabled
@property (nonatomic) BOOL allowDOMFocusRedirects; // ivar: _allowDOMFocusRedirects
@property (nonatomic) BOOL allowsInlineMediaPlayback;
@property (nonatomic) BOOL allowsLinkPreview;
@property (nonatomic) BOOL allowsPictureInPictureVideo;
@property (nonatomic) BOOL alwaysDispatchesScrollEvents;
@property (nonatomic) unsigned int audioSessionCategoryOverride;
@property (nonatomic) NSObject<UIWebAutoFillDelegate> *autoFillDelegate; // ivar: _autoFillDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasEditedTextField; // ivar: _hasEditedTextField
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inputViewObeysDOMFocus; // ivar: _inputViewObeysDOMFocus
@property (readonly, nonatomic) BOOL isDispatchingTouchEvents;
@property (nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property (nonatomic) NSString *networkInterfaceName;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)getUIWebBrowserViewForWebFrame:(id)arg0 ;
+(void)initialize;
-(BOOL)_dumpWebArchiveAtPath:(id)arg0 ;
-(BOOL)_hasSubviewContainingWebContent:(id)arg0 ;
-(BOOL)_isAutoFilling;
-(BOOL)_keepKeyboardVisibleDuringFocusRedirects;
-(BOOL)_requiresKeyboardResetOnReload;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(BOOL)_resignFirstResponderAndBlurFocusedElement;
-(BOOL)_restoreFocusWithToken:(id)arg0 ;
-(BOOL)_shouldDeferEvents;
-(BOOL)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;
-(BOOL)appendOverflowScrollForNode:(id)arg0 offset:(struct CGPoint )arg1 whileScrolling:(BOOL)arg2 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)considerHeightOfRectOfInterestForRotation;
-(BOOL)isAnyTouchOverActiveArea:(id)arg0 ;
-(BOOL)isAutoFillMode;
-(BOOL)isEditable;
-(BOOL)playsNicelyWithGestures;
-(BOOL)resignFirstResponder;
-(BOOL)shouldIgnoreWebTouch;
-(CGFloat)heightToKeepVisible;
-(CGFloat)minimumVerticalContentOffset;
-(CGFloat)scaleForProposedNewScale:(CGFloat)arg0 andOldScale:(CGFloat)arg1 ;
-(id)_absoluteUrlRelativeToDocumentURL:(id)arg0 ;
-(id)_collectAdditionalSubviews;
-(id)_editingDelegate;
-(id)_keyboardResponder;
-(id)addFindOnPageHighlighter;
-(id)formElement;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithWebView:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)inputAccessoryView;
-(id)inputView;
-(id)keyCommands;
-(id)messagesMatchingMask:(int)arg0 ;
-(id)textDocument;
-(id)textFormElement;
-(struct ? )scalesForContainerSize:(struct CGSize )arg0 ;
-(struct CGPoint )_convertWindowPointToViewport:(struct CGPoint )arg0 ;
-(struct CGRect )_activeRectForRectToCenter:(struct CGRect )arg0 ;
-(struct CGRect )activeRectForRectOfInterest:(struct CGRect )arg0 ;
-(struct CGRect )rectOfInterestForRotation;
-(struct CGSize )_defaultScrollViewContentSize;
-(struct CGSize )contentSizeForScrollView:(id)arg0 ;
-(void)_addAdditionalSubview:(id)arg0 ;
-(void)_assistFormNode:(id)arg0 ;
-(void)_autoFillFrame:(id)arg0 ;
-(void)_beginAllowingFocusRedirects;
-(void)_centerRect:(struct CGRect )arg0 forSizeChange:(BOOL)arg1 withVisibleHeight:(CGFloat)arg2 pinningEdge:(NSUInteger)arg3 ;
-(void)_centerRect:(struct CGRect )arg0 forSizeChange:(BOOL)arg1 withVisibleHeight:(CGFloat)arg2 pinningEdge:(NSUInteger)arg3 toValue:(CGFloat)arg4 ;
-(void)_clearAllConsoleMessages;
-(void)_clearFormAutoFillStateForFrame:(id)arg0 ;
-(void)_clearSelectionAndUI;
-(void)_clearToken:(id)arg0 ;
-(void)_deferWebEvent:(id)arg0 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_didScroll;
-(void)_dispatchWebEvent:(id)arg0 ;
-(void)_displayFormNodeInputView;
-(void)_endAllowingFocusRedirects;
-(void)_endDeferringEvents;
-(void)_focusAndAssistFormNode:(id)arg0 ;
-(void)_handleDeferredEvents;
-(void)_keyboardDidChangeFrame:(id)arg0 ;
-(void)_keyboardDidHide:(id)arg0 ;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_nextAccessoryTab:(id)arg0 ;
-(void)_noteOverflowScrollViewPendingDeletion:(id)arg0 ;
-(void)_noteOverflowScrollViewPendingInsertion:(id)arg0 ;
-(void)_overflowScrollView:(id)arg0 didEndScrollingForNode:(id)arg1 ;
-(void)_overflowScrollView:(id)arg0 scrollOffsetChangedForNode:(id)arg1 whileScrolling:(BOOL)arg2 ;
-(void)_overflowScrollView:(id)arg0 willStartScrollingForNode:(id)arg1 ;
-(void)_preserveFocusWithToken:(id)arg0 destructively:(BOOL)arg1 ;
-(void)_prevAccessoryTab:(id)arg0 ;
-(void)_promptForReplace:(id)arg0 ;
-(void)_reloadInputViewsAfterPotentialFocusRedirect;
-(void)_removeAdditionalSubview:(id)arg0 ;
-(void)_removeFindOnPageHighlighter:(id)arg0 ;
-(void)_resetFormDataForFrame:(id)arg0 ;
-(void)_scrollCaretToVisible:(id)arg0 ;
-(void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)arg0 adjustScrollView:(BOOL)arg1 ;
-(void)_setSelectedDOMRangeAndUpdateUI:(id)arg0 ;
-(void)_setUnobscuredSafeAreaInsets:(struct UIEdgeInsets )arg0 ;
-(void)_startAssistingKeyboard;
-(void)_startAssistingNode:(id)arg0 ;
-(void)_startDeferringEvents;
-(void)_startRelinquishingFirstResponderToFocusedElement;
-(void)_startURLificationIfNeededCoalesce:(BOOL)arg0 ;
-(void)_stopAssistingFormNode;
-(void)_stopAssistingKeyboard;
-(void)_stopAssistingNode:(id)arg0 ;
-(void)_stopRelinquishingFirstResponderToFocusedElement;
-(void)_transliterateChinese:(id)arg0 ;
-(void)_updateAccessory;
-(void)_updateAutoFillButton;
-(void)_updateFixedPositionContent;
-(void)_updateFixedPositioningObjectsLayoutAfterScroll;
-(void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
-(void)_updateFixedPositioningObjectsLayoutDuringScroll;
-(void)_updateFixedPositioningObjectsLayoutSoon;
-(void)_updateScrollerViewForInputView:(id)arg0 ;
-(void)_webThreadOverflowScrollOffsetChanged;
-(void)_webTouchEventsRecognized:(id)arg0 ;
-(void)_webViewFormEditedStatusHasChanged:(id)arg0 ;
-(void)_zoomToNode:(id)arg0 forceScroll:(BOOL)arg1 ;
-(void)_zoomToRect:(struct CGRect )arg0 ensuringVisibilityOfRect:(struct CGRect )arg1 withScale:(CGFloat)arg2 forceScroll:(BOOL)arg3 ;
-(void)_zoomToRect:(struct CGRect )arg0 ensuringVisibilityOfRect:(struct CGRect )arg1 withScale:(CGFloat)arg2 forceScroll:(BOOL)arg3 formAssistantFrame:(struct CGRect )arg4 animationDuration:(CGFloat)arg5 ;
-(void)_zoomToRect:(struct CGRect )arg0 withScale:(CGFloat)arg1 ;
-(void)acceptedAutoFillWord:(id)arg0 ;
-(void)accessoryAutoFill;
-(void)accessoryClear;
-(void)accessoryDone;
-(void)accessoryTab:(BOOL)arg0 ;
-(void)assistFormNode:(id)arg0 ;
-(void)clearMessagesMatchingMask:(int)arg0 ;
-(void)copy:(id)arg0 ;
-(void)dealloc;
-(void)formDelegateTextDidChange;
-(void)installGestureRecognizers;
-(void)redrawScaledDocument;
-(void)rotateEnclosingScrollViewToFrame:(struct CGRect )arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)simulateDidScroll;
-(void)updateBoundariesOfScrollView:(id)arg0 withScales:(struct ? )arg1 ;
-(void)webView:(id)arg0 addMessageToConsole:(id)arg1 withSource:(id)arg2 ;
-(void)webView:(id)arg0 didCreateOrUpdateScrollingLayer:(id)arg1 withContentsLayer:(id)arg2 scrollSize:(id)arg3 forNode:(id)arg4 allowHorizontalScrollbar:(BOOL)arg5 allowVerticalScrollbar:(BOOL)arg6 ;
-(void)webView:(id)arg0 didFailLoadWithError:(id)arg1 forFrame:(id)arg2 ;
-(void)webView:(id)arg0 didFinishLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFirstLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg0 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)webView:(id)arg0 elementDidBlurNode:(id)arg1 ;
-(void)webView:(id)arg0 elementDidFocusNode:(id)arg1 ;
-(void)webView:(id)arg0 willCloseFrame:(id)arg1 ;
-(void)webView:(id)arg0 willRemoveScrollingLayer:(id)arg1 withContentsLayer:(id)arg2 forNode:(id)arg3 ;
-(void)webViewDidCommitCompositingLayerChanges:(id)arg0 ;
-(void)webViewDidPreventDefaultForEvent:(id)arg0 ;


@end


#endif