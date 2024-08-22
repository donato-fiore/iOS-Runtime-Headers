// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMAILCOMPOSEVIEW_H
#define MFMAILCOMPOSEVIEW_H

@class UITransitionView, UIView, NSMutableArray, UIResponder, NSInvocation, CNAutocompleteResultsTableViewController, UIScrollView, NSString, UIViewController;
@protocol CNComposeHeaderViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNComposeDragSourceDelegate, CNComposeDropTargetDelegate, MFComposeMultiViewDelegate, MFComposeWebViewDelegate, UIPopoverControllerDelegate, MFComposeFromViewDelegate, EFLoggable, UIScrollViewDelegate, MFMailComposeContactsSearchControllerDelegate, MFMailComposeRecipientTextViewDelegate, MFMailComposeViewDelegate, ComposeViewNavigationBarDelegate, MFMailComposeToFieldDelegate;


#import "MFMailComposeRecipientTextView.h"
#import "MFComposeWebView.h"
#import "MFMessageContentLoadingView.h"
#import "MFComposeDisplayMetrics.h"
#import "MFComposeFromView.h"
#import "MFComposeImageSizeView.h"
#import "MFComposeMultiView.h"
#import "MFMailComposeContactsSearchController.h"
#import "MFComposeSubjectView.h"
#import "MFMailComposeToField.h"
#import "MFComposeWebContentVariationView.h"

@interface MFMailComposeView : UITransitionView <CNComposeHeaderViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNComposeDragSourceDelegate, CNComposeDropTargetDelegate, MFComposeMultiViewDelegate, MFComposeWebViewDelegate, UIPopoverControllerDelegate, MFComposeFromViewDelegate, EFLoggable, UIScrollViewDelegate, MFMailComposeContactsSearchControllerDelegate>

 {
    UIView *_headerView;
    UIView *_contentView;
    UIView *_shadowView;
    MFMailComposeRecipientTextView *_lastChangedRecipientView;
    MFMailComposeRecipientTextView *_activeRecipientView;
    BOOL _completedCCAndBCCFieldSetup;
    MFComposeWebView *_webView;
    MFMessageContentLoadingView *_loadingView;
    BOOL _isDragging;
    NSMutableArray *_pendingDropRecipients;
    UIResponder *_firstResponderBeforeSheet;
    UIResponder *_pinningResponder;
    NSInvocation *_delayedPopoverInvocation;
    CNAutocompleteResultsTableViewController *_corecipientsSearchViewController;
    UIView *_corecipientsSearchTableViewSeparator;
    CGFloat _offsetBeforeSearch;
    CGFloat _keyboardIntersection;
    NSUInteger _options;
    CGSize _currentContentSize;
    NSUInteger _notifyingBodyField;
    UIView *_findPanelHostView;
    CGFloat _findPanelHeight;
    BOOL _isChangingRecipients;
    BOOL _isLoading;
    BOOL _isSending;
    BOOL _isShowingPeoplePicker;
    BOOL _isLoadingFromAddress;
    BOOL _isReplyToHME;
    BOOL _isRotating;
    BOOL _isClosing;
    BOOL _isForEditing;
    BOOL _isAnimationDisabled;
    BOOL _isDisambiguating;
    BOOL _shouldShowOptionalHeaders;
    BOOL _hasAppeared;
    BOOL _corecipientsTableVisible;
}


@property (nonatomic, getter=isAnimationDisabled) BOOL animationDisabled;
@property (readonly, nonatomic) MFMailComposeRecipientTextView *bccField; // ivar: _bccField
@property (readonly, nonatomic) UIScrollView *bodyScroller; // ivar: _bodyScroller
@property (readonly, nonatomic) MFMailComposeRecipientTextView *ccField; // ivar: _ccField
@property (nonatomic, getter=isChangingRecipients) BOOL changingRecipients;
@property (weak, nonatomic) NSObject<MFMailComposeRecipientTextViewDelegate> *composeRecipientDelegate; // ivar: _composeRecipientViewDelegate
@property (weak, nonatomic) NSObject<MFMailComposeViewDelegate> *composeViewDelegate; // ivar: _mailComposeViewDelegate
@property (readonly, nonatomic) MFComposeWebView *composeWebView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MFComposeDisplayMetrics *displayMetrics; // ivar: _displayMetrics
@property (readonly, nonatomic) MFComposeFromView *fromField; // ivar: _fromField
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MFComposeImageSizeView *imageSizeField; // ivar: _imageSizeField
@property (nonatomic) BOOL isForEditing;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic, getter=isLoadingFromAddress) BOOL loadingFromAddress;
@property (readonly, nonatomic) MFComposeMultiView *multiField; // ivar: _multiField
@property (weak, nonatomic) NSObject<ComposeViewNavigationBarDelegate> *navigationBarDelegate; // ivar: _navigationBarDelegate
@property (weak, nonatomic) UIViewController *popoverOwner; // ivar: _popoverOwner
@property (nonatomic, getter=isReplyToHME) BOOL replyToHME;
@property (readonly, nonatomic) MFMailComposeContactsSearchController *searchController; // ivar: _searchController
@property (readonly, nonatomic) CNAutocompleteResultsTableViewController *searchViewController; // ivar: _searchViewController
@property (readonly, nonatomic, getter=isSearching) BOOL searching;
@property (nonatomic, getter=isSending) BOOL sending;
@property (nonatomic, getter=isShowingPeoplePicker) BOOL showingPeoplePicker;
@property (readonly, nonatomic) MFComposeSubjectView *subjectField; // ivar: _subjectField
@property (readonly) Class superclass;
@property (readonly, nonatomic) MFMailComposeToField *toField; // ivar: _toField
@property (weak, nonatomic) NSObject<MFMailComposeToFieldDelegate> *toFieldDelegate; // ivar: _toFieldDelegate
@property (readonly, nonatomic) MFComposeWebContentVariationView *webContentVariationField; // ivar: _webContentVariationField


+(CGFloat)preferredHeaderHeight;
+(id)log;
-(BOOL)_presentsSearchResultsTableAsPopover;
-(BOOL)_shouldShowCorecipientsTableView;
-(BOOL)_userInterfaceConfigurationSupportsCorecipientsTableView;
-(BOOL)chooseSelectedSearchResult;
-(BOOL)dragSource:(id)arg0 sessionAllowsMoveOperation:(id)arg1 ;
-(BOOL)dropTarget:(id)arg0 shouldAddDroppedContactsToTargetView:(id)arg1 forSession:(id)arg2 ;
-(BOOL)endEditing:(BOOL)arg0 ;
-(BOOL)isKeyboardVisible;
-(BOOL)isSearchResultsPopoverVisible;
-(BOOL)presentSearchResults;
-(BOOL)presentSearchResults:(id)arg0 ;
-(BOOL)shouldScrollLastChangedRecipientViewToTop;
-(CGFloat)_heightForBottomView;
-(CGFloat)_verticalPadding;
-(id)_corecipientResultsTable;
-(id)_focusedRecipientView;
-(id)_searchResultsTable;
-(id)dragSource:(id)arg0 draggableItemsAtPoint:(struct CGPoint )arg1 ;
-(id)dragSource:(id)arg0 localObjectForDraggableItem:(id)arg1 ;
-(id)dragSource:(id)arg0 suggestedNameForDraggableItem:(id)arg1 ;
-(id)dragSource:(id)arg0 targetedPreviewForDraggableItem:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 options:(NSUInteger)arg1 ;
-(id)recipientTextViewForComposeMultiView:(id)arg0 ;
-(id)sendingAccountProxyForComposeContactsSearchController:(id)arg0 ;
-(id)sendingAddressForDropTarget:(id)arg0 withTargetView:(id)arg1 ;
-(struct CGPoint )_headerViewOriginWithScrollViewOffsetCalculation;
-(struct CGRect )_headerFrame;
-(void)_adjustHeaderFieldsPreferredContentSize;
-(void)_adjustScrollerContentSize;
-(void)_adjustScrollerForBottomView;
-(void)_beginBlockingBodyScroll;
-(void)_beginPreventingScrollingToRevealSelection;
-(void)_cancelAnimations;
-(void)_cancelDelayedPopover;
-(void)_collectKeyViews:(id)arg0 ;
-(void)_createCCAndBCCFieldIfNeededAndCompleteSetup:(BOOL)arg0 ;
-(void)_createImageSizeFieldIfNeededAndAddSubview:(BOOL)arg0 ;
-(void)_dropItems:(id)arg0 recipientTextView:(id)arg1 ;
-(void)_endBlockingBodyScroll;
-(void)_endPreventingScrollingToRevealSelection;
-(void)_finishUpRotationToInterfaceOrientation:(NSInteger)arg0 ;
-(void)_layoutComposeHeaderViewsWithChangingHeader:(id)arg0 toSize:(struct CGSize )arg1 withPinFrame:(struct CGRect *)arg2 ;
-(void)_layoutFindPanelHostView;
-(void)_layoutLoadingView;
-(void)_layoutSubviews:(BOOL)arg0 ;
-(void)_layoutSubviews:(BOOL)arg0 changingView:(id)arg1 toSize:(struct CGSize )arg2 ;
-(void)_layoutSubviews:(BOOL)arg0 changingView:(id)arg1 toSize:(struct CGSize )arg2 searchResultsWereDismissed:(BOOL)arg3 ;
-(void)_layoutSubviewsWithActiveRecipientView:(BOOL)arg0 changingView:(id)arg1 toSize:(struct CGSize )arg2 ;
-(void)_normalizeBodyFieldFrame;
-(void)_presentDelayedPopover;
-(void)_revealSelection;
-(void)_revealSelectionIfNeededWithChangingView:(id)arg0 ;
-(void)_setCorecipientsTableViewVisible:(BOOL)arg0 withFieldFrame:(struct CGRect )arg1 ;
-(void)_setDragging:(BOOL)arg0 ;
-(void)_setHeaderFrame:(struct CGRect )arg0 ;
-(void)_setShadowViewVisible:(BOOL)arg0 frame:(struct CGRect )arg1 ;
-(void)_setUpContentView;
-(void)_setupBodyFieldWithHeaderFrame:(struct CGRect )arg0 enclosingFrame:(struct CGRect )arg1 changingView:(id)arg2 frameToPin:(struct CGRect )arg3 wasSearching:(BOOL)arg4 ;
-(void)_setupField:(id)arg0 withLabel:(id)arg1 navTitle:(id)arg2 ;
-(void)_updateFromField;
-(void)_updateKeyboardIntersection:(struct CGRect )arg0 ;
-(void)_updateMultiField;
-(void)_updateOptionalHeaderVisibilityForceVisible:(BOOL)arg0 ;
-(void)_updateQuoteLevelMenu;
-(void)_updateTextViewHeightWithHeaderFrame:(struct CGRect )arg0 ;
-(void)_updateTextViewOriginWithHeaderFrame:(struct CGRect )arg0 ;
-(void)autocompleteResultsController:(id)arg0 didAskToRemoveRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didRequestInfoAboutRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg0 didSelectRecipient:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)automaticKeyboardFinishedAppearing:(id)arg0 ;
-(void)automaticKeyboardFinishedDisappearing:(id)arg0 ;
-(void)beginSearchForText:(id)arg0 recipientView:(id)arg1 ;
-(void)cancelDelayedPopover;
-(void)cancelSearch;
-(void)clearSearchForActiveRecipientView;
-(void)clearSearchForRecipientView:(id)arg0 reflow:(BOOL)arg1 clear:(BOOL)arg2 ;
-(void)composeContactsSearchController:(id)arg0 didFindCorecipients:(id)arg1 ;
-(void)composeContactsSearchController:(id)arg0 didSortResults:(id)arg1 ;
-(void)composeContactsSearchController:(id)arg0 finishedWithResults:(BOOL)arg1 ;
-(void)composeFromView:(id)arg0 didSelectAddress:(id)arg1 ;
-(void)composeHeaderViewClicked:(id)arg0 ;
-(void)composeWebViewTextChanged:(id)arg0 ;
-(void)dealloc;
-(void)didAppear;
-(void)didIgnoreSearchResults;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)disambiguateRecipient:(id)arg0 recipientView:(id)arg1 ;
-(void)dismissSearchResults;
-(void)dismissSearchResultsIfDisambiguating;
-(void)dragSource:(id)arg0 willEndInteractionWithItems:(id)arg1 dropOperation:(NSUInteger)arg2 ;
-(void)dropTarget:(id)arg0 didDropDragItems:(id)arg1 atPoint:(struct CGPoint )arg2 ;
-(void)dropTarget:(id)arg0 dragDidMoveToPoint:(struct CGPoint )arg1 ;
-(void)dropTarget:(id)arg0 dragEnteredAtPoint:(struct CGPoint )arg1 ;
-(void)dropTargetDragExited:(id)arg0 ;
-(void)findCorecipientsWithRecipientView:(id)arg0 ;
-(void)findNavigatorPanelDidChangeHeight:(CGFloat)arg0 ;
-(void)focusFirstResponderAfterRecipientView:(id)arg0 ;
-(void)invalidateSearchResultRecipient:(id)arg0 ;
-(void)layoutForChangedComposeHeaderView:(id)arg0 size:(struct CGSize )arg1 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)menuDidHide;
-(void)parentDidClose;
-(void)parentWillClose;
-(void)removeFromSuperview;
-(void)resetContentSize;
-(void)restoreFirstResponder;
-(void)restoreFirstResponderWithKeyboardPinning:(BOOL)arg0 ;
-(void)saveFirstResponder;
-(void)saveFirstResponderWithKeyboardPinning:(BOOL)arg0 ;
-(void)scrollToRecipientTextView:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)searchResultsPopoverWasDismissed;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(void)setAutoresizingMask:(NSUInteger)arg0 ;
-(void)setKeyboardVisible:(BOOL)arg0 animate:(BOOL)arg1 ;
-(void)setRecipientFieldsEditable:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setScrollsToTop:(BOOL)arg0 ;
-(void)toggleImageSizeFieldIfNecessary;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateOptionalHeaderVisibility;
-(void)viewDidBecomeFirstResponder:(id)arg0 ;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willDisappear;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif