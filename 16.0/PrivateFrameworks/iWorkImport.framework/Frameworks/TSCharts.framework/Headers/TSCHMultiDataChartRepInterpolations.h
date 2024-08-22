// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHMULTIDATACHARTREPINTERPOLATIONS_H
#define TSCHMULTIDATACHARTREPINTERPOLATIONS_H

@class CAMediaTimingFunction;

#import <Foundation/Foundation.h>


@interface TSCHMultiDataChartRepInterpolations : NSObject

@property (readonly, nonatomic) CAMediaTimingFunction *individual; // ivar: _individualTimingFunction
@property (readonly, nonatomic) CAMediaTimingFunction *overall; // ivar: _overallTimingFunction


+(id)interpolationsWithOverallTimingFunction:(id)arg0 individualTimingFunction:(id)arg1 ;
-(id)initWithOverallTimingFunction:(id)arg0 individualTimingFunction:(id)arg1 ;


@end


#endif