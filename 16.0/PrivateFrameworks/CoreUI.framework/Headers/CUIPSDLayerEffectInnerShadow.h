// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIPSDLAYEREFFECTINNERSHADOW_H
#define CUIPSDLAYEREFFECTINNERSHADOW_H



#import "CUIPSDLayerEffectComponent.h"
#import "CUIColor.h"

@interface CUIPSDLayerEffectInnerShadow : CUIPSDLayerEffectComponent

@property short angle; // ivar: _angle
@property int blendMode; // ivar: _blendMode
@property NSUInteger blurSize; // ivar: _blurSize
@property (retain) CUIColor *color; // ivar: _color
@property NSUInteger distance; // ivar: _distance
@property CGFloat opacity; // ivar: _opacity


-(BOOL)updateLayerEffectPreset:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithEffectFromPreset:(id)arg0 atIndex:(unsigned int)arg1 ;
-(unsigned int)effectType;
-(void)dealloc;


@end


#endif