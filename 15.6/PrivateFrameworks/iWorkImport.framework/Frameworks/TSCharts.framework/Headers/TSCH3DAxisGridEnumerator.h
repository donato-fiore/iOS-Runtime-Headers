// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DAXISGRIDENUMERATOR_H
#define TSCH3DAXISGRIDENUMERATOR_H



#import "TSCH3DValueEnumerator.h"
#import "TSCHChartAxis.h"

@interface TSCH3DAxisGridEnumerator : TSCH3DValueEnumerator

@property (readonly, nonatomic) TSCHChartAxis *axis; // ivar: _axis
@property (readonly, nonatomic) int type;


+(id)enumeratorWithAxis:(id)arg0 ;
-(NSUInteger)count;
-(id)initWithAxis:(id)arg0 ;
-(struct AxisGridLocation )position;
-(void)update;


@end


#endif