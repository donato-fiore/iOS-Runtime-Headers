// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVMOTIONEFFECTTIMELINECOMPONENT_H
#define PVMOTIONEFFECTTIMELINECOMPONENT_H

@protocol PVEffectTimeline;


#import "PVMotionEffectComponent.h"
#import "PVTimelineMarker.h"

@interface PVMotionEffectTimelineComponent : PVMotionEffectComponent <PVEffectTimeline>

 {
    unsigned int _numFrames;
    CGFloat _frameRate;
    ? _frameDuration;
    METimeRemap _timeRemap;
    PVTimelineMarker *_posterFrameMarker;
    ? _renderStartOffset;
    ? _loopTime;
    BOOL _loopTimeOverrideEnabled;
    ? _loopTimeOverride;
    *OZChannelBool _buildInEnableChan;
    *OZChannelBool _buildOutEnableChan;
    BOOL _needsToUpdateSceneDuration;
}


@property (nonatomic) BOOL forceDisableBuildAnimation;
@property (nonatomic) BOOL forceDisableLoop;
@property (nonatomic) ? loopTimeOverride;
@property (nonatomic) BOOL loopTimeOverrideEnabled;
@property (nonatomic) BOOL useLocalLoopTime;


-(BOOL)isForceRenderAtPosterFrameEnabled;
-(BOOL)isForceRenderAtPosterFrameEnabled:(id)arg0 ;
-(BOOL)motionEffect:(id)arg0 propertiesDisableCache:(id)arg1 time:(struct ? )arg2 forcePosterFrame:(BOOL)arg3 ;
-(BOOL)motionEffect:(id)arg0 shouldInvalidateCachedRenderForProperty:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 ;
-(CGFloat)timelineDurationInSeconds;
-(CGFloat)timelineDurationInSeconds_NoLock;
-(CGFloat)timelineFrameRate;
-(CGFloat)timelineFrameRate_NoLock;
-(id)initWithMotionEffect:(id)arg0 ;
-(id)motionEffectPropertyKeysThatInvalidateCachedRender:(id)arg0 ;
-(id)posterFrameMarker;
-(id)posterFrameMarker_NoLock:(*void)arg0 ;
-(id)timelineMarkers;
-(id)timelineMarkersOfType:(int)arg0 ;
-(id)timelineMarkersOfType_NoLock:(int)arg0 documentInfo:(*void)arg1 ;
-(id)timelineMarkers_NoLock:(*void)arg0 ;
-(struct ? )componentTimeFromTimelineTime:(struct ? )arg0 ;
-(struct ? )componentTimeFromTimelineTime_NoLock:(struct ? )arg0 documentInfo:(*void)arg1 ;
-(struct ? )componentTimeFromTimelineTime_NoLock:(struct ? )arg0 editRange:(struct ? )arg1 documentInfo:(*void)arg2 ;
-(struct ? )componentTimeRangeFromTimelineTimeRange:(struct ? )arg0 ;
-(struct ? )componentTimeRangeFromTimelineTimeRange_NoLock:(struct ? )arg0 documentInfo:(*void)arg1 ;
-(struct ? )componentTimeRangeFromTimelineTimeRange_NoLock:(struct ? )arg0 editRange:(struct ? )arg1 documentInfo:(*void)arg2 ;
-(struct ? )introDuration_NoLock;
-(struct ? )timelineDuration;
-(struct ? )timelineDuration_NoLock;
-(struct ? )timelineFrameDuration;
-(struct ? )timelineFrameDuration_NoLock;
-(struct ? )timelineLastFrame;
-(struct ? )timelineLastFrame_NoLock;
-(struct ? )timelineTimeFromComponentTime:(struct ? )arg0 ;
-(struct ? )timelineTimeFromComponentTime_NoLock:(struct ? )arg0 documentInfo:(*void)arg1 ;
-(struct ? )timelineTimeFromComponentTime_NoLock:(struct ? )arg0 editRange:(struct ? )arg1 documentInfo:(*void)arg2 ;
-(struct ? )timelineTimeFromComponentTime_NoLock:(struct ? )arg0 editRange:(struct ? )arg1 forcePosterFrame:(BOOL)arg2 documentInfo:(*void)arg3 ;
-(struct ? )timelineTimeFromComponentTime_NoLock:(struct ? )arg0 forcePosterFrame:(BOOL)arg1 documentInfo:(*void)arg2 ;
-(struct ? )timelineTimeRangeFromComponentTimeRange:(struct ? )arg0 ;
-(struct ? )timelineTimeRangeFromComponentTimeRange_NoLock:(struct ? )arg0 documentInfo:(*void)arg1 ;
-(struct ? )timelineTimeRangeFromComponentTimeRange_NoLock:(struct ? )arg0 editRange:(struct ? )arg1 documentInfo:(*void)arg2 ;
-(unsigned int)timelineDurationInFrames;
-(unsigned int)timelineDurationInFrames_NoLock;
-(void)applyProperties_NoLock:(id)arg0 defaultProperties:(id)arg1 documentInfo:(*void)arg2 ;
-(void)computeIntroOutroPoints_NoLock:(*void)arg0 ;
-(void)dealloc;
-(void)effect:(id)arg0 updateProperties:(id)arg1 allProperties:(id)arg2 ;
-(void)motionEffect:(id)arg0 didBecomeReady:(*void)arg1 properties:(id)arg2 ;
-(void)motionEffectDidUnload:(id)arg0 ;
-(void)setBuildInEnabled_NoLock:(BOOL)arg0 ;
-(void)setBuildOutEnabled_NoLock:(BOOL)arg0 ;
-(void)setNeedsToUpdateSceneDuration_NoLock;
-(void)setRenderStartOffset_NoLock:(struct ? )arg0 ;
-(void)updateSceneDuration_NoLock:(*void)arg0 ;


@end


#endif