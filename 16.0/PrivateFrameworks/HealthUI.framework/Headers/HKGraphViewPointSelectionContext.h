// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKGRAPHVIEWPOINTSELECTIONCONTEXT_H
#define HKGRAPHVIEWPOINTSELECTIONCONTEXT_H

@class NSDateComponents, NSArray;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"
#import "HKGraphSeries.h"

@interface HKGraphViewPointSelectionContext : NSObject

@property (retain, nonatomic) NSDateComponents *pointIntervalComponents; // ivar: _pointIntervalComponents
@property (retain, nonatomic) HKValueRange *selectedPathIndexRange; // ivar: _selectedPathIndexRange
@property (retain, nonatomic) HKValueRange *selectedPointValueRange; // ivar: _selectedPointValueRange
@property (retain, nonatomic) HKValueRange *selectedRangeXValues; // ivar: _selectedRangeXValues
@property (retain, nonatomic) HKGraphSeries *selectedSeries; // ivar: _selectedSeries
@property (retain, nonatomic) NSArray *userInfo; // ivar: _userInfo


-(id)debugDescription;


@end


#endif