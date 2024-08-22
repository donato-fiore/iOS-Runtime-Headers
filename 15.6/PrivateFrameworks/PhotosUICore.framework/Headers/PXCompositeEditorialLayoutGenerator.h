// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCOMPOSITEEDITORIALLAYOUTGENERATOR_H
#define PXCOMPOSITEEDITORIALLAYOUTGENERATOR_H

@class NSDictionary;


#import "PXLayoutGenerator.h"
#import "PXCompositeEditorialLayoutMetrics.h"

@interface PXCompositeEditorialLayoutGenerator : PXLayoutGenerator {
    *_PXLayoutGeometry _geometries;
    NSUInteger _geometriesCount;
    *CGFloat _layoutItemWeights;
    NSUInteger _layoutItemWeightsCount;
    CGSize _contentSize;
    BOOL _isPrepared;
    NSDictionary *_templatesByTileCount;
    NSInteger _minTemplateItemCount;
    NSInteger _maxTemplateItemCount;
    NSInteger _minNumberOfColumns;
}


@property (copy, nonatomic) PXCompositeEditorialLayoutMetrics *metrics;


-(id)_layoutInputsInRange:(struct _NSRange )arg0 ;
-(id)_minCostingTemplateAmongTemplates:(id)arg0 forFittingInputItems:(id)arg1 inRange:(struct _NSRange )arg2 minCost:(*CGFloat)arg3 ;
-(id)initWithMetrics:(id)arg0 ;
-(struct CGSize )estimatedSize;
-(struct CGSize )size;
-(struct _PXLayoutGeometry )_geometryFromFrame:(struct CGRect )arg0 index:(NSUInteger)arg1 ;
-(void)_computeTemplatesByTileCountIfNeeded;
-(void)_enumerateTemplatesWithBlock:(id)arg0 ;
-(void)_normalizeWeightsForInputItems:(id)arg0 ;
-(void)_prepareGeometriesBufferForCount:(NSUInteger)arg0 ;
-(void)_prepareIfNeeded;
-(void)_prepareLayoutItemWeightsBufferForCount:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 withKind:(NSInteger)arg2 ;
-(void)invalidate;


@end


#endif