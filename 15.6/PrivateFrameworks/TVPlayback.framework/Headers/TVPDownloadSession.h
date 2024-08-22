// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPDOWNLOADSESSION_H
#define TVPDOWNLOADSESSION_H

@class NSString, AVAssetDownloadURLSession, NSMutableDictionary;
@protocol AVAssetDownloadDelegate, TVPDownloadSessionDelegate;

#import <Foundation/Foundation.h>


@interface TVPDownloadSession : NSObject <AVAssetDownloadDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TVPDownloadSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVAssetDownloadURLSession *downloadSession; // ivar: _downloadSession
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *taskIDsToDownloads; // ivar: _taskIDsToDownloads


+(id)sharedInstance;
-(id)aggregateAssetDownloadTaskWithURLAsset:(id)arg0 mediaSelections:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 ;
-(id)downloadForMediaItem:(id)arg0 ;
-(id)init;
-(void)URLSession:(id)arg0 aggregateAssetDownloadTask:(id)arg1 didCompleteForMediaSelection:(id)arg2 ;
-(void)URLSession:(id)arg0 aggregateAssetDownloadTask:(id)arg1 didLoadTimeRange:(struct ? )arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(struct ? )arg4 forMediaSelection:(id)arg5 ;
-(void)URLSession:(id)arg0 aggregateAssetDownloadTask:(id)arg1 willDownloadToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0 ;
-(void)initializeWithDownloadingMediaItems:(id)arg0 ;
-(void)registerDownloadTask:(id)arg0 forDownload:(id)arg1 ;
-(void)unregisterDownloadTaskForDownload:(id)arg0 ;


@end


#endif