// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETDOWNLOADSESSION_H
#define AVASSETDOWNLOADSESSION_H

@class NSURL, NSError, NSArray;

#import <Foundation/Foundation.h>

#import "AVAssetDownloadSessionInternal.h"
#import "AVMediaSelection.h"

@interface AVAssetDownloadSession : NSObject {
    AVAssetDownloadSessionInternal *_internal;
}


@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSUInteger availableFileSize;
@property (readonly, nonatomic) NSUInteger countOfBytesReceived;
@property (readonly, nonatomic) NSURL *destinationURL;
@property (readonly, nonatomic) NSUInteger downloadToken;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSUInteger fileSize;
@property (readonly, nonatomic) NSArray *loadedTimeRanges;
@property (readonly, nonatomic) NSInteger priority;
@property (readonly, nonatomic) AVMediaSelection *resolvedMediaSelection;
@property (readonly, nonatomic) NSInteger status;


+(id)assetDownloadSessionWithAsset:(id)arg0 destinationURL:(id)arg1 options:(id)arg2 ;
+(id)assetDownloadSessionWithAsset:(id)arg0 mediaSelections:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
+(id)assetDownloadSessionWithDownloadToken:(NSUInteger)arg0 ;
+(id)assetDownloadSessionWithURL:(id)arg0 destinationURL:(id)arg1 options:(id)arg2 ;
+(void)registerDownloadLocation:(id)arg0 forURLAsset:(id)arg1 ;
-(BOOL)startProgressTimerOnQueueWithError:(*id)arg0 ;
-(id)_common_init;
-(id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg0 key:(struct __CFString *)arg1 ;
-(id)_errorFromAssetNotificationPayload:(id)arg0 ;
-(id)_figAssetNotificationNames;
-(id)_figPlaybackItemNotificationNames;
-(id)_setupFigClientObjectForFileDownload:(id)arg0 ;
-(id)_setupFigClientObjectForStreaming:(id)arg0 ;
-(id)_startOnQueue;
-(id)_startOnQueueFirstTime;
-(id)_verifyDownloadConfigurationForAssetType;
-(id)_weakReference;
-(id)init;
-(id)initWithAsset:(id)arg0 mediaSelections:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)initWithDownloadToken:(NSUInteger)arg0 ;
-(id)initWithURL:(id)arg0 destinationURL:(id)arg1 options:(id)arg2 ;
-(int)_primeCache;
-(int)_readyForInspection;
-(int)_setFileFigAsset:(struct OpaqueFigAsset *)arg0 ;
-(struct OpaqueFigAsset *)_createDuplicateFigAssetFromAVAsset:(id)arg0 ;
-(struct OpaqueFigAsset *)_figAsset;
-(struct OpaqueFigPlaybackItem *)_playbackItem;
-(void)_addFigAssetListeners;
-(void)_addFigPlaybackItemListeners;
-(void)_downloadFailureCallbackWithError:(id)arg0 ;
-(void)_downloadSuccessCallback;
-(void)_primeCacheOnDispatchQueue;
-(void)_removeFigAssetListeners;
-(void)_removeFigPlaybackItemListeners;
-(void)_sendDidFinishDownloadForMediaSelectionWithMediaSelection:(id)arg0 ;
-(void)_sendDidResolveMediaSelectionWithMediaSelection:(id)arg0 ;
-(void)_sendDownloadFailureToDelegateWithError:(id)arg0 ;
-(void)_sendDownloadSuccessToDelegate;
-(void)_sendLoadedTimeRangesChangedToDelegateWithNewlyLoadedTimeRange:(id)arg0 currentLoadedTimeRanges:(id)arg1 timeRangeExpectedToLoad:(id)arg2 selectedMediaArray:(id)arg3 ;
-(void)_sendProgessUpdateWithExpectedBytesToDownload:(NSUInteger)arg0 bytesDownloaded:(NSUInteger)arg1 ;
-(void)_sendWillDownloadVariants:(id)arg0 ;
-(void)_setupFigClientObjectAsync:(id)arg0 ;
-(void)_startLoadingMetadataOnQueue;
-(void)_transitionToTerminalStatus:(NSInteger)arg0 error:(id)arg1 ;
-(void)cancelAndReleaseProgressTimerOnQueue;
-(void)dealloc;
-(void)pause;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;
-(void)start;
-(void)startLoadingMetadata;
-(void)stop;


@end


#endif