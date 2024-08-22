// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOMAPDATASUBSCRIPTIONDOWNLOADSTATE_H
#define _GEOMAPDATASUBSCRIPTIONDOWNLOADSTATE_H

@class NSProgress, NSError;

#import <Foundation/Foundation.h>

#import "GEOMapDataSubscriptionDownloader.h"
#import "GEOMapDataSubscriptionState.h"

@interface _GEOMapDataSubscriptionDownloadState : NSObject {
    os_unfair_lock_s _lock;
    BOOL _fullyLoadedForLatestVersions;
    BOOL _fullyLoadedForStaleVersions;
    NSUInteger _dataCount;
    NSUInteger _dataSize;
    NSProgress *_pendingProgress;
    NSError *_lastError;
    GEOMapDataSubscriptionDownloader *_downloader;
    GEOMapDataSubscriptionState *_externalState;
}




-(id)description;
-(id)init;


@end


#endif