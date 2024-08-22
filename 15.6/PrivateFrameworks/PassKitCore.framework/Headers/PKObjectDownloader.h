// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKOBJECTDOWNLOADER_H
#define PKOBJECTDOWNLOADER_H

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSURLSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKObjectDownloader : NSObject {
    NSMutableDictionary *_downloads;
    NSMutableOrderedSet *_pendingURLs;
    NSMutableSet *_downloadingURLs;
    NSObject<OS_dispatch_queue> *_queue;
}


@property NSInteger concurrentRequests; // ivar: _concurrentRequests
@property (retain) NSURLSession *session; // ivar: _session


+(id)sharedImageAssetDownloader;
-(id)_logStringFromCachedResponse:(id)arg0 data:(id)arg1 ;
-(id)_logStringFromRequest:(id)arg0 ;
-(id)_logStringFromResponse:(id)arg0 data:(id)arg1 ;
-(id)cachedDataForURL:(id)arg0 ;
-(id)init;
-(id)initWithSession:(id)arg0 ;
-(void)_handleResponseForURL:(id)arg0 data:(id)arg1 response:(id)arg2 error:(id)arg3 ;
-(void)_scheduleDownload:(id)arg0 forURL:(id)arg1 ;
-(void)_schedulePendingDownloads;
-(void)downloadFromUrl:(id)arg0 completionHandler:(id)arg1 ;
-(void)downloadWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;


@end


#endif