// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIPSDLAYEREFFECTCOLOROVERLAY_H
#define CUIPSDLAYEREFFECTCOLOROVERLAY_H



#import "CUIPSDLayerEffectComponent.h"
#import "CUIColor.h"

@interface CUIPSDLayerEffectColorOverlay : CUIPSDLayerEffectComponent

@property int blendMode; // ivar: _blendMode
@property (retain) CUIColor *color; // ivar: _color
@property CGFloat opacity; // ivar: _opacity


-(BOOL)updateLayerEffectPreset:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithEffectFromPreset:(id)arg0 atIndex:(unsigned int)arg1 ;
-(unsigned int)effectType;
-(void)dealloc;


@end


#endif