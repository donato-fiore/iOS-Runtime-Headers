// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHLINEAREASERIESMODELCACHE_H
#define TSCHLINEAREASERIESMODELCACHE_H

@class TSWPParagraphStyle, TSDShadow, TSDStroke;

#import <Foundation/Foundation.h>

#import "TSCHChartAxis.h"
#import "TSCHChartSeries.h"
#import "TSCHChartValueAxis.h"

@interface TSCHLineAreaSeriesModelCache : NSObject

@property (readonly) CGFloat dataPointSize; // ivar: _dataPointSize
@property (readonly) TSCHChartAxis *groupAxis; // ivar: _groupAxis
@property (readonly) unsigned int labelPosition; // ivar: _labelPosition
@property (readonly) int lineType; // ivar: _lineType
@property (readonly) CGFloat opacity; // ivar: _opacity
@property (readonly) TSWPParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (readonly) TSCHChartSeries *series; // ivar: _series
@property (readonly) id *seriesFill; // ivar: _seriesFill
@property (readonly) NSUInteger seriesIndex; // ivar: _seriesIndex
@property (readonly) TSDShadow *seriesShadow; // ivar: _seriesShadow
@property (readonly) TSDStroke *seriesStroke; // ivar: _seriesStroke
@property (readonly) BOOL showLabelsInFront; // ivar: _showLabelsInFront
@property (readonly) BOOL showValueLabels; // ivar: _showValueLabels
@property (readonly) id *symbolFill; // ivar: _symbolFill
@property (readonly) TSDStroke *symbolStroke; // ivar: _symbolStroke
@property (readonly) int symbolType; // ivar: _symbolType
@property (readonly) *CGPath unitSymbolPath; // ivar: _unitSymbolPath
@property (readonly) TSCHChartValueAxis *valueAxis; // ivar: _valueAxis


-(id)initWithChartModel:(id)arg0 forSeries:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif