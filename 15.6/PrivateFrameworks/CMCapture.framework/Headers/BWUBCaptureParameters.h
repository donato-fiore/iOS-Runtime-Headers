// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWUBCAPTUREPARAMETERS_H
#define BWUBCAPTUREPARAMETERS_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface BWUBCaptureParameters : NSObject {
    NSString *_portType;
    NSArray *_deepFusionHDREVZeroCountByEffectiveIntegrationTime;
    int _maxNumberOfFramesForAdaptiveBracketing;
    CGFloat _digitalFlashAvailableEffectiveIntegrationTimeThreshold;
    CGFloat _digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
    CGFloat _stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
    float _digitalFlashRecommendRegularFlashSNRThreshold;
    float _digitalFlashBacklitRecommendRegularFlashSNRThreshold;
    float _digitalFlashBacklitRecommendRegularFlashAERelativeDifferenceThreshold;
    BOOL _digitalFlashHighlightRecoveryEnabled;
    int _referenceFrameSelectionMethod;
    BOOL _usePreviousSIFR;
    NSArray *_motionAndFocusScoreWeights;
}


@property (readonly, nonatomic) NSArray *afWindowParams; // ivar: _afWindowParams
@property (readonly, nonatomic) BOOL alwaysUseAFTimeout; // ivar: _alwaysUseAFTimeout
@property (readonly, nonatomic) int deepFusionBracketedCaptureReferenceFrameIndex; // ivar: _deepFusionBracketedCaptureReferenceFrameIndex
@property (readonly, nonatomic) CGFloat deepFusionEffectiveIntegrationTimeThreshold; // ivar: _deepFusionEffectiveIntegrationTimeThreshold
@property (readonly, nonatomic) CGFloat longWithoutSphereEffectiveIntegrationTimeThreshold; // ivar: _longWithoutSphereEffectiveIntegrationTimeThreshold
@property (readonly, nonatomic) CGFloat lowLightEffectiveIntegrationTimeThreshold; // ivar: _lowLightEffectiveIntegrationTimeThreshold
@property (readonly, nonatomic) float lowLightHDRWithoutSIFRISPDGainThreshold; // ivar: _lowLightHDRWithoutSIFRISPDGainThreshold
@property (readonly, nonatomic) BOOL nonHDRBrightLightCapturesEnabled; // ivar: _nonHDRBrightLightCapturesEnabled
@property (readonly, nonatomic) BOOL preserveBlackLevel; // ivar: _preserveBlackLevel
@property (readonly, nonatomic) CGFloat redSaturationMainEffectiveIntegrationTimeThreshold; // ivar: _redSaturationMainEffectiveIntegrationTimeThreshold
@property (readonly, nonatomic) float redSaturationSIFRGainThreshold; // ivar: _redSaturationSIFRGainThreshold
@property (readonly, nonatomic) float sifrGainThreshold; // ivar: _sifrGainThreshold
@property (readonly, nonatomic) CGFloat sifrMainEffectiveIntegrationTimeThreshold; // ivar: _sifrMainEffectiveIntegrationTimeThreshold
@property (readonly, nonatomic) int toneCurveBehavior; // ivar: _toneCurveBehavior


-(BOOL)digitalFlashHighlightRecoveryEnabled;
-(BOOL)usePreviousSIFR;
-(CGFloat)digitalFlashAvailableEffectiveIntegrationTimeThreshold;
-(CGFloat)digitalFlashRecommendedEffectiveIntegrationTimeThreshold;
-(CGFloat)stationaryDigitalFlashRecommendedEffectiveIntegrationTimeThreshold;
-(float)digitalFlashBacklitRecommendRegularFlashAERelativeDifferenceThreshold;
-(float)digitalFlashBacklitRecommendRegularFlashSNRThreshold;
-(float)digitalFlashRecommendRegularFlashSNRThreshold;
-(id)description;
-(id)initWithPortType:(id)arg0 sensorIDDictionary:(id)arg1 ;
-(id)motionAndFocusScoreWeights;
-(int)deepFusionHDREVZeroCountForEffectiveIntegrationTime:(CGFloat)arg0 ;
-(int)maxNumberOfFramesForAdaptiveBracketing;
-(int)referenceFrameSelectionMethod;
-(void)dealloc;


@end


#endif