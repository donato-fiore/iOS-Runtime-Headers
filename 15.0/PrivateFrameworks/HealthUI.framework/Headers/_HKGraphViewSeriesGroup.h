// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKGRAPHVIEWSERIESGROUP_H
#define _HKGRAPHVIEWSERIESGROUP_H

@class NSMutableArray, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "_HKGraphViewAxisAnnotationHandler.h"
#import "HKLegendView.h"
#import "_HKGraphViewSelectionContext.h"

@interface _HKGraphViewSeriesGroup : NSObject

@property (retain, nonatomic) _HKGraphViewAxisAnnotationHandler *axisAnnotationHandler; // ivar: _axisAnnotationHandler
@property (retain, nonatomic) NSMutableArray *currentSeries; // ivar: _currentSeries
@property (retain, nonatomic) NSArray *independentAxes; // ivar: _independentAxes
@property (nonatomic) CGSize lastLegendSize; // ivar: _lastLegendSize
@property (retain, nonatomic) HKLegendView *legendView; // ivar: _legendView
@property (retain, nonatomic) _HKGraphViewSelectionContext *selectionContext; // ivar: _selectionContext
@property (retain, nonatomic) NSMutableDictionary *zoomToSeriesMapping; // ivar: _zoomToSeriesMapping


-(id)init;


@end


#endif