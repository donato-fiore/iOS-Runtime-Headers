// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCFBACKGROUNDAVASSETDOWNLOADTASK_H
#define __NSCFBACKGROUNDAVASSETDOWNLOADTASK_H

@class NSCFBackgroundSessionTask, NSProgress, NSURL, NSString, NSData, AVMediaSelection, AVURLAsset, NSArray, NSDictionary;



@interface __NSCFBackgroundAVAssetDownloadTask : NSCFBackgroundSessionTask {
    NSUInteger _downloadToken;
    os_unfair_lock_s _progressLock;
    BOOL _didCleanupProgress;
    BOOL _enableSPIDelegateCallbacks;
    NSProgress *_progress;
    NSURL *_temporaryDestinationURL;
    NSString *_assetTitle;
    NSData *_assetArtworkData;
    AVMediaSelection *_resolvedMediaSelection;
}


@property NSUInteger AVAssetDownloadToken; // ivar: _AVAssetDownloadToken
@property (copy) NSURL *URL; // ivar: _URL
@property (retain) AVURLAsset *URLAsset; // ivar: _URLAsset
@property (copy) NSURL *destinationURL; // ivar: _destinationURL
@property (copy) NSArray *loadedTimeRanges; // ivar: _loadedTimeRanges
@property (copy) NSDictionary *options; // ivar: _options


-(BOOL)_isAVAssetTask;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)currentRequest;
-(id)initWithTaskGroup:(id)arg0 URLAsset:(id)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 ident:(NSUInteger)arg7 enableSPIDelegateCallbacks:(BOOL)arg8 ;
-(id)initWithTaskInfo:(id)arg0 taskGroup:(id)arg1 ident:(NSUInteger)arg2 ;
-(id)originalRequest;
-(id)progress;
-(id)response;
-(void)_finishProgressReporting;
-(void)_onqueue_didFinishDownloadforMediaSelectionPropertyList:(id)arg0 ;
-(void)_onqueue_didFinishDownloadingToURL:(id)arg0 ;
-(void)_onqueue_didFinishWithError:(id)arg0 ;
-(void)_onqueue_didLoadTimeRange:(id)arg0 totalTimeRangesLoaded:(id)arg1 timeRangeExpectedToLoad:(id)arg2 forMediaSelectionPropertyList:(id)arg3 ;
-(void)_onqueue_didReceiveProgressUpdateWithTotalBytesWritten:(NSInteger)arg0 totalBytesExpectedToWrite:(NSInteger)arg1 ;
-(void)_onqueue_didResolveMediaSelectionPropertyList:(id)arg0 ;
-(void)_onqueue_willDownloadToURL:(id)arg0 ;
-(void)_onqueue_willDownloadVariants:(id)arg0 ;
-(void)dealloc;


@end


#endif