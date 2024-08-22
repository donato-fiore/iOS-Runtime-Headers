// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8TSCHARTS18TSCHCHARTTYPERADAR_H
#define _TTC8TSCHARTS18TSCHCHARTTYPERADAR_H

@class NSString;


#import "TSCH2DChartType.h"

@interface _TtC8TSCharts18TSCHChartTypeRadar : TSCH2DChartType

@property (nonatomic, readonly) Class categoryAxisClass;
@property (nonatomic, readonly) Class chartLayoutItemClass;
@property (nonatomic, readonly) BOOL layoutFrameShouldEncloseInfoGeometry;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BOOL supportsErrorBars;
@property (nonatomic, readonly) BOOL supportsGridlineTickmarks;
@property (nonatomic, readonly) BOOL supportsReferenceLines;
@property (nonatomic, readonly) BOOL supportsTrendLines;
@property (nonatomic, readonly) NSString *userInterfaceName;
@property (nonatomic, readonly) NSInteger userInterfaceTag;
@property (nonatomic, readonly) BOOL usesPolarCoordinates;


-(id)alternateArchiveChartTypeAndReturnWriterVersion:(*NSUInteger)arg0 readerVersion:(*NSUInteger)arg1 featureID:(*id)arg2 ;
-(id)defaultSeriesType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithFeatureClass:(Class)arg0 ;
-(id)seriesTypeForSeriesElementType:(int)arg0 defaultSeriesIndex:(NSUInteger)arg1 ;


@end


#endif