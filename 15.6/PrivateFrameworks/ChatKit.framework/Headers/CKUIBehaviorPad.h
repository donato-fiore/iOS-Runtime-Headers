// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKUIBEHAVIORPAD_H
#define CKUIBEHAVIORPAD_H



#import "CKUIBehavior.h"

@interface CKUIBehaviorPad : CKUIBehavior



-(BOOL)canPresentOverKeyboard;
-(BOOL)canShowContactPhotosInConversationList;
-(BOOL)isAppStripInKeyboard;
-(BOOL)lowClearanceInLandscape;
-(BOOL)photoPickerShouldZoomOnSelection;
-(BOOL)presentForwardingUIModally;
-(BOOL)presentsAutocompleteInAPopover;
-(BOOL)presentsQuickLookController;
-(BOOL)shouldAlignRecipientGlyphsWithMargins;
-(BOOL)shouldDisableFocusRing;
-(BOOL)shouldOnlyResumeToConversationListAfterTimeout;
-(BOOL)shouldPopoverSuggestionsBanner;
-(BOOL)shouldRefreshAlternateAddressesSheet;
-(BOOL)shouldShowDisclosureChevronInRecipientAtoms;
-(BOOL)shouldSuppressRotationInNewCompose;
-(BOOL)showMMSSetup;
-(BOOL)showPendingInConversationList;
-(BOOL)showsConversationListCellChevronImage;
-(BOOL)usesPopovers;
-(BOOL)usesUncollapsedSplitview;
-(CGFloat)attachmentBrowserGridInterItemSpacing;
-(CGFloat)conversationListMinimumWidthForHiddenContactImage;
-(CGFloat)entryViewMaxHandWritingPluginShelfHeight;
-(CGFloat)maxNavigationBarNoContactPhotoCollapsedHeightValue;
-(CGFloat)navigationBarMaxHeight;
-(CGFloat)photoPickerMaxPopoverPhotoHeight;
-(CGFloat)photoPickerPopoverWidth;
-(CGFloat)previewMaxWidth;
-(CGFloat)primaryColumnWidthForInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)resumeToConversationListTimeInterval;
-(CGFloat)searchLinksThumbnailWidth;
-(CGFloat)searchPhotosThumbnailWidth;
-(CGFloat)transcriptContactImageDiameter;
-(CGFloat)transcriptHeaderViewMaxRows;
-(CGFloat)welcomeViewContentViewTopAnchorLayoutConstraintConstant;
-(NSUInteger)defaultConversationViewingMessageCount;
-(NSUInteger)numberOfButtonsInPhotoPicker;
-(NSUInteger)suggestedAppStripLimit;
-(NSUInteger)supportedInterfaceOrientations;
-(id)fullscreenPickerActionLayoutAxisPrioritiesForWidth:(CGFloat)arg0 ;
-(struct CGSize )attachmentBrowserDefaultSizeForSquare;
-(struct CGSize )documentIconSize;
-(struct UIEdgeInsets )contactPhotoTranscriptInsets;
-(struct UIEdgeInsets )defaultAVPlayerViewContorllerControlsInsets;
-(struct UIEdgeInsets )minTranscriptMarginInsets;


@end


#endif