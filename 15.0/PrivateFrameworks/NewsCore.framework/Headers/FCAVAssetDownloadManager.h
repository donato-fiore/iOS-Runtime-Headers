// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCAVASSETDOWNLOADMANAGER_H
#define FCAVASSETDOWNLOADMANAGER_H

@class NFLazy, NSString;
@protocol AVAssetDownloadDelegate, FCAVAssetCacheType, FCAVAssetKeyCacheType;

#import <Foundation/Foundation.h>

#import "FCAsyncOnceOperation.h"
#import "FCThreadSafeMutableDictionary.h"

@interface FCAVAssetDownloadManager : NSObject <AVAssetDownloadDelegate>

 {
    id<FCAVAssetCacheType> *_assetCache;
    id<FCAVAssetKeyCacheType> *_keyCache;
    FCAsyncOnceOperation *_restoreBackgroundDownloadsOnce;
    NFLazy *_URLSession;
    FCThreadSafeMutableDictionary *_activeDownloadsByAssetID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_restoreBackgroundDownloadsWithCompletionHandler:(id)arg0 ;
-(id)init;
-(void)URLSession:(id)arg0 assetDownloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;


@end


#endif