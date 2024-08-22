// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOSEXTRASMAINMENUSECTIONMETRICS_H
#define VIDEOSEXTRASMAINMENUSECTIONMETRICS_H

@class UIFontDescriptor;
@protocol VideosExtrasMainMenuSectionMetricsDataSource;

#import <Foundation/Foundation.h>


@interface VideosExtrasMainMenuSectionMetrics : NSObject {
    CGFloat _fittingWidth;
    BOOL _needsUpdate;
    NSInteger _itemCount;
    *CGSize _calculatedSizes;
}


@property (weak, nonatomic) NSObject<VideosExtrasMainMenuSectionMetricsDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) CGFloat desiredCellSpacing; // ivar: _desiredCellSpacing
@property (retain, nonatomic) UIFontDescriptor *desiredFontDescriptor; // ivar: _desiredFontDescriptor
@property (nonatomic) CGFloat desiredWidth; // ivar: _desiredWidth
@property (readonly, nonatomic) CGFloat fittingCellSpacing; // ivar: _fittingCellSpacing
@property (readonly, nonatomic) UIFontDescriptor *fittingFontDescriptor; // ivar: _fittingFontDescriptor
@property (nonatomic) CGFloat minimumCellSpacing; // ivar: _minimumCellSpacing
@property (retain, nonatomic) UIFontDescriptor *minimumFontDescriptor; // ivar: _minimumFontDescriptor
@property (readonly, nonatomic) CGSize totalFittingSize; // ivar: _totalFittingSize


-(struct CGSize )_horizontalFittingSizeForFontDescriptor:(id)arg0 gutterSize:(CGFloat)arg1 itemCount:(NSInteger)arg2 itemSizes:(struct CGSize *)arg3 ;
-(struct CGSize )sizeForCellAtIndex:(NSInteger)arg0 ;
-(void)_recalculateSizes;
-(void)_setNeedsUpdate;
-(void)_updateAllMetrics;
-(void)dealloc;
-(void)setFittingWidth:(CGFloat)arg0 ;
-(void)updateSizes;


@end


#endif