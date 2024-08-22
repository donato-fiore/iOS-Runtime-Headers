// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMCAMERACLIPFETCHVIDEOASSETCONTEXTOPERATION_H
#define HMCAMERACLIPFETCHVIDEOASSETCONTEXTOPERATION_H

@class HMFOperation, NSURL;
@protocol HMCameraClipFetchAssetContextOperationDataSource;


#import "HMCameraClip.h"
#import "HMCameraClipManager.h"

@interface HMCameraClipFetchVideoAssetContextOperation : HMFOperation

@property (readonly) HMCameraClip *clip; // ivar: _clip
@property (copy) NSURL *clipDestinationFileURL; // ivar: _clipDestinationFileURL
@property (readonly) HMCameraClipManager *clipManager; // ivar: _clipManager
@property (readonly) NSObject<HMCameraClipFetchAssetContextOperationDataSource> *dataSource; // ivar: _dataSource
@property (copy) id *downloadProgressHandler; // ivar: _downloadProgressHandler
@property (copy) id *fetchVideoAssetContextCompletionBlock; // ivar: _fetchVideoAssetContextCompletionBlock
@property (copy) NSURL *hlsPlaylistDestinationFileURL; // ivar: _hlsPlaylistDestinationFileURL
@property _NSRange videoDataSegmentsRange; // ivar: _videoDataSegmentsRange


+(id)logCategory;
-(id)decryptData:(id)arg0 ;
-(id)description;
-(id)downloadVideoAsset:(id)arg0 ;
-(id)downloadVideoSegment:(id)arg0 forDataTask:(id)arg1 andAppendToOutputStream:(id)arg2 ;
-(id)fetchVideoAssetContext;
-(id)initWithClipManager:(id)arg0 clip:(id)arg1 ;
-(id)initWithClipManager:(id)arg0 clip:(id)arg1 dataSource:(id)arg2 ;
-(id)logIdentifier;
-(id)videoSegmentsToDownload;
-(id)writeHLSPlaylistForVideoAssetContext:(id)arg0 ;
-(void)cancelWithError:(id)arg0 ;
-(void)finishWithVideoAssetContext:(id)arg0 ;
-(void)main;
-(void)updateDownloadProgressToPercentageComplete:(NSUInteger)arg0 ;


@end


#endif