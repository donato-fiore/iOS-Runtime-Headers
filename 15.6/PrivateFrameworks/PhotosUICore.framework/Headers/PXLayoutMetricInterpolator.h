// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXLAYOUTMETRICINTERPOLATOR_H
#define PXLAYOUTMETRICINTERPOLATOR_H

@class NSValue, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PXLayoutMetricInterpolator : NSObject {
    ? _needsUpdateFlags;
}


@property (nonatomic, setter=_setCachedMetric:) CGFloat _cachedMetric; // ivar: __cachedMetric
@property (retain, nonatomic, setter=_setCachedValue:) NSValue *_cachedValue; // ivar: __cachedValue
@property (readonly, nonatomic) NSMutableArray *_referenceValuesByMetrics; // ivar: __referenceValuesByMetrics


+(NSInteger)photosGridSizeSubclassForScreenSize:(struct CGSize )arg0 ;
+(NSUInteger)photosGridLayoutColumnsForWidth:(CGFloat)arg0 ;
+(id)_gridItemWidthInterpolatorWithGridEdgeInsetsInterpolator:(id)arg0 ;
+(id)_sharedGridEdgeInsetsInterpolator;
+(id)_sharedGridItemWidthInterpolator;
+(id)albumsGridEdgeInsetsInterpolator;
+(id)albumsGridItemWidthInterpolator;
+(id)allLayoutMetricConfigurationSizes;
+(id)gadgetColumnSpacingSpanDoubleSetAInterpolator;
+(id)gadgetColumnSpacingSpanDoubleSetBInterpolator;
+(id)gadgetColumnSpacingSpanSingleSetAInterpolator;
+(id)gadgetColumnWidthSpanDoubleSetAInterpolator;
+(id)gadgetColumnWidthSpanDoubleSetBInterpolator;
+(id)gadgetColumnWidthSpanSingleSetAInterpolator;
+(id)layoutMarginWidthInterpolator;
+(id)legacyLayoutMarginWidthInterpolator;
+(id)memoriesDetailsEdgeInsetsInterpolator;
+(id)memoriesFeedInteritemSpacingInterpolator;
+(id)memoriesFeedLandscapeEdgeInsetsInterpolator;
+(id)memoriesFeedPortraitEdgeInsetsInterpolator;
+(id)memoriesItemWidthInterpolator;
+(id)photosDetailsEdgeInsetsInterpolator;
+(struct CGSize )bestItemSizeForAvailableWidth:(CGFloat)arg0 screenScale:(CGFloat)arg1 columns:(NSUInteger)arg2 bestSpacing:(*CGFloat)arg3 bestInset:(*CGFloat)arg4 ;
+(struct CGSize )zoomableGridLayoutSmallItemSizeForWidth:(CGFloat)arg0 ;
-(CGFloat)valueForMetric:(CGFloat)arg0 ;
-(id)_valueForMetric:(CGFloat)arg0 fromInterpolationBetweenValue:(id)arg1 secondValue:(id)arg2 ;
-(id)description;
-(id)init;
-(void)_getReferenceValueForMetric:(CGFloat)arg0 exactMatch:(*id)arg1 closestBeforeMatch:(*id)arg2 closestAfterMatch:(*id)arg3 ;
-(void)_invalidateReferenceValuesByMetricsOrder;
-(void)_setNeedsUpdate;
-(void)_updateReferenceValuesByMetricsOrderIfNeeded;
-(void)setReferenceValue:(CGFloat)arg0 forMetric:(CGFloat)arg1 ;


@end


#endif