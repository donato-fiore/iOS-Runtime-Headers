// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLCOLORSWATCHTEXTURE_H
#define MDLCOLORSWATCHTEXTURE_H



#import "MDLTexture.h"

@interface MDLColorSwatchTexture : MDLTexture {
    float _colorTemperature1;
    float _colorTemperature2;
    *CGColor _color1;
    *CGColor _color2;
    int _type;
}




-(id)generateDataAtLevel:(NSInteger)arg0 selector:(SEL)arg1 ;
-(id)initWithColorGradientFrom:(struct CGColor *)arg0 toColor:(struct CGColor *)arg1 name:(id)arg2 textureDimensions;
-(id)initWithColorTemperatureGradientFrom:(float)arg0 toColorTemperature:(float)arg1 name:(id)arg2 textureDimensions;


@end


#endif