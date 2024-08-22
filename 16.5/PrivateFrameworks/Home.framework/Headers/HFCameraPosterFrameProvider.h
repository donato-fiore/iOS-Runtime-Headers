// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCAMERAPOSTERFRAMEPROVIDER_H
#define HFCAMERAPOSTERFRAMEPROVIDER_H

@protocol HFCameraTimelapseVideoDownloaderDelegate, HFCameraTimelapsePosterFrameGeneratorDelegate, OS_dispatch_queue, HFCameraTimelapseClipInfoProvider;

#import <Foundation/Foundation.h>

#import "HFCameraImageCache.h"
#import "HFCameraTimelapsePosterFrameGenerator.h"
#import "HFCameraPosterFrameRequests.h"

@interface HFCameraPosterFrameProvider : NSObject <HFCameraTimelapseVideoDownloaderDelegate, HFCameraTimelapsePosterFrameGeneratorDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bookkeepingQueue; // ivar: _bookkeepingQueue
@property (weak, nonatomic) HFCameraImageCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) HFCameraTimelapsePosterFrameGenerator *posterFrameGenerator; // ivar: _posterFrameGenerator
@property (retain, nonatomic) HFCameraPosterFrameRequests *posterFrameRequests; // ivar: _posterFrameRequests
@property (nonatomic) CGSize posterFrameSize; // ivar: _posterFrameSize
@property (weak, nonatomic) NSObject<HFCameraTimelapseClipInfoProvider> *timelapseClipInfoProvider; // ivar: _timelapseClipInfoProvider


-(id)_timelapseClipForHighQualityClip:(id)arg0 ;
-(id)initWithImageCache:(id)arg0 andTimelapseClipInfoProvider:(id)arg1 ;
-(void)_checkImageCacheForDelegate:(id)arg0 forHighQualityClip:(id)arg1 atOffset:(CGFloat)arg2 ;
-(void)_generateImageForDelegate:(id)arg0 forHighQualityClip:(id)arg1 atOffset:(CGFloat)arg2 ;
-(void)_requestTimelapseFileForDelegate:(id)arg0 forHighQualityClip:(id)arg1 atOffset:(CGFloat)arg2 ;
-(void)_requestTimelapsePosterFrameGenerationForTimelapseClip:(id)arg0 ;
-(void)_updateDelegate:(id)arg0 withPosterFrame:(id)arg1 atOffset:(CGFloat)arg2 ForHighQualityClip:(id)arg3 ;
-(void)didDownloadVideoFileForTimelapseClip:(id)arg0 atLocation:(id)arg1 ;
-(void)didGeneratePosterFrame:(id)arg0 forHighQualityClip:(id)arg1 atOffset:(CGFloat)arg2 withTimelapseOffset:(CGFloat)arg3 ;
-(void)failedToDownloadVideoFileForTimelapseClip:(id)arg0 ;
-(void)failedToFindTimelapseClipForHighQualityClip:(id)arg0 ;
-(void)failedToGeneratePosterFrameForHighQualityClip:(id)arg0 atOffset:(CGFloat)arg1 ;
-(void)foundVideoFileForTimelapseClip:(id)arg0 atLocation:(id)arg1 ;
-(void)getPosterFrameForDelegate:(id)arg0 forHighQualityClip:(id)arg1 atOffset:(CGFloat)arg2 ;


@end


#endif