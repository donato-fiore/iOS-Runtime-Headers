// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWBALGORITHM_H
#define AWBALGORITHM_H

@class FigMetalContext, NSNumber, NSMutableDictionary, NSData, NSDictionary;

#import <Foundation/Foundation.h>


@interface AWBAlgorithm : NSObject {
    FigMetalContext *_metalContext;
    ? _AWBAlgorithmObj;
    sMetaData _sMetaData;
    int _flickerDetectionStatus;
    int _flickerDetectionIRRatio;
    unsigned int _flickerConfidence;
    float _photometerAWBDebug_externalLux;
    int _isNominalStrobe;
    float _flashRatio;
    int _ledType;
    sPerModuleLEDCalibData _pmLEDCalibData;
    float _sensorClockFreqHz;
    unsigned short _preFlashLuxLevel;
    unsigned short _preFlashLuxLevelLow;
    unsigned short _preFlashLuxLevelHigh;
    unsigned short _flashLuxLevel;
    ? _fallbackGains;
}


@property (nonatomic) ? awbComboGains; // ivar: _awbComboGains
@property (nonatomic) ? awbComboGainsNormalized; // ivar: _awbComboGainsNormalized
@property (nonatomic) ? awbGains; // ivar: _awbGains
@property (retain, nonatomic) NSNumber *digitalFlash; // ivar: _digitalFlash
@property (nonatomic) unsigned int numTilesX; // ivar: _numTilesX
@property (nonatomic) unsigned int numTilesY; // ivar: _numTilesY
@property (retain, nonatomic) NSMutableDictionary *outputMetadata; // ivar: _outputMetadata
@property (retain, nonatomic) NSData *setFileData; // ivar: _setFileData
@property (retain, nonatomic) NSDictionary *stats; // ivar: _stats
@property (nonatomic) unsigned int winRegionHeight; // ivar: _winRegionHeight
@property (nonatomic) unsigned int winRegionWidth; // ivar: _winRegionWidth


+(int)calculateSTRBKeyFromWideCamera:(struct ? *)arg0 moduleConfig:(id)arg1 ;
-(id)initWithMetalContext:(id)arg0 ;
-(int)_createShaders;
-(int)awbConfigLoad:(id)arg0 to:(struct CAWBAFE *)arg1 ;
-(int)calculateEIT:(id)arg0 result:(*NSUInteger)arg1 ;
-(int)configFaceMetadata:(id)arg0 ;
-(int)configFallbackMetadata:(id)arg0 ;
-(int)configFlashRFCMetadata:(id)arg0 cameraInfo:(id)arg1 moduleConfig:(id)arg2 ;
-(int)configFlickerDetectionMetadata:(id)arg0 moduleConfig:(id)arg1 ;
-(int)configWithMetadata:(id)arg0 cameraInfo:(id)arg1 moduleConfig:(id)arg2 ;
-(int)configWithMetadata:(id)arg0 colorCal:(id)arg1 ;
-(int)initTuningParameters:(id)arg0 ;
-(int)process;
-(void)dealloc;


@end


#endif