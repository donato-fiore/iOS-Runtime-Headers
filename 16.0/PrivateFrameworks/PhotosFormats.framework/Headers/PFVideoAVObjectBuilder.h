// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFVIDEOAVOBJECTBUILDER_H
#define PFVIDEOAVOBJECTBUILDER_H

@class AVAsset, AVAudioMix, AVVideoComposition;

#import <Foundation/Foundation.h>

#import "PFSlowMotionTimeRangeMapper.h"
#import "PFVideoAdjustments.h"

@interface PFVideoAVObjectBuilder : NSObject

@property (readonly, nonatomic) AVAsset *_finalAsset; // ivar: __finalAsset
@property (readonly, nonatomic) AVAudioMix *_finalAudioMix; // ivar: __finalAudioMix
@property (readonly, nonatomic) AVVideoComposition *_finalVideoComposition; // ivar: __finalVideoComposition
@property (readonly, nonatomic) PFSlowMotionTimeRangeMapper *_timeRangeMapperForExport; // ivar: __timeRangeMapperForExport
@property (readonly, nonatomic) PFSlowMotionTimeRangeMapper *_timeRangeMapperForPlayback; // ivar: __timeRangeMapperForPlayback
@property (nonatomic) ? timeRange; // ivar: _timeRange
@property (readonly, nonatomic) PFVideoAdjustments *videoAdjustments; // ivar: _videoAdjustments
@property (readonly, nonatomic) AVAsset *videoAsset; // ivar: _videoAsset


-(id)_getOrCreateTimeRangeMapperForExport:(BOOL)arg0 ;
-(id)_trimAssetIfNecessary:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithAsset:(id)arg0 audioMix:(id)arg1 videoComposition:(id)arg2 ;
-(id)initWithVideoAsset:(id)arg0 videoAdjustments:(id)arg1 ;
-(struct ? )convertToOriginalTimeFromScaledTime:(struct ? )arg0 forExport:(BOOL)arg1 ;
-(struct ? )convertToScaledTimeFromOriginalTime:(struct ? )arg0 forExport:(BOOL)arg1 ;
-(struct ? )slowMotionRampInRangeForExport:(BOOL)arg0 ;
-(struct ? )slowMotionRampOutRangeForExport:(BOOL)arg0 ;
-(void)_synchronouslyLoadSlowMotionPropertiesFromAsset:(id)arg0 ;
-(void)requestAVAssetForExport:(BOOL)arg0 withResultHandler:(id)arg1 ;
-(void)requestAVAssetWithResultHandler:(id)arg0 ;
-(void)requestAsynchronousAVAssetWithResultHandler:(id)arg0 ;
-(void)requestAsynchronousExportSessionWithExportPreset:(id)arg0 resultHandler:(id)arg1 ;
-(void)requestAsynchronousPlayerItemWithResultHandler:(id)arg0 ;
-(void)requestExportSessionWithExportPreset:(id)arg0 resultHandler:(id)arg1 ;
-(void)requestPlayerItemWithResultHandler:(id)arg0 ;


@end


#endif