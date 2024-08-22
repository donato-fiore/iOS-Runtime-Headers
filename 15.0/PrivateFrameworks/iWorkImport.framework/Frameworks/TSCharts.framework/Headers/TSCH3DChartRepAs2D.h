// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DCHARTREPAS2D_H
#define TSCH3DCHARTREPAS2D_H



#import "TSCHChartRep.h"

@interface TSCH3DChartRepAs2D : TSCHChartRep {
    TSCHChartRep *m2DRep;
}




-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)p_layoutFrom3DInfo:(id)arg0 layout3D:(id)arg1 ;
-(id)p_mutationsForConverting3DFillFromSeries:(id)arg0 ;
-(void)addToSet:(id)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)p_create2DRep;
-(void)p_update2DLayout;
-(void)renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;


@end


#endif