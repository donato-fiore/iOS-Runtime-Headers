// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTGLOBALRENDERINGMETADATAVERSION1_H
#define PTGLOBALRENDERINGMETADATAVERSION1_H



#import "PTGlobalRenderingMetadata.h"

@interface PTGlobalRenderingMetadataVersion1 : PTGlobalRenderingMetadata {
    ? _visCropFactor;
    unsigned int _renderingVersion;
}


@property (nonatomic) unsigned int conversionGain; // ivar: _conversionGain
@property (nonatomic) float defaultAperture; // ivar: _defaultAperture
@property (nonatomic) ? extrinsicsMatrix; // ivar: _extrinsicsMatrix
@property (nonatomic) float focalLength35mm; // ivar: _focalLength35mm
@property (nonatomic) float highlightBoostFactor; // ivar: _highlightBoostFactor
@property (nonatomic) float highlightChromaFactor; // ivar: _highlightChromaFactor
@property (nonatomic) unsigned int hwModelID; // ivar: _hwModelID
@property (nonatomic) float maxAperture; // ivar: _maxAperture
@property (nonatomic) float minAperture; // ivar: _minAperture
@property (nonatomic) float networkBias; // ivar: _networkBias
@property (nonatomic) float noiseScaleFactor; // ivar: _noiseScaleFactor
@property (nonatomic) ? rawSensorSize; // ivar: _rawSensorSize
@property (nonatomic) unsigned int readNoise1x; // ivar: _readNoise1x
@property (nonatomic) unsigned int readNoise8x; // ivar: _readNoise8x
@property (nonatomic) CGRect sensorCropRect; // ivar: _sensorCropRect
@property (nonatomic) unsigned int sensorID; // ivar: _sensorID
@property (nonatomic) unsigned int sourceColorBitDepth; // ivar: _sourceColorBitDepth
@property ? visCropFactor;


-(BOOL)applyToRenderState:(id)arg0 error:(*id)arg1 ;
-(BOOL)matchesRenderState:(id)arg0 ;
-(BOOL)nanAwareEqual:(float)arg0 with:(float)arg1 ;
-(BOOL)writeToData:(id)arg0 withOptions:(id)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithMinorVersion:(unsigned int)arg0 ;
-(unsigned int)sizeOfSerializedObjectWithOptions:(id)arg0 ;
-(void)applyToRenderRequest:(id)arg0 ;
-(void)applyToRenderState:(id)arg0 ;


@end


#endif