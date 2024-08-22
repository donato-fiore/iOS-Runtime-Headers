// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETDOWNLOADURLSESSION_H
#define AVASSETDOWNLOADURLSESSION_H



#import "NSURLSession.h"

@interface AVAssetDownloadURLSession : NSURLSession



+(id)sessionWithConfiguration:(id)arg0 assetDownloadDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(id)aggregateAssetDownloadTaskWithURLAsset:(id)arg0 mediaSelections:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 ;
-(id)assetDownloadTaskWithConfiguration:(id)arg0 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg0 assetTitle:(id)arg1 assetArtworkData:(id)arg2 options:(id)arg3 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg0 destinationURL:(id)arg1 options:(id)arg2 ;


@end


#endif