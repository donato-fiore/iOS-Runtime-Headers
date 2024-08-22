// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYRESOURCESPRELOADINGSTATSSTORE_H
#define PXSTORYRESOURCESPRELOADINGSTATSSTORE_H


#import <Foundation/Foundation.h>


@interface PXStoryResourcesPreloadingStatsStore : NSObject {
    ? _imageClipsStats;
    ? _livePhotoClipsStats;
    ? _videoClipsStats;
}


@property (readonly, nonatomic) BOOL didDownloadFirstVideo;
@property (readonly, nonatomic) CGFloat estimatedLoadingTimeLeft;
@property (readonly, nonatomic) float loadedFraction;


-(void)_enumerateAllStats:(id)arg0 ;
-(void)_modifyStatsForPlaybackStyle:(NSInteger)arg0 withModifier:(id)arg1 ;
-(void)noteClipWithPlaybackStyle:(NSInteger)arg0 loadedWithLoadingTime:(CGFloat)arg1 ;
-(void)noteSessionStartedPreloadableClipsCounts:(struct ? )arg0 ;


@end


#endif