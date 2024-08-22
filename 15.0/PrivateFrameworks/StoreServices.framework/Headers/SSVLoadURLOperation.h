// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVLOADURLOPERATION_H
#define SSVLOADURLOPERATION_H

@class NSOperation, AKAppleIDSession, NSMutableData, NSData, NSMutableSet, NSURL, NSString, NSHTTPURLResponse, NSRunLoop, NSURLRequest, NSURLCache, NSCachedURLResponse, NSNumber;
@protocol SSURLSessionManagerDelegate, OS_dispatch_queue, SSVLoadURLOperationDelegate;


#import "SSVURLDataConsumer.h"
#import "SSMetricsPageEvent.h"
#import "SSVFairPlaySAPSession.h"
#import "SSVSAPSignaturePolicy.h"
#import "SSURLBag.h"
#import "SSVURLBagInterpreter.h"
#import "SSURLRequestProperties.h"
#import "SSBag.h"

@interface SSVLoadURLOperation : NSOperation <SSURLSessionManagerDelegate>

 {
    AKAppleIDSession *_authKitSession;
    NSMutableData *_dataBuffer;
    SSVURLDataConsumer *_dataConsumer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSData *_inputData;
    BOOL _iTunesStoreRequest;
    NSInteger _machineDataRetryCount;
    NSInteger _machineDataStyle;
    SSMetricsPageEvent *_metricsPageEvent;
    id *_outputBlock;
    id *_prepareRequestBlock;
    NSMutableSet *_protocolRedirectURLs;
    BOOL _recordsMetrics;
    NSURL *_redirectURL;
    NSString *_referrerApplicationName;
    NSString *_referrerURLString;
    NSHTTPURLResponse *_response;
    NSRunLoop *_runLoop;
    SSVFairPlaySAPSession *_sapSession;
    SSVSAPSignaturePolicy *_sapSignaturePolicy;
    BOOL _shouldRetry;
    NSString *_storeFrontSuffix;
    BOOL _stopped;
    SSURLBag *_urlBag;
    SSVURLBagInterpreter *_urlBagInterpreter;
    SSURLRequestProperties *_requestProperties;
    NSURLRequest *_urlRequest;
}


@property (getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (copy) SSVSAPSignaturePolicy *SAPSignaturePolicy;
@property (readonly) NSURL *URL;
@property (readonly, nonatomic) NSURLCache *URLCache;
@property (readonly, nonatomic) NSString *URLCacheID;
@property (readonly) NSURLRequest *URLRequest;
@property (readonly) NSHTTPURLResponse *URLResponse;
@property NSUInteger attribution; // ivar: _attribution
@property (retain, nonatomic) SSBag *bag; // ivar: _bag
@property (readonly) NSCachedURLResponse *cachedURLResponse;
@property (retain) SSVURLDataConsumer *dataConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SSVLoadURLOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy) id *expiredOutputBlock;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isURLBagRequest;
@property NSInteger machineDataStyle;
@property (copy) NSURL *mainDocumentURL; // ivar: _mainDocumentURL
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly) SSMetricsPageEvent *metricsPageEvent;
@property (copy) id *outputBlock;
@property (copy) id *prepareRequestBlock;
@property (readonly, nonatomic) NSData *rawResponseData;
@property BOOL recordsMetrics;
@property (copy) NSString *referrerApplicationName;
@property (copy) NSString *referrerURLString;
@property (readonly, nonatomic) SSURLRequestProperties *requestProperties;
@property (readonly, nonatomic) BOOL shouldDisableCellular;
@property (readonly, nonatomic) BOOL shouldRequireCellular;
@property (readonly, nonatomic) BOOL shouldSetCookies;
@property BOOL shouldSuppressCookies; // ivar: _shouldSuppressCookies
@property BOOL shouldSuppressUserInfo; // ivar: _shouldSuppressUserInfo
@property (readonly, nonatomic) NSData *sourceAppAuditTokenData;
@property (readonly, nonatomic) NSString *sourceAppBundleID;
@property (copy) NSString *storeFrontSuffix;
@property (readonly) Class superclass;


+(id)currentAcceptLanguage;
-(BOOL)_shouldRetryAfterMachineDataRequest:(id)arg0 ;
-(id)_dataForCachedResponse:(struct _CFCachedURLResponse *)arg0 ;
-(id)_newURLRequestWithRedirectURL:(id)arg0 ;
-(id)_outputForData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithData:(id)arg0 fromOperation:(id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURLRequest:(id)arg0 ;
-(id)initWithURLRequestProperties:(id)arg0 ;
-(int)_runRunLoopUntilStopped;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithEvent:(id)arg2 error:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_addMachineDataHeadersToRequest:(id)arg0 withAccountIdentifier:(id)arg1 ;
-(void)_addSAPSignatureToRequest:(id)arg0 ;
-(void)_applyResponseToMetrics:(id)arg0 ;
-(void)_configureWithURLBagInterpreter:(id)arg0 ;
-(void)_createAuthKitSession;
-(void)_finishWithData:(id)arg0 ;
-(void)_finishWithOutput:(id)arg0 error:(id)arg1 ;
-(void)_keepAliveTimer:(id)arg0 ;
-(void)_releaseOutputBlocks;
-(void)_runOnce;
-(void)_stopIfCancelled;
-(void)_stopRunLoop;
-(void)cancel;
-(void)configureWithURLBag:(id)arg0 ;
-(void)configureWithURLBagDictionary:(id)arg0 ;
-(void)dispatchAsync:(id)arg0 ;
-(void)dispatchSync:(id)arg0 ;
-(void)main;


@end


#endif