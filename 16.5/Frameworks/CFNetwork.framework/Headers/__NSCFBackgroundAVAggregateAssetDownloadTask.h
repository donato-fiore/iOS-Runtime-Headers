// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef __NSCFBACKGROUNDAVAGGREGATEASSETDOWNLOADTASK_H
#define __NSCFBACKGROUNDAVAGGREGATEASSETDOWNLOADTASK_H

@class NSCFBackgroundSessionTask, NSArray, NSString, NSData, NSDictionary, AVURLAsset;
@protocol AVAssetDownloadDelegate, AVAssetDownloadDelegatePrivate;


#import "NSURLSession.h"

@interface __NSCFBackgroundAVAggregateAssetDownloadTask : NSCFBackgroundSessionTask <AVAssetDownloadDelegate, AVAssetDownloadDelegatePrivate>

 {
    BOOL _sentWillDownloadToURL;
    BOOL _sentWillBeginDelayedRequest;
    NSUInteger _AVAssetDownloadToken;
    NSArray *_mediaSelections;
    NSString *_assetTitle;
    NSData *_assetArtworkData;
    NSDictionary *_options;
    NSString *_childAssetDownloadTasksSessionIdentifier;
    NSURLSession *_childAssetDownloadSession;
    NSArray *_childAssetDownloadTasks;
}


@property (retain) AVURLAsset *URLAsset; // ivar: _URLAsset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isAVAssetTask;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)currentRequest;
-(id)initWithTaskInfo:(id)arg0 taskGroup:(id)arg1 ident:(NSUInteger)arg2 ;
-(id)originalRequest;
-(id)response;
-(void)URLSession:(id)arg0 assetDownloadTask:(id)arg1 didLoadTimeRange:(struct ? )arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(struct ? )arg4 ;
-(void)URLSession:(id)arg0 assetDownloadTask:(id)arg1 willDownloadToURL:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(id)arg3 ;
-(void)_onqueue_cancel;
-(void)_onqueue_resume;
-(void)_onqueue_suspend;
-(void)dealloc;


@end


#endif