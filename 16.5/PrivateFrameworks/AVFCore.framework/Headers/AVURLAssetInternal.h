// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVURLASSETINTERNAL_H
#define AVURLASSETINTERNAL_H

@class NSURL, NSArray, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVAssetInspectorLoader.h"
#import "AVAssetClientURLRequestHelper.h"
#import "AVAssetCustomURLBridgeForNSURLProtocol.h"
#import "AVAssetCustomURLAuthentication.h"
#import "AVAssetResourceLoader.h"
#import "AVDispatchOnce.h"
#import "AVAssetCache.h"
#import "AVWeakReference.h"

@interface AVURLAssetInternal : NSObject {
    AVAssetInspectorLoader *loader;
    AVAssetClientURLRequestHelper *URLRequestHelper;
    AVAssetCustomURLBridgeForNSURLProtocol *customURLBridgeForNSURLProtocol;
    AVAssetCustomURLAuthentication *customURLAuthenticationUsingKeychain;
    NSURL *URL;
    NSArray *tracks;
    AVAssetResourceLoader *resourceLoader;
    AVDispatchOnce *makeOneResourceLoaderOnly;
    AVAssetCache *assetCache;
    AVDispatchOnce *makeOneAssetDownloadCacheOnly;
    NSObject<OS_dispatch_queue> *tracksAccessQueue;
    NSDictionary *initializationOptions;
    BOOL hasInstanceIdentifierMapping;
    BOOL requiresSecurityScopeRelease;
    AVWeakReference *sessionReference;
}






@end


#endif