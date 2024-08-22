// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPMETADATAPROVIDER_H
#define LPMETADATAPROVIDER_H

@class WKWebView, NSURLRequest, NSURL, NSTimer, BKSProcessAssertion, NSMutableArray, NSString;
@protocol WKNavigationDelegate, LPMetadataProviderSpecializationDelegate, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "LPEvent.h"
#import "LPLinkMetadata.h"
#import "LPFetcherGroup.h"
#import "LPAnimatedImageTranscoder.h"
#import "LPMetadataProviderSpecialization.h"

@interface LPMetadataProvider : NSObject <WKNavigationDelegate, LPMetadataProviderSpecializationDelegate>

 {
    unsigned int _loggingID;
    WKWebView *_webView;
    NSURLRequest *_URLRequest;
    NSURL *_originalURL;
    NSTimer *_watchdog;
    BKSProcessAssertion *_processAssertion;
    LPEvent *_mainResourceLoadEvent;
    LPEvent *_webProcessLaunchEvent;
    LPLinkMetadata *_metadata;
    BOOL _complete;
    BOOL _fetchingFromExistingWebView;
    BOOL _hasStartedFetching;
    BOOL _hasEverStartedFetchingMetadataFromWebView;
    BOOL _timedOut;
    BOOL _subresourceFetchIsNonAppInitiated;
    NSObject<OS_dispatch_group> *_subresourceFetchGroup;
    LPFetcherGroup *_iconFetcherGroup;
    LPAnimatedImageTranscoder *_imageTranscoder;
    NSMutableArray *_pendingFetchers;
    NSInteger _specializationState;
    LPMetadataProviderSpecialization *_specializedMetadataProvider;
}


@property (readonly, nonatomic) LPEvent *_event; // ivar: _event
@property (nonatomic, setter=_setShouldDownloadImageSubresources:) BOOL _shouldDownloadImageSubresources; // ivar: _shouldDownloadImageSubresources
@property (nonatomic, setter=_setShouldDownloadMediaSubresources:) BOOL _shouldDownloadMediaSubresources; // ivar: _shouldDownloadMediaSubresources
@property (nonatomic) NSUInteger allowedSpecializedProviders; // ivar: _allowedSpecializedProviders
@property BOOL cancelled; // ivar: _cancelled
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fetchSubresources;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldFetchSubresources; // ivar: _shouldFetchSubresources
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (nonatomic) BOOL useSpecializedProviders; // ivar: _useSpecializedProviders


+(id)_callbackQueue;
+(id)_copyDefaultWebViewConfiguration;
+(id)_defaultUserAgent;
+(id)_incompleteMetadataRequests;
+(id)_postProcessingQueue;
+(id)_requestMetadataForRequest:(id)arg0 completionHandler:(id)arg1 ;
+(id)requestMetadataForURL:(id)arg0 completionHandler:(id)arg1 ;
+(id)requestMetadataForWebView:(id)arg0 completionHandler:(id)arg1 ;
+(void)_requestSourceApplicationMetadataForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_switchToSpecializationIfPossibleForMIMEType:(id)arg0 URL:(id)arg1 hasLoadedResource:(BOOL)arg2 ;
-(BOOL)_switchToSpecializationIfPossibleForMetadata:(id)arg0 URL:(id)arg1 ;
-(BOOL)_switchToSpecializationIfPossibleForURL:(id)arg0 ;
-(id)_startFetchingMetadataForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)_startFetchingMetadataForURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)_startFetchingMetadataForWebView:(id)arg0 completionHandler:(id)arg1 ;
-(id)_startFetchingMetadataForWebView:(id)arg0 isNonAppInitiated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(id)init;
-(id)subresourceFetcherConfiguration;
-(void)_cancelDueToTimeout;
-(void)_completedWithError:(id)arg0 ;
-(void)_failedWithErrorCode:(NSInteger)arg0 underlyingError:(id)arg1 ;
-(void)_fetchAssociatedApplicationMetadataWithCompletionHandler:(id)arg0 ;
-(void)_fetchImplicitIcons;
-(void)_fetchMetadataFromWebView;
-(void)_fetchedMetadata:(id)arg0 ;
-(void)_generateSpecializationIfPossibleForCompleteMetadata:(id)arg0 URL:(id)arg1 completionHandler:(id)arg2 ;
-(void)_internalPostProcessResolvedMetadataWithCompletionHandler:(id)arg0 ;
-(void)_internalStartFetchingMetadataForWebView:(id)arg0 isNonAppInitiated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_internalStartFetchingMetadataFromURLRequest;
-(void)_postProcessResolvedMetadataWithCompletionHandler:(id)arg0 ;
-(void)_redistinguishImagesAndIcons;
-(void)_setMetadata:(id)arg0 onlyUpgradeFields:(BOOL)arg1 ;
-(void)_simplifyTitle;
-(void)_startFetchingSubresourcesForPartialMetadata:(id)arg0 isNonAppInitiated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_startWatchdogTimer;
-(void)_stopWatchdogTimer;
-(void)_willStartFetchingMetadata;
-(void)cancel;
-(void)dealloc;
-(void)metadataProviderSpecialization:(id)arg0 didCompleteWithMetadata:(id)arg1 ;
-(void)metadataProviderSpecialization:(id)arg0 didFetchPreliminaryMetadata:(id)arg1 ;
-(void)metadataProviderSpecializationDidFail:(id)arg0 ;
-(void)startFetchingMetadataForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)startFetchingMetadataForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)startFetchingMetadataForWebView:(id)arg0 completionHandler:(id)arg1 ;
-(void)startFetchingSubresourcesForPartialMetadata:(id)arg0 completionHandler:(id)arg1 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 didStartProvisionalNavigation:(id)arg1 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif