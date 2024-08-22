// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKGRAPHSERIESDATABLOCK_H
#define HKGRAPHSERIESDATABLOCK_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "HKValueRange.h"

@interface HKGraphSeriesDataBlock : NSObject

@property (copy, nonatomic) NSArray *chartPoints; // ivar: _chartPoints
@property (readonly, nonatomic) HKValueRange *yValueRange; // ivar: _yValueRange




@end


#endif