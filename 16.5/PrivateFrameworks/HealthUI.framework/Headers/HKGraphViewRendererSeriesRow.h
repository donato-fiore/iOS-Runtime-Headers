// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKGRAPHVIEWRENDERERSERIESROW_H
#define HKGRAPHVIEWRENDERERSERIESROW_H

@class NSArray;
@protocol HKGraphSeriesAxisAnnotation;

#import <Foundation/Foundation.h>

#import "HKGraphSeries.h"

@interface HKGraphViewRendererSeriesRow : NSObject

@property (readonly, nonatomic) NSObject<HKGraphSeriesAxisAnnotation> *axisAnnotationHandler; // ivar: _axisAnnotationHandler
@property (readonly, nonatomic) HKGraphSeries *mainSeriesForRow; // ivar: _mainSeriesForRow
@property (readonly, nonatomic) NSArray *overlaidSeries; // ivar: _overlaidSeries
@property (readonly, nonatomic) NSArray *selectedRangeBoundariesXValue; // ivar: _selectedRangeBoundariesXValue
@property (readonly, nonatomic) HKGraphSeries *selectedSeriesForRow; // ivar: _selectedSeriesForRow
@property (readonly, nonatomic) NSInteger selectedTouchPointCount; // ivar: _selectedTouchPointCount
@property (readonly, nonatomic) CGRect yAxisRect; // ivar: _yAxisRect


-(id)initWithRowSeries:(id)arg0 mainSeriesForRow:(id)arg1 selectedSeriesForRow:(id)arg2 selectedRangeBoundariesXValue:(id)arg3 selectedTouchPointCount:(NSInteger)arg4 yAxisRect:(struct CGRect )arg5 axisAnnotationHandler:(id)arg6 ;


@end


#endif