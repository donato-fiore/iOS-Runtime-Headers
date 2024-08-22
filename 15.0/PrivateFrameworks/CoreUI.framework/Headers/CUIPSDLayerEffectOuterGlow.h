// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIPSDLAYEREFFECTOUTERGLOW_H
#define CUIPSDLAYEREFFECTOUTERGLOW_H



#import "CUIPSDLayerEffectComponent.h"
#import "CUIColor.h"

@interface CUIPSDLayerEffectOuterGlow : CUIPSDLayerEffectComponent

@property int blendMode; // ivar: _blendMode
@property NSUInteger blurSize; // ivar: _blurSize
@property (retain) CUIColor *color; // ivar: _color
@property CGFloat opacity; // ivar: _opacity
@property NSUInteger spread; // ivar: _spread


-(BOOL)updateLayerEffectPreset:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithEffectFromPreset:(id)arg0 atIndex:(unsigned int)arg1 ;
-(unsigned int)effectType;
-(void)dealloc;


@end


#endif