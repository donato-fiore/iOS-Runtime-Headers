// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHPIESERIESMODELCACHE_H
#define TSCHPIESERIESMODELCACHE_H

@class NSString, TSWPParagraphStyle, TSDFill, TSDShadow, TSDStroke;

#import <Foundation/Foundation.h>

#import "TSCHChartModel.h"
#import "TSCHChartInfo.h"
#import "TSCHChartSeries.h"
#import "TSCHChartAxis.h"

@interface TSCHPieSeriesModelCache : NSObject {
    TSCHChartModel *_chartModel;
    TSCHChartInfo *_chartInfo;
    BOOL _isSingleCircleSpecialCase;
    TSCHChartSeries *_singleCircleSeriesElement;
    NSUInteger _numberOfSeries;
    CGFloat _currentSeriesAngleSweep;
}


@property (readonly) TSCHChartAxis *axis; // ivar: _axis
@property (readonly) float effectiveLabelExplosion; // ivar: _effectiveLabelExplosion
@property (readonly) float effectiveWedgeExplosion; // ivar: _effectiveWedgeExplosion
@property (readonly) CGFloat endAngle; // ivar: _endAngle
@property (readonly) BOOL groupedShadow; // ivar: _groupedShadow
@property (readonly) float labelExplosion; // ivar: _labelExplosion
@property (readonly) NSString *labelString; // ivar: _labelString
@property (readonly) CGFloat midAngle; // ivar: _midAngle
@property (readonly) BOOL nullData; // ivar: _currentSeriesNullData
@property (readonly) TSWPParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (readonly) CGFloat percentage; // ivar: _currentSeriesPercentage
@property (readonly, weak) TSCHChartSeries *series; // ivar: _currentSeries
@property (readonly) CGFloat seriesAxisValue; // ivar: _currentSeriesAxisValue
@property (readonly) TSDFill *seriesFill; // ivar: _seriesFill
@property (readonly) NSUInteger seriesIndex; // ivar: _currentSeriesIndex
@property (readonly) NSString *seriesNameLabelString; // ivar: _seriesNameLabelString
@property (readonly) CGFloat seriesOpacity; // ivar: _seriesOpacity
@property (readonly) TSDShadow *seriesShadow; // ivar: _seriesShadow
@property (readonly) TSDStroke *seriesStroke; // ivar: _seriesStroke
@property (readonly) BOOL shouldRenderCalloutLine;
@property (readonly) BOOL shouldRenderLabel;
@property (readonly) CGFloat startAngle; // ivar: _currentSeriesStartAngle
@property (readonly) CGFloat totalValue; // ivar: _totalValue
@property (readonly) NSString *valueLabelString; // ivar: _valueLabelString
@property (readonly) float wedgeExplosion; // ivar: _wedgeExplosion


-(id)initWithPrior:(id)arg0 orChartModel:(id)arg1 forSeries:(NSUInteger)arg2 ;
-(id)labelStringForType:(NSInteger)arg0 ;
-(id)labelStringWithValueLabelString:(id)arg0 seriesNameLabelString:(id)arg1 ;


@end


#endif