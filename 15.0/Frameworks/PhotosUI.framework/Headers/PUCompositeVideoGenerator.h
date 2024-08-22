// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCOMPOSITEVIDEOGENERATOR_H
#define PUCOMPOSITEVIDEOGENERATOR_H

@class PXObservable, AVAssetExportSession, NSError, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_group;


#import "PUMergedLivePhotosVideo.h"

@interface PUCompositeVideoGenerator : PXObservable {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSInteger _stateQueue_state;
    PUMergedLivePhotosVideo *_stateQueue_playbackVideo;
    AVAssetExportSession *_stateQueue_exportSession;
    NSError *_stateQueue_error;
    NSObject<OS_dispatch_group> *_videoAssetsByAssetGroup;
}


@property (readonly, copy, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) AVAssetExportSession *exportSession;
@property (readonly, nonatomic) BOOL onlyAllowOverlappingAssets; // ivar: _onlyAllowOverlappingAssets
@property (readonly, nonatomic) NSInteger outputType; // ivar: _outputType
@property (readonly, nonatomic) PUMergedLivePhotosVideo *playbackVideo;
@property (readonly, nonatomic) NSInteger state;


+(BOOL)canMergeAsset:(id)arg0 withConsecutiveAsset:(id)arg1 ;
+(struct ? )_overlapDurationBetweenAsset:(id)arg0 andAsset:(id)arg1 ;
+(struct ? )conformRange:(struct ? )arg0 inRange:(struct ? )arg1 ;
-(id)initWithAssets:(id)arg0 outputType:(NSInteger)arg1 onlyAllowOverlappingAssets:(BOOL)arg2 ;
-(id)mutableChangeObject;
-(void)_workQueue_finishWithError:(id)arg0 ;
-(void)_workQueue_finishWithExportSession:(id)arg0 error:(id)arg1 ;
-(void)_workQueue_finishWithPlaybackVideo:(id)arg0 error:(id)arg1 ;
-(void)_workQueue_generateVideoWithAVAssets:(id)arg0 ;
-(void)_workQueue_generateVideoWithSingleAssetPlayerItem:(id)arg0 ;
-(void)_workQueue_start;
-(void)start;


@end


#endif