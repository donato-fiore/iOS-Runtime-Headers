// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIPSDLAYEREFFECTGRADIENTOVERLAY_H
#define CUIPSDLAYEREFFECTGRADIENTOVERLAY_H



#import "CUIPSDLayerEffectComponent.h"
#import "CUIPSDGradient.h"

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent

@property (retain) CUIPSDGradient *gradient; // ivar: _gradient


-(BOOL)updateLayerEffectPreset:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithEffectFromPreset:(id)arg0 atIndex:(unsigned int)arg1 ;
-(unsigned int)effectType;
-(void)dealloc;


@end


#endif