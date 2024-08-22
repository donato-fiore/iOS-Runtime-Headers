// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIPSDLAYEREFFECTDROPSHADOW_H
#define CUIPSDLAYEREFFECTDROPSHADOW_H



#import "CUIPSDLayerEffectComponent.h"
#import "CUIColor.h"

@interface CUIPSDLayerEffectDropShadow : CUIPSDLayerEffectComponent

@property short angle; // ivar: _angle
@property int blendMode; // ivar: _blendMode
@property NSUInteger blurSize; // ivar: _blurSize
@property (retain) CUIColor *color; // ivar: _color
@property NSUInteger distance; // ivar: _distance
@property CGFloat opacity; // ivar: _opacity
@property NSUInteger spread; // ivar: _spread


-(BOOL)updateLayerEffectPreset:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithEffectFromPreset:(id)arg0 atIndex:(unsigned int)arg1 ;
-(unsigned int)effectType;
-(void)dealloc;


@end


#endif