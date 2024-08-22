// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYMUTABLECONCRETETIMELINE_H
#define PXSTORYMUTABLECONCRETETIMELINE_H



#import "PXStoryConcreteTimeline.h"

@interface PXStoryMutableConcreteTimeline : PXStoryConcreteTimeline {
    NSInteger _bufferCapacity;
    *NSInteger _playbackStyles;
    *? _assetContentInfos;
    *UIEdgeInsets _safeAreaInsets;
    *? _clippingAnimationInfos;
    *? _kenBurnsAnimationInfos;
    *? _transitionInfos;
    *? _audioInfos;
    *NSUInteger _clipOptions;
}




-(NSInteger)_appendSegmentFromTimeline:(id)arg0 withIdentifier:(NSInteger)arg1 ;
-(NSInteger)addClipWithTimeRange:(struct ? )arg0 frame:(struct CGRect )arg1 info:(struct ? )arg2 resourceIndex:(NSInteger)arg3 ;
-(NSInteger)addSegmentWithTimeRange:(struct ? )arg0 info:(struct ? )arg1 ;
-(NSInteger)appendSegmentWithDurationInfo:(struct ? )arg0 clipCount:(NSInteger)arg1 compositionInfo:(struct ? )arg2 configuration:(id)arg3 ;
-(NSInteger)insertClipInTimeRange:(struct ? )arg0 resourceKind:(NSInteger)arg1 options:(NSUInteger)arg2 resourceIndex:(NSInteger)arg3 frame:(struct CGRect )arg4 transitionInfo:(struct ? )arg5 kenBurnsAnimationInfo:(struct ? )arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)appendTimeRange:(struct ? )arg0 fromTimeline:(id)arg1 ;
-(void)appendTimeline:(id)arg0 ;
-(void)dealloc;
-(void)removeAllClipsAndSegments;
-(void)setStartTime:(struct ? )arg0 ;
-(void)setTimeline:(id)arg0 ;


@end


#endif