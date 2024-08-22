// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIPSDLAYEREFFECTBEVELEMBOSS_H
#define CUIPSDLAYEREFFECTBEVELEMBOSS_H



#import "CUIPSDLayerEffectComponent.h"
#import "CUIColor.h"

@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent

@property NSUInteger altitude; // ivar: _altitude
@property short angle; // ivar: _angle
@property NSUInteger blurSize; // ivar: _blurSize
@property unsigned int direction; // ivar: _direction
@property int highlightBlendMode; // ivar: _highlightBlendMode
@property (retain) CUIColor *highlightColor; // ivar: _highlightColor
@property CGFloat highlightOpacity; // ivar: _highlightOpacity
@property int shadowBlendMode; // ivar: _shadowBlendMode
@property (retain) CUIColor *shadowColor; // ivar: _shadowColor
@property CGFloat shadowOpacity; // ivar: _shadowOpacity
@property NSUInteger softenSize; // ivar: _softenSize


-(BOOL)updateLayerEffectPreset:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithEffectFromPreset:(id)arg0 atIndex:(unsigned int)arg1 ;
-(unsigned int)effectType;
-(void)dealloc;


@end


#endif