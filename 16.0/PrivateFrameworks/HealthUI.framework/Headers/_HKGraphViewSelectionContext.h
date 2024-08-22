// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKGRAPHVIEWSELECTIONCONTEXT_H
#define _HKGRAPHVIEWSELECTIONCONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "HKGraphSeries.h"

@interface _HKGraphViewSelectionContext : NSObject

@property (retain, nonatomic) HKGraphSeries *closestSeriesToSelection; // ivar: _closestSeriesToSelection
@property (readonly, nonatomic) CGFloat minimumSelectionDistance;
@property (retain, nonatomic) NSArray *selectedRangeBoundariesXValue; // ivar: _selectedRangeBoundariesXValue
@property (retain, nonatomic) NSArray *selectionAreaMapping; // ivar: _selectionAreaMapping
@property (nonatomic) NSInteger selectionState; // ivar: _selectionState
@property (nonatomic) CGRect seriesSelectionRect; // ivar: _seriesSelectionRect
@property (retain, nonatomic) NSArray *touchPoints; // ivar: _touchPoints




@end


#endif