// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLNOISETEXTURE_H
#define MDLNOISETEXTURE_H



#import "MDLTexture.h"

@interface MDLNoiseTexture : MDLTexture {
    BOOL _vectorNoise;
    float _smoothness;
    BOOL _grayScale;
    float _frequency;
    int _noiseMode;
}




-(id)_generateCellularNoiseAtLevel:(NSInteger)arg0 selector:(SEL)arg1 ;
-(id)generateDataAtLevel:(NSInteger)arg0 selector:(SEL)arg1 ;
-(id)initCellularNoiseWithFrequency:(float)arg0 name:(id)arg1 textureDimensions:(NSInteger)arg2 channelEncoding;
-(id)initScalarNoiseWithSmoothness:(float)arg0 name:(id)arg1 textureDimensions:(int)arg2 channelCount:(NSInteger)arg3 channelEncoding:(BOOL)arg4 grayscale;
-(id)initVectorNoiseWithSmoothness:(float)arg0 name:(id)arg1 textureDimensions:(NSInteger)arg2 channelEncoding;


@end


#endif