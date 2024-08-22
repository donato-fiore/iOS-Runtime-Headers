// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETRESOURCELOADINGREQUESTINTERNAL_H
#define AVASSETRESOURCELOADINGREQUESTINTERNAL_H

@class NSMutableURLRequest, NSURLResponse, NSURLRequest, NSMutableData, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVDispatchOnce.h"
#import "AVAssetResourceLoadingContentInformationRequest.h"
#import "AVAssetResourceLoadingDataRequest.h"
#import "AVAssetResourceLoadingRequestor.h"

@interface AVAssetResourceLoadingRequestInternal : NSObject {
    AVWeakReference *weakReference;
    AVWeakReference *weakReferenceToResourceLoader;
    *OpaqueFigCustomURLLoader customURLLoader;
    *OpaqueFigCustomURLHandler customURLHandler;
    *__CFDictionary requestInfo;
    NSUInteger requestID;
    AVDispatchOnce *responseInfoSentOnceToken;
    NSMutableURLRequest *URLRequest;
    NSURLResponse *response;
    NSURLRequest *redirect;
    NSObject<OS_dispatch_queue> *dataCachingQueue;
    NSMutableData *cachedData;
    NSDictionary *cachedContentInformation;
    AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
    AVAssetResourceLoadingDataRequest *dataRequest;
    int finished;
    int cancelled;
    int sentContentInfo;
    id *streamingKeyRequestCompletionHandler;
    *OpaqueFigCPECryptor figCryptor;
    AVAssetResourceLoadingRequestor *requestor;
    NSUInteger cryptorKeyRequestID;
}






@end


#endif