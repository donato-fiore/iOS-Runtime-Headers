// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETRESOURCELOADINGREQUEST_H
#define AVASSETRESOURCELOADINGREQUEST_H

@class NSString, NSURLRequest, NSURLResponse;
@protocol AVAssetResourceLoaderRequest;

#import <Foundation/Foundation.h>

#import "AVAssetResourceLoadingRequestInternal.h"
#import "AVAssetResourceLoadingContentInformationRequest.h"
#import "AVAssetResourceLoadingDataRequest.h"
#import "AVAssetResourceLoadingRequestor.h"

@interface AVAssetResourceLoadingRequest : NSObject <AVAssetResourceLoaderRequest>

 {
    AVAssetResourceLoadingRequestInternal *_loadingRequest;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
@property (readonly, nonatomic) AVAssetResourceLoadingDataRequest *dataRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURLRequest *redirect;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) AVAssetResourceLoadingRequestor *requestor;
@property (copy, nonatomic) NSURLResponse *response;
@property (readonly) Class superclass;


+(SEL)_selectorForInformingDelegateOfCancellationByFig;
-(BOOL)_canSetOrUseCachedContentInformation;
-(BOOL)_contentKeySessionIsAttached;
-(BOOL)_isRequestForContentKey;
-(BOOL)_shouldInformDelegateOfFigCancellation;
-(BOOL)_tryToMarkAsCancelled;
-(BOOL)finished;
-(id)_getAndClearCachedData;
-(id)_resourceLoader;
-(id)_weakReference;
-(id)init;
-(id)initWithResourceLoader:(id)arg0 URL:(id)arg1 httpRequestHeaders:(id)arg2 requestOffset:(id)arg3 requestLength:(id)arg4 allowedContentTypes:(id)arg5 figCryptor:(struct OpaqueFigCPECryptor *)arg6 cryptorKeyRequestID:(NSUInteger)arg7 ;
-(id)initWithResourceLoader:(id)arg0 requestInfo:(struct __CFDictionary *)arg1 requestID:(NSUInteger)arg2 ;
-(id)keyRequestDataUsingCryptorForApp:(id)arg0 contentIdentifier:(id)arg1 options:(id)arg2 performAsync:(BOOL)arg3 error:(*id)arg4 ;
-(id)persistentContentKeyFromKeyVendorResponse:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)serializableRepresentation;
-(id)streamingContentKeyRequestDataForApp:(id)arg0 contentIdentifier:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(struct OpaqueFigCustomURLHandler *)_contentKeySessionCustomURLHandler;
-(struct OpaqueFigCustomURLHandler *)_customURLHandler;
-(struct OpaqueFigCustomURLLoader *)_customURLLoader;
-(void)_appendToCachedData:(id)arg0 ;
-(void)_cacheContentInformation:(id)arg0 ;
-(void)_ensureResponseInfoSentToCustomURLHandler;
-(void)_performCancellationByClient;
-(void)_sendDataToCustomURLHandler:(id)arg0 ;
-(void)_sendFinishLoadingToCustomURLHandler;
-(void)_sendFinishLoadingToCustomURLHandlerWithError:(id)arg0 ;
-(void)_sendResponseInfoToCustomURLHandler;
-(void)dealloc;
-(void)finishLoading;
-(void)finishLoadingWithError:(id)arg0 ;
-(void)finishLoadingWithResponse:(id)arg0 data:(id)arg1 redirect:(id)arg2 ;
-(void)forwardRequestToContentKeySession;
-(void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg0 contentIdentifier:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif