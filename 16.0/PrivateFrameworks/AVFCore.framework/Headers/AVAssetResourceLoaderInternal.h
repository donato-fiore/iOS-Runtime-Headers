// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETRESOURCELOADERINTERNAL_H
#define AVASSETRESOURCELOADERINTERNAL_H

@class NSMutableDictionary, NSURLSession, NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVAssetClientURLRequestHelper.h"
#import "AVWeakReference.h"
#import "AVAssetCustomURLBridgeForNSURLSession.h"

@interface AVAssetResourceLoaderInternal : NSObject {
    AVAssetClientURLRequestHelper *URLRequestHelper;
    AVWeakReference *weakReferenceToAsset;
    NSObject<OS_dispatch_queue> *stateQueue;
    AVWeakReference *weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    *OpaqueFigCustomURLLoader customURLLoader;
    *OpaqueFigCustomURLHandler customURLHandler;
    *OpaqueFigCustomURLHandler authHandler;
    *OpaqueFigCustomURLHandler contentKeySessionCustomURLHandler;
    *OpaqueFigXPCRemoteClient remoteHandlerXPCRemoteClient;
    int loadingCancelled;
    NSMutableDictionary *pendingRequests;
    NSObject<OS_dispatch_queue> *contentInformationCachingQueue;
    NSMutableDictionary *contentInformationCache;
    BOOL preloadsEligibleContentKeys;
    NSURLSession *URLSession;
    AVAssetCustomURLBridgeForNSURLSession *bridgeBetweenHandlerAndSession;
    NSOperationQueue *URLSessionOperationQueue;
}






@end


#endif