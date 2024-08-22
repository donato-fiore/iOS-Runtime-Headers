// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYGRIDTIMELINE_H
#define PXSTORYGRIDTIMELINE_H



#import "PXStoryDerivedTimeline.h"
#import "PXCArrayStore.h"
#import "PXExploreLayoutGenerator.h"

@interface PXStoryGridTimeline : PXStoryDerivedTimeline {
    *NSInteger _assetClipIdentifiers;
    *_PXLayoutGeometry _assetClipGeometries;
    NSInteger _numberOfAssetClips;
    PXCArrayStore *_rectsStore;
    CGSize _size;
}


@property (readonly, nonatomic) PXExploreLayoutGenerator *layoutGenerator; // ivar: _layoutGenerator


-(id)initWithOriginalTimeline:(id)arg0 ;
-(id)initWithOriginalTimeline:(id)arg0 layoutSpec:(id)arg1 viewportSize:(struct CGSize )arg2 ;
-(struct CGRect )frameForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct CGSize )size;
-(void)dealloc;
-(void)enumerateClipsInTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 usingBlock:(id)arg2 ;


@end


#endif