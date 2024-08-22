// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFSLOWMOTIONUTILITIES_H
#define PFSLOWMOTIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface PFSlowMotionUtilities : NSObject



+(BOOL)_isValidSlowMotionRate:(float)arg0 ;
+(BOOL)_isValidSlowMotionTimeRange:(struct ? )arg0 ;
+(BOOL)_scaleComposition:(id)arg0 baseDuration:(CGFloat)arg1 slowMotionRate:(float)arg2 slowMotionRegions:(id)arg3 forExport:(BOOL)arg4 outTimeRangeMapper:(*id)arg5 ;
+(CGFloat)_scaleWithinComposition:(id)arg0 fromCursor:(CGFloat)arg1 timeStep:(CGFloat)arg2 rate:(float)arg3 timeRangeMapper:(id)arg4 ;
+(id)_scaledCompositionForAsset:(id)arg0 slowMotionRate:(float)arg1 slowMotionTimeRange:(struct ? )arg2 forExport:(BOOL)arg3 outTimeRangeMapper:(*id)arg4 ;
+(id)_setVolume:(float)arg0 forSlowMotionRegionsInTrack:(id)arg1 timeRangeMapper:(id)arg2 ;
+(id)_slowMotionRegionsFromSlowMotionTimeRange:(struct ? )arg0 ;
+(id)assetFromVideoAsset:(id)arg0 slowMotionRate:(float)arg1 slowMotionTimeRange:(struct ? )arg2 forExport:(BOOL)arg3 outAudioMix:(*id)arg4 outTimeRangeMapper:(*id)arg5 ;
+(id)audioMixForScaledComposition:(id)arg0 timeRangeMapper:(id)arg1 ;
+(id)exportPresetForAsset:(id)arg0 preferredPreset:(id)arg1 ;
+(id)sharedConfiguration;
+(id)slowMotionSourceAssetPropertyKeys;
+(id)timeRangeMapperForSourceDuration:(CGFloat)arg0 slowMotionRate:(float)arg1 slowMotionTimeRange:(struct ? )arg2 forExport:(BOOL)arg3 ;
+(int)preferredTimeScale;
+(struct ? )_timeRangeFromTime:(float)arg0 toTime:(float)arg1 ;
+(struct ? )adjustTimeRange:(struct ? )arg0 forNewStartTime:(struct ? )arg1 endTime:(struct ? )arg2 ;
+(void)configureExportSession:(id)arg0 forcePreciseConversion:(BOOL)arg1 ;


@end


#endif