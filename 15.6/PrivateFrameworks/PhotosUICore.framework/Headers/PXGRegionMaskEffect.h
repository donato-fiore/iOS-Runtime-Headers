// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGREGIONMASKEFFECT_H
#define PXGREGIONMASKEFFECT_H



#import "PXGEffect.h"
#import "PXGShader.h"
#import "PXGUniform.h"
#import "PXRegion.h"

@interface PXGRegionMaskEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_valuesUniform;
}


@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (retain, nonatomic) PXRegion *region; // ivar: _region


-(id)initWithEntityManager:(id)arg0 ;
-(id)shader;
-(void)_updateValues;


@end


#endif