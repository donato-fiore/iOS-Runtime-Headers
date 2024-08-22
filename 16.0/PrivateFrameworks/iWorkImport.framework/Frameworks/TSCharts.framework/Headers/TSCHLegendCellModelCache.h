// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHLEGENDCELLMODELCACHE_H
#define TSCHLEGENDCELLMODELCACHE_H

@class NSString, TSDStroke;

#import <Foundation/Foundation.h>

#import "TSCHChartSeries.h"

@interface TSCHLegendCellModelCache : NSObject

@property (readonly) CGRect badgeFillFrame; // ivar: _badgeFillFrame
@property (readonly) CGRect badgeFrame; // ivar: _badgeFrame
@property (readonly) int badgeType; // ivar: _badgeType
@property (readonly) int cellType; // ivar: _legendCellType
@property (readonly) CGFloat effectiveStrokeWidth; // ivar: _effectiveStrokeWidth
@property (readonly) CGFloat effectiveSymbolStrokeWidth; // ivar: _effectiveSymbolStrokeWidth
@property (readonly) id *fill;
@property (readonly) CGRect labelFrame; // ivar: _labelFrame
@property (readonly) NSString *labelString; // ivar: _labelString
@property (readonly) int lineType; // ivar: _lineType
@property (readonly) TSCHChartSeries *series; // ivar: _series
@property (readonly) NSUInteger seriesIndex; // ivar: _seriesIndex
@property (readonly) CGSize size; // ivar: _cellSize
@property (readonly) TSDStroke *stroke; // ivar: _stroke
@property (readonly) id *symbolFill;
@property (readonly) TSDStroke *symbolStroke; // ivar: _symbolStroke
@property (readonly) int symbolType; // ivar: _symbolType


-(id)initWithChartModel:(id)arg0 cellType:(int)arg1 seriesIndex:(NSUInteger)arg2 withMetrics:(id)arg3 overrideLabel:(id)arg4 styleProvidingSource:(id)arg5 ;


@end


#endif