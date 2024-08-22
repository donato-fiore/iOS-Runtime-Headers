// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(CGFloat)conversationListWidthForInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)entryViewMaxHandWritingPluginShelfHeight;
-(CGFloat)maxNavigationBarNoContactPhotoCollapsedHeightValue;
-(CGFloat)navigationBarMaxHeight;
-(CGFloat)photoPickerMaxPopoverPhotoHeight;
-(CGFloat)photoPickerPopoverWidth;
-(CGFloat)previewMaxWidth;
-(CGFloat)searchLinksThumbnailWidth;
-(CGFloat)searchPhotosThumbnailWidth;
-(CGFloat)transcriptContactImageDiameter;
-(CGFloat)transcriptHeaderViewMaxRows;
-(CGFloat)welcomeViewContentViewTopAnchorLayoutConstraintConstant;
-(NSInteger)groupRecipientSelectionPresentationStyle;
-(NSUInteger)defaultConversationViewingMessageCount;
-(NSUInteger)numberOfButtonsInPhotoPicker;
-(NSUInteger)suggestedAppStripLimit;
-(NSUInteger)supportedInterfaceOrientations;
-(id)fullscreenPickerActionLayoutAxisPrioritiesForWidth:(CGFloat)arg0 ;
-(struct CGSize )attachmentBrowserDefaultSizeForSquare;
-(struct CGSize )detonatedItemBalloonViewSize;
-(struct CGSize )detonatedItemDocumentIconSize;
-(struct CGSize )documentIconSize;
-(struct UIEdgeInsets )contactPhotoTranscriptInsets;
-(struct UIEdgeInsets )defaultAVPlayerViewContorllerControlsInsets;
-(struct UIEdgeInsets )minTranscriptMarginInsets;


@end


#endif