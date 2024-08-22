// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYTRANSFORMEDTIMELINE_H
#define PXSTORYTRANSFORMEDTIMELINE_H



#import "PXStoryDerivedTimeline.h"
#import "PXCArrayStore.h"

@interface PXStoryTransformedTimeline : PXStoryDerivedTimeline

@property (readonly, nonatomic) CGAffineTransform transform; // ivar: _transform
@property (readonly, nonatomic) PXCArrayStore *transformedClipInfosStore; // ivar: _transformedClipInfosStore
@property (readonly, nonatomic) PXCArrayStore *transformedRectsStore; // ivar: _transformedRectsStore


-(id)clipWithIdentifier:(NSInteger)arg0 ;
-(id)description;
-(id)initWithOriginalTimeline:(id)arg0 ;
-(id)initWithOriginalTimeline:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
-(struct CGRect )_untransformRect:(struct CGRect )arg0 ;
-(struct CGRect )frameForSegmentWithIdentifier:(NSInteger)arg0 ;
-(struct CGRect )transformedRectForOriginalClipInfo:(struct ? *)arg0 originalRect:(struct CGRect )arg1 ;
-(struct CGSize )originalSize;
-(struct CGSize )size;
-(void)_transformRects:(struct CGRect *)arg0 clipInfos:(struct ? *)arg1 count:(NSInteger)arg2 resultHandler:(id)arg3 ;
-(void)enumerateClipsInTimeRange:(struct ? )arg0 rect:(struct CGRect )arg1 usingBlock:(id)arg2 ;


@end


#endif