// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKGRAPHVIEWAUTOSCALESERIES_H
#define _HKGRAPHVIEWAUTOSCALESERIES_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "HKAxis.h"

@interface _HKGraphViewAutoscaleSeries : NSObject

@property (readonly, nonatomic) NSInteger autoscaleGroupRow; // ivar: _autoscaleGroupRow
@property (readonly, nonatomic) NSMutableArray *autoscaleSeries; // ivar: _autoscaleSeries
@property (readonly, nonatomic) HKAxis *autoscaleYAxis; // ivar: _autoscaleYAxis


-(id)initWithAutoscaleGroupRow:(NSInteger)arg0 autoscaleYAxis:(id)arg1 ;
-(void)addAutoscaleSeries:(id)arg0 ;


@end


#endif