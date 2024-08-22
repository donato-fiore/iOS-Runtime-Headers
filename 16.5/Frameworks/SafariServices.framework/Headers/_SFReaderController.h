// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFREADERCONTROLLER_H
#define _SFREADERCONTROLLER_H

@class _WKRemoteObjectInterface, WBSReaderFontManager, WBSReaderConfigurationManager, NSMutableDictionary, NSTimer, NSString, WKWebView;
@protocol SFReaderEventsListener, SFReaderContext, WKNavigationDelegate, WKUIDelegatePrivate, SFReaderWebProcessControllerProtocol, _SFReaderControllerDelegate;

#import <Foundation/Foundation.h>


@interface _SFReaderController : NSObject <SFReaderEventsListener, SFReaderContext, WKNavigationDelegate, WKUIDelegatePrivate>

 {
    id<SFReaderWebProcessControllerProtocol> *_readerControllerProxy;
    _WKRemoteObjectInterface *_eventsListenerInterface;
    WBSReaderFontManager *_fontManager;
    WBSReaderConfigurationManager *_configurationManager;
    id *_readerMailContentCompletionHandler;
    id *_readerPrintContentCompletionHandler;
    NSMutableDictionary *_bookmarkIdentifierToReadingListItemInfoCompletionMap;
    id *_actionsDelayedUntilReaderWebViewIsReady;
    NSTimer *_actionsDelayedUntilReaderWebViewIsReadyTimer;
}


@property (readonly, nonatomic) NSString *articleText; // ivar: _articleText
@property (nonatomic) BOOL contentIsReady; // ivar: _contentIsReady
@property (readonly, nonatomic) NSInteger currentAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<_SFReaderControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doesPageUseSearchEngineOptimizationMetadata; // ivar: _doesPageUseSearchEngineOptimizationMetadata
@property (readonly) NSUInteger hash;
@property (getter=isReaderAvailable) BOOL readerAvailable; // ivar: _readerAvailable
@property (readonly, weak) WKWebView *readerWebView; // ivar: _readerWebView
@property (readonly) Class superclass;
@property (readonly, weak) WKWebView *webView; // ivar: _webView
@property (weak, nonatomic) NSObject<WKUIDelegatePrivate> *webViewUIDelegate; // ivar: _webViewUIDelegate


-(BOOL)_webView:(id)arg0 performDataInteractionOperationWithItemProviders:(id)arg1 ;
-(BOOL)_webView:(id)arg0 shouldIncludeAppLinkActionsForElement:(id)arg1 ;
-(BOOL)canDecreaseReaderTextSize;
-(BOOL)canIncreaseReaderTextSize;
-(BOOL)isLoadingNextPage;
-(BOOL)shouldCreateArticleFinder;
-(NSUInteger)_webView:(id)arg0 willUpdateDataInteractionOperationToOperation:(NSUInteger)arg1 forSession:(id)arg2 ;
-(id)_webView:(id)arg0 actionsForElement:(id)arg1 defaultActions:(id)arg2 ;
-(id)configurationManager;
-(id)fontManager;
-(id)initWithWebView:(id)arg0 ;
-(id)readerControllerProxy;
-(id)readerURL;
-(id)scrollPositionInformation;
-(void)_collectReaderContentForMailWithCompletion:(id)arg0 ;
-(void)_performActionsDelayedUntilReaderWebViewIsReady;
-(void)_performActionsDelayedUntilReaderWebViewIsReadyDidTimeout:(id)arg0 ;
-(void)_saveConfigurationAndSendToWebProcess;
-(void)_sendReaderAvailabilityNotificationForState:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_setUpReaderActivityListener;
-(void)_updateJavaScriptEnabled;
-(void)_webView:(id)arg0 contextMenuConfigurationForElement:(id)arg1 completionHandler:(id)arg2 ;
-(void)_webView:(id)arg0 contextMenuDidEndForElement:(id)arg1 ;
-(void)_webView:(id)arg0 contextMenuForElement:(id)arg1 willCommitWithAnimator:(id)arg2 ;
-(void)_webView:(id)arg0 contextMenuWillPresentForElement:(id)arg1 ;
-(void)_webView:(id)arg0 dataInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(NSUInteger)arg3 ;
-(void)_webView:(id)arg0 dataInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(void)_webView:(id)arg0 dataInteractionOperationWasHandled:(BOOL)arg1 forSession:(id)arg2 itemProviders:(id)arg3 ;
-(void)_webView:(id)arg0 getAlternateURLFromImage:(id)arg1 completionHandler:(id)arg2 ;
-(void)activateFont:(id)arg0 ;
-(void)activateReader;
-(void)checkReaderAvailability;
-(void)clearAvailability;
-(void)clearReaderWebView;
-(void)clearUnusedReaderResourcesSoon;
-(void)collectArticleContent;
-(void)collectReaderContentForMailWithCompletion:(id)arg0 ;
-(void)collectReadingListInfoWithBookmarkID:(int)arg0 completionHandler:(id)arg1 ;
-(void)contentDidBecomeReadyWithArticleText:(id)arg0 ;
-(void)createArticleFinder;
-(void)deactivateReaderNow:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)decreaseReaderTextSize;
-(void)didCollectArticleContent:(id)arg0 ;
-(void)didCollectReaderContentForMail:(id)arg0 ;
-(void)didCollectReadingListItemInfo:(id)arg0 bookmarkID:(id)arg1 ;
-(void)didCreateReaderWebView:(id)arg0 ;
-(void)didDetermineAdditionalTextSamples:(id)arg0 ;
-(void)didDetermineReaderAvailability:(id)arg0 ;
-(void)didDetermineReaderAvailabilityForDynamicCheck:(id)arg0 ;
-(void)didFinishPresentationUpdateAfterTransitioningToReader;
-(void)didPrepareReaderContentForPrinting:(id)arg0 ;
-(void)didSetReaderConfiguration:(id)arg0 ;
-(void)increaseReaderTextSize;
-(void)invalidate;
-(void)loadNewArticle;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)owningWebViewDidCommitNavigation;
-(void)prepareReaderPrintingIFrameWithCompletion:(id)arg0 ;
-(void)readerTextWasExtracted:(id)arg0 withMetadata:(id)arg1 wasDeterminingAvailabilility:(BOOL)arg2 ;
-(void)resetReaderTextSize;
-(void)sendConfigurationToWebProcess;
-(void)setReaderFont:(id)arg0 ;
-(void)setReaderInitialTopScrollOffset:(NSInteger)arg0 configuration:(id)arg1 isViewingArchive:(BOOL)arg2 ;
-(void)setReaderInitialTopScrollOffset:(NSInteger)arg0 configuration:(id)arg1 isViewingArchive:(BOOL)arg2 scrollOffsetDictionary:(id)arg3 ;
-(void)setReaderIsActive:(BOOL)arg0 ;
-(void)setReaderLanguageTag:(id)arg0 ;
-(void)setReaderTheme:(NSInteger)arg0 forAppearance:(NSInteger)arg1 ;
-(void)setUpReaderWebViewIfNeededAndPerformBlock:(id)arg0 ;
-(void)stopLoadingNextPage;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;


@end


#endif