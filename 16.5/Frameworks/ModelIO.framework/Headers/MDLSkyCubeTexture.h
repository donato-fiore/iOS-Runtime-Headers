// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLSKYCUBETEXTURE_H
#define MDLSKYCUBETEXTURE_H



#import "MDLTexture.h"

@interface MDLSkyCubeTexture : MDLTexture {
    ? _highDynamicRangeCompression;
    float _highDynamicRangeCompressionLimit;
    *CGColor _groundColor;
    *SkyDescriptor _sky;
}


@property (nonatomic) float brightness; // ivar: _brightness
@property (nonatomic) float contrast; // ivar: _contrast
@property (nonatomic) float exposure; // ivar: _exposure
@property (nonatomic) float gamma; // ivar: _gamma
@property (nonatomic) float groundAlbedo; // ivar: _groundAlbedo
@property (nonatomic) *CGColor groundColor;
@property ? highDynamicRangeCompression;
@property (nonatomic) float horizonElevation; // ivar: _horizonElevation
@property (nonatomic) float saturation; // ivar: _saturation
@property (nonatomic) float sunAzimuth; // ivar: _sunAzimuth
@property (nonatomic) float sunElevation; // ivar: _sunElevation
@property (nonatomic) float turbidity; // ivar: _turbidity
@property (nonatomic) float upperAtmosphereScattering; // ivar: _upperAtmosphereScattering


-(id)initWithName:(id)arg0 channelEncoding:(NSInteger)arg1 textureDimensions:(float)arg2 turbidity:(float)arg3 sunElevation:(float)arg4 sunAzimuth:(float)arg5 upperAtmosphereScattering:(float)arg6 groundAlbedo;
-(id)initWithName:(id)arg0 channelEncoding:(NSInteger)arg1 textureDimensions:(float)arg2 turbidity:(float)arg3 sunElevation:(float)arg4 upperAtmosphereScattering:(float)arg5 groundAlbedo;


@end


#endif