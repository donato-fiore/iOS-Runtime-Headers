// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFLEXMUSICLIBRARY_H
#define PXFLEXMUSICLIBRARY_H

@class NSCountedSet;
@protocol OS_dispatch_queue, PXFMSongLibrary;


#import "PXObservable.h"

@interface PXFlexMusicLibrary : PXObservable {
    NSObject<OS_dispatch_queue> *_queue;
    id<PXFMSongLibrary> *_queue_library;
    NSCountedSet *_queue_downloadingAssetsRequestCount;
}




+(id)_audioMixInputParametersForMixParameters:(id)arg0 audioTrack:(id)arg1 sampleRate:(int)arg2 ;
+(id)_mixParametersForAudioMixInputParameters:(id)arg0 sampleRate:(int)arg1 ;
+(id)coalesceAudioMixInputParametersA:(id)arg0 withAudioMixInputParametersB:(id)arg1 audioTrack:(id)arg2 ;
+(id)sharedLibrary;
-(BOOL)hasLocalResourceForAsset:(id)arg0 resourceType:(NSInteger)arg1 ;
-(CGFloat)downloadProgressForAsset:(id)arg0 resourceType:(NSInteger)arg1 ;
-(id)_fetchAssetsWithOptions:(id)arg0 ;
-(id)_queue_cueSourceFromRendition:(id)arg0 ;
-(id)_queue_downloadableAssetForAsset:(id)arg0 resourceType:(NSInteger)arg1 ;
-(id)_queue_fetchAssetsWithOptions:(id)arg0 ;
-(id)_queue_flexMusicAssetWithSong:(id)arg0 targetDuration:(struct ? )arg1 ;
-(id)_queue_renditionForSongID:(id)arg0 preferredDuration:(struct ? )arg1 ;
-(id)cuesForAsset:(id)arg0 ;
-(id)fetchAllAssets;
-(id)fetchAssetsWithIdentifiers:(id)arg0 ;
-(id)fetchLocalAssetForMood:(NSUInteger)arg0 ;
-(id)fetchSortedAssetsGroupedByMood;
-(id)init;
-(id)localURLForAsset:(id)arg0 resourceType:(NSInteger)arg1 ;
-(id)playableAssetForAsset:(id)arg0 preferredDuration:(struct ? )arg1 audioMix:(*id)arg2 peakValue:(*CGFloat)arg3 loudness:(*CGFloat)arg4 ;
-(id)requestAssetWithIdentifier:(id)arg0 preferredDuration:(struct ? )arg1 resultHandler:(id)arg2 ;
-(id)requestAssetsWithIdentifiers:(id)arg0 resultHandler:(id)arg1 ;
-(void)_handleDownloadProgressChangedNotification:(id)arg0 ;
-(void)_handleSongAssetsChangedNotification:(id)arg0 ;
-(void)cancelDownloadForAsset:(id)arg0 resourceType:(NSInteger)arg1 ;
-(void)dealloc;
-(void)requestDownloadForAsset:(id)arg0 resourceType:(NSInteger)arg1 ;


@end


#endif