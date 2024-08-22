// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMESSAGECONTENTVIEW_H
#define MFMESSAGECONTENTVIEW_H

@class UIView, EFCancelationToken, UIBarButtonItem, NSMutableSet, NSSet, NSMutableDictionary, NSDictionary, NSArray, MUIBrandIndicatorProvider, EMContentRepresentation, NSError, EMDaemonInterface, NSString, MFMessageLoadingContext, MFMessageContentLoadingView, MFMailboxProvider, UIScrollView, WKWebView;
@protocol UIPopoverPresentationControllerDelegate, _WKInputDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, MFHideMyEmailBannerViewDelegate, MFHasMoreContentBannerViewDelegate, MFLoadBlockedContentBannerViewDelegate, MFLoadFailedProxyContentBannerViewDelegate, MFBlockedSenderBannerViewDelegate, MFMessageHeaderViewDelegate, MFMessageFooterViewDelegate, MFMailDropBannerDelegate, MFPresentationSource, UIScrollViewDelegate, EFSignpostable, MFMailWebProcessDelegate, MFReusable, EFCancelable, MFMessageContentViewDataSource, MFMessageContentViewDelegate, EFScheduler;


#import "MessageContentItemsHelper.h"
#import "MFMailDropBannerView.h"
#import "MFHasMoreContentBannerView.h"
#import "MFHideMyEmailBannerView.h"
#import "MFLoadBlockedContentBannerView.h"
#import "MFBlockedSenderBannerView.h"
#import "MFLoadFailedProxyContentBannerView.h"
#import "MFConversationItemFooterView.h"
#import "MFAddressAtomStatusManager.h"
#import "MessageContentRepresentationRequest.h"
#import "MFMessageDisplayMetrics.h"
#import "ConversationSearchOverlayView.h"
#import "MFMessageHeaderView.h"
#import "MFWebViewDictionary.h"
#import "MFWebViewLoadingController.h"

@interface MFMessageContentView : UIView <UIPopoverPresentationControllerDelegate, _WKInputDelegate, WKNavigationDelegatePrivate, WKUIDelegatePrivate, MFHideMyEmailBannerViewDelegate, MFHasMoreContentBannerViewDelegate, MFLoadBlockedContentBannerViewDelegate, MFLoadFailedProxyContentBannerViewDelegate, MFBlockedSenderBannerViewDelegate, MFMessageHeaderViewDelegate, MFMessageFooterViewDelegate, MFMailDropBannerDelegate, MFPresentationSource, UIScrollViewDelegate, EFSignpostable, MFMailWebProcessDelegate, MFReusable>

 {
    EFCancelationToken *_loadingCancelable;
    MessageContentItemsHelper *_relatedItemsHelper;
    MFMailDropBannerView *_mailDropBanner;
    MFHasMoreContentBannerView *_loadHasMoreContentBanner;
    MFHideMyEmailBannerView *_hideMyEmailBanner;
    MFLoadBlockedContentBannerView *_loadImagesHeaderBlock;
    MFBlockedSenderBannerView *_blockedSenderBanner;
    MFLoadFailedProxyContentBannerView *_loadFailedProxyContentBanner;
    UIView *_previousContentSnapshotWrapperView;
    UIBarButtonItem *_presentedControllerDoneButtonItem;
    CGRect _activatedAttachmentRect;
    id<EFCancelable> *_contentSizeObservation;
    BOOL _suppressContentSizeNotifications;
    BOOL _suppressContentSizeNotificationsUntilFirstPaint;
    UIEdgeInsets _originalZoomInsets;
    BOOL _paddingConstantsNeedUpdate;
    MFConversationItemFooterView *_footerView;
    NSMutableSet *_inFlightURLs;
    NSSet *_allRemoteURLs;
    NSMutableDictionary *_failedProxyURLs;
    NSUInteger _webProcessCrashCount;
    ? _flags;
    BOOL _isTextSearchActive;
}


@property (nonatomic) BOOL allowLoadOfBlockedMessageContent; // ivar: _allowLoadOfBlockedMessageContent
@property (retain, nonatomic) MFAddressAtomStatusManager *atomManager; // ivar: _atomManager
@property (retain, nonatomic) NSDictionary *attachmentDragPreviews; // ivar: _attachmentDragPreviews
@property (copy) NSArray *attachments; // ivar: _attachments
@property (nonatomic) BOOL automaticallyCollapseQuotedContent; // ivar: _automaticallyCollapseQuotedContent
@property (nonatomic) NSUInteger blockedContentTypes; // ivar: _blockedContentTypes
@property (retain, nonatomic) MUIBrandIndicatorProvider *brandIndicatorProvider; // ivar: _brandIndicatorProvider
@property (retain, nonatomic) NSObject<EFCancelable> *bucketPreferenceToken; // ivar: _bucketPreferenceToken
@property (readonly) NSArray *contentItems;
@property (nonatomic) BOOL contentPaddingFollowsLayoutMargins; // ivar: _contentPaddingFollowsLayoutMargins
@property (readonly) EMContentRepresentation *contentRepresentation;
@property (retain, nonatomic) NSError *contentRepresentationError; // ivar: _contentRepresentationError
@property (readonly) EMContentRepresentation *contentRepresentationIfAvailable;
@property (retain, nonatomic) MessageContentRepresentationRequest *contentRequest; // ivar: _contentRequest
@property (retain, nonatomic) EMDaemonInterface *daemonInterface; // ivar: _daemonInterface
@property (weak, nonatomic) NSObject<MFMessageContentViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFMessageContentViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MFMessageDisplayMetrics *displayMetrics; // ivar: _displayMetrics
@property (retain, nonatomic) ConversationSearchOverlayView *findOverlayView; // ivar: _findOverlayView
@property (readonly, nonatomic) MFConversationItemFooterView *footerView;
@property (nonatomic) BOOL hasVisibleContent; // ivar: _hasVisibleContent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MFMessageHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) UIView *headerViewSubjectBlock; // ivar: _headerViewSubjectBlock
@property (nonatomic) CGPoint initialContentOffset; // ivar: _initialContentOffset
@property (nonatomic) CGFloat initialScale; // ivar: _initialScale
@property (nonatomic) BOOL initiallyZoomsToShowAllContent; // ivar: _initiallyZoomsToShowAllContent
@property (retain, nonatomic) MFMessageLoadingContext *loadingContext; // ivar: _loadingContext
@property (retain, nonatomic) NSObject<EFCancelable> *loadingIndicatorCancelable; // ivar: _loadingIndicatorCancelable
@property (nonatomic, getter=isLoadingIndicatorVisible) BOOL loadingIndicatorVisible;
@property (retain, nonatomic) NSObject<EFCancelable> *loadingSpinnerTailspinToken; // ivar: _loadingSpinnerTailspinToken
@property (retain, nonatomic) MFMessageContentLoadingView *loadingView; // ivar: _loadingView
@property (retain, nonatomic) MFMailboxProvider *mailboxProvider; // ivar: _mailboxProvider
@property (readonly, nonatomic) BOOL mayShareToUnmanaged;
@property (nonatomic) NSInteger messageBlockingReason; // ivar: _messageBlockingReason
@property (retain, nonatomic) UIView *previousContentSnapshot; // ivar: _previousContentSnapshot
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (copy, nonatomic) NSString *selectedHTML; // ivar: _selectedHTML
@property (nonatomic) BOOL shouldArchiveByDefault; // ivar: _shouldArchiveByDefault
@property (readonly, nonatomic) BOOL shouldHideStickyFooterView;
@property (nonatomic) BOOL showMessageFooter; // ivar: _showMessageFooter
@property (nonatomic) BOOL showingError; // ivar: _showingError
@property (nonatomic) BOOL showsBanners; // ivar: _showsBanners
@property (readonly) NSUInteger signpostID;
@property (readonly, nonatomic) BOOL sourceIsManaged;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressScrolling; // ivar: _suppressScrolling
@property (readonly, nonatomic) NSObject<EFScheduler> *trustConfigurationScheduler; // ivar: _trustConfigurationScheduler
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) MFWebViewDictionary *webViewConstants;
@property (retain, nonatomic) MFWebViewLoadingController *webViewLoadingController; // ivar: _webViewLoadingController
@property (nonatomic, getter=isZoomEnabled) BOOL zoomEnabled; // ivar: _zoomEnabled


+(id)log;
+(id)signpostLog;
-(BOOL)_allAttachmentsArePhotosOrVideos;
-(BOOL)_firstResponderIsInWebView;
-(BOOL)_objectContainsNonEmptyString:(id)arg0 ;
-(BOOL)cachedMetadataBoolForKey:(id)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(CGFloat)_adjustWebViewInsetsToAccomodateHeaderAndFooter;
-(CGFloat)_viewportWidth;
-(NSInteger)_webView:(id)arg0 dataOwnerForDragSession:(id)arg1 ;
-(NSInteger)_webView:(id)arg0 decidePolicyForFocusedElement:(id)arg1 ;
-(id)_attachmentPreviewsFromData:(id)arg0 ;
-(id)_bodyFont;
-(id)_contentItemForElement:(id)arg0 ;
-(id)_contextMenuConfigurationForAttachment:(id)arg0 ;
-(id)_dataDetectionContextForWebView:(id)arg0 ;
-(id)_libraryMessage;
-(id)_mailboxForBanner:(id)arg0 ;
-(id)_quotedContentAttributionForMessage:(id)arg0 ;
-(id)_styleSheetWithPadding:(struct UIEdgeInsets )arg0 useWideLayout:(BOOL)arg1 ;
-(id)_webView:(id)arg0 adjustedDataInteractionItemProvidersForItemProvider:(id)arg1 representingObjects:(id)arg2 additionalData:(id)arg3 ;
-(id)_webView:(id)arg0 previewForCancellingItem:(id)arg1 withDefault:(id)arg2 ;
-(id)_webView:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)_webView:(id)arg0 previewItem:(id)arg1 ;
-(id)_webView:(id)arg0 willUpdateDropProposalToProposal:(id)arg1 forSession:(id)arg2 ;
-(id)cachedMetadataOfClass:(Class)arg0 forKey:(id)arg1 ;
-(id)downloadFutureForContentItem:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)presentedControllerDoneButtonItem;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(id)viewPrintFormatter;
-(struct CGRect )_adjustedRectForWebRect:(struct CGRect )arg0 ;
-(struct CGRect )_convertDictionaryToRect:(id)arg0 ;
-(void)_addBlockedSenderBannerIfNeeded;
-(void)_addHasMoreContentBannerWithRemainingBytes:(NSUInteger)arg0 ;
-(void)_addHideMyEmailBannerIfNeeded;
-(void)_addLoadingSubview:(id)arg0 ;
-(void)_adjustHeaderOffsetForZoom;
-(void)_alertMailDropDownloadIsTooLargeForCell:(BOOL)arg0 ;
-(void)_beginObservingContentHeight;
-(void)_checkLoadBlockedContent;
-(void)_clearAllBannersAnimated:(BOOL)arg0 ;
-(void)_clearBlockedSenderBannerAnimated:(BOOL)arg0 ;
-(void)_clearHasMoreContentBannerAnimated:(BOOL)arg0 ;
-(void)_clearLoadFailedProxyContentBannerAnimated:(BOOL)arg0 ;
-(void)_clearLoadRemoteImagesBannerAnimated:(BOOL)arg0 ;
-(void)_commonInit;
-(void)_configureTrustEvaluationsForSignersInSecurityInformation:(id)arg0 ;
-(void)_darkerSystemColorsStatusDidChange:(id)arg0 ;
-(void)_displayDismissibleAttachmentErrorWithTitle:(id)arg0 message:(id)arg1 ;
-(void)_downloadAllMailDropAttachments;
-(void)_expandQuoteWithCollapsedBlockquoteOffset:(CGFloat)arg0 expandedOffset:(CGFloat)arg1 ;
-(void)_fontSizeDidChange:(id)arg0 ;
-(void)_foundImageCIDAttachments:(id)arg0 ;
-(void)_handleAttachmentTapMessage:(id)arg0 ;
-(void)_handleBlockSenderListChanged:(id)arg0 ;
-(void)_layoutFooterView;
-(void)_layoutLoadingView;
-(void)_loadBlockedMessageContactWarning;
-(void)_loadBlockedMessageContactWarningWithRepresentation:(id)arg0 ;
-(void)_logRequestFinishWithSuccess:(BOOL)arg0 ;
-(void)_notifyDelegateScrollViewSizeChanged:(struct CGSize )arg0 ;
-(void)_observeBlockedSenderListChangedNotification;
-(void)_processDataDetectionMetricsFromResults:(id)arg0 ;
-(void)_reevaluateTrustWithNetworkAccessAllowed;
-(void)_reloadUserStyleSheets;
-(void)_reloadWithPartiallyEncryptedMessageAllowed;
-(void)_reloadWithRemoteContentAllowed;
-(void)_removeLoadingSubview:(id)arg0 ;
-(void)_requestWebViewLoadWithLoadingContext:(id)arg0 ;
-(void)_requestWebViewLoadWithRepresentation:(id)arg0 ;
-(void)_resetHeaderOffsetForZoom;
-(void)_revealActionsButtonTapped;
-(void)_seeMoreButtonTapped;
-(void)_setNeedsPaddingConstantsUpdate;
-(void)_setRemoteContentToLoadWithoutProxy;
-(void)_setupWebProcessLocalizedStrings;
-(void)_showLoadFailedProxyContentBannerIfNeeded;
-(void)_showModalViewController:(id)arg0 presentationSource:(id)arg1 ;
-(void)_showModalViewController:(id)arg0 presentationSource:(id)arg1 forceNavigationController:(BOOL)arg2 ;
-(void)_stopObservingContentHeight;
-(void)_triggerWebViewLoad;
-(void)_triggerWebViewLoadWithoutShowingContentRepresentation;
-(void)_updateFileWrapperForAttachment:(id)arg0 contentID:(id)arg1 ;
-(void)_updateMinimumFontSize;
-(void)_updateWebViewPaddingConstants;
-(void)_webView:(id)arg0 contextMenuConfigurationForElement:(id)arg1 completionHandler:(id)arg2 ;
-(void)_webView:(id)arg0 dataInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(NSUInteger)arg3 ;
-(void)_webView:(id)arg0 dataInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)_webView:(id)arg0 didInsertAttachment:(id)arg1 withSource:(id)arg2 ;
-(void)_webView:(id)arg0 renderingProgressDidChange:(NSUInteger)arg1 ;
-(void)_webView:(id)arg0 webContentProcessDidTerminateWithReason:(NSInteger)arg1 ;
-(void)_webViewWebProcessDidBecomeUnresponsive:(id)arg0 ;
-(void)clearAllDecoratedFoundText;
-(void)clearMessage;
-(void)clearSelectedHTML;
-(void)contentRequestDidReceiveContentRepresentation:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)didBeginTextSearch;
-(void)didDismissBlockedSenderBannerView:(id)arg0 ;
-(void)didDismissHideMyEmailBannerView:(id)arg0 ;
-(void)didEndTextSearch;
-(void)didTapBlockedSenderBannerView:(id)arg0 ;
-(void)didTapHasMoreContentBannerView:(id)arg0 ;
-(void)didTapHideMyEmailBannerView:(id)arg0 ;
-(void)dismissPresentedViewController:(id)arg0 ;
-(void)footerViewDidChangeHeight:(id)arg0 ;
-(void)generateSnapshotImageWithCompletion:(id)arg0 ;
-(void)getCachedMetadataBoolForKey:(id)arg0 handler:(id)arg1 ;
-(void)getCachedMetadataOfClass:(Class)arg0 forKey:(id)arg1 handler:(id)arg2 ;
-(void)headerViewDidChangeHeight:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)loadBlockedContent;
-(void)loadBlockedContentBannerDidTriggerLoad:(id)arg0 ;
-(void)loadFailedProxyContentBannerDidTriggerLoad:(id)arg0 ;
-(void)loadFailedProxyContentBannerWasDismissed:(id)arg0 ;
-(void)loadHasMoreContentBannerIfNecessary;
-(void)mailDropBannerDidTriggerDownload:(id)arg0 ;
-(void)mf_setAsSourceForPopoverPresentationController:(id)arg0 ;
-(void)mf_setAsTargetedSourceOnSceneConfiguration:(id)arg0 ;
-(void)prepareForReuse;
-(void)presentViewController:(id)arg0 ;
-(void)presentationController:(id)arg0 willPresentWithAdaptiveStyle:(NSInteger)arg1 transitionCoordinator:(id)arg2 ;
-(void)reload;
-(void)requestRectForFoundTextRange:(id)arg0 completionHandler:(id)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)selectAll:(id)arg0 ;
-(void)setCachedMetadata:(id)arg0 forKey:(id)arg1 ;
-(void)setCachedMetadataBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)showDelayedProgressUI;
-(void)showSearchResultsAtRange:(id)arg0 usingStyle:(NSUInteger)arg1 ;
-(void)updateForRedisplay;
-(void)webProcessDidBlockLoadingResourceWithURL:(id)arg0 ;
-(void)webProcessDidCreateBrowserContextControllerLoadDelegate;
-(void)webProcessDidFailLoadingResourceWithURL:(id)arg0 ;
-(void)webProcessDidFinishDocumentLoadForURL:(id)arg0 andRequestedRemoteURLs:(id)arg1 ;
-(void)webProcessDidFinishLoadForURL:(id)arg0 ;
-(void)webProcessFailedToLoadResourceWithProxyForURL:(id)arg0 failureReason:(NSInteger)arg1 ;
-(void)webView:(id)arg0 contextMenuForElement:(id)arg1 willCommitWithAnimator:(id)arg2 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didCommitNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;


@end


#endif