// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DAXISLABELENUMERATOR_H
#define TSCH3DAXISLABELENUMERATOR_H



#import "TSCH3DValueEnumerator.h"
#import "TSCHChartAxis.h"
#import "TSCH3DAxisLabelKind.h"

@interface TSCH3DAxisLabelEnumerator : TSCH3DValueEnumerator {
    TSCHChartAxis *_axis;
}


@property (readonly, nonatomic) TSCH3DAxisLabelKind *kind; // ivar: _kind


+(id)enumeratorWithAxis:(id)arg0 kind:(id)arg1 ;
-(BOOL)shouldRender;
-(NSUInteger)count;
-(id)initWithAxis:(id)arg0 kind:(id)arg1 ;
-(id)string;
-(id)stringForLabelResources:(id)arg0 ;
-(int)labelPosition;
-(void)update;


@end


#endif