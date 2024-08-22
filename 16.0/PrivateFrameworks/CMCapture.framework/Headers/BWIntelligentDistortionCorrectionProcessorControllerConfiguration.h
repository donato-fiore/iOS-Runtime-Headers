// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINTELLIGENTDISTORTIONCORRECTIONPROCESSORCONTROLLERCONFIGURATION_H
#define BWINTELLIGENTDISTORTIONCORRECTIONPROCESSORCONTROLLERCONFIGURATION_H

@class NSArray, NSDictionary;


#import "BWStillImageProcessorControllerConfiguration.h"

@interface BWIntelligentDistortionCorrectionProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (nonatomic) ? geometricDistortionCorrectionExpandedImageDimensions; // ivar: _geometricDistortionCorrectionExpandedImageDimensions
@property (nonatomic) int horizontalSensorBinningFactor; // ivar: _horizontalSensorBinningFactor
@property (nonatomic) BOOL intelligentDistortionCorrectionAppliesFinalDimensions; // ivar: _intelligentDistortionCorrectionAppliesFinalDimensions
@property (nonatomic) int intelligentDistortionCorrectionVersion; // ivar: _intelligentDistortionCorrectionVersion
@property (retain, nonatomic) NSArray *portTypesWithGeometricDistortionCorrectionEnabled; // ivar: _portTypesWithGeometricDistortionCorrectionEnabled
@property (retain, nonatomic) NSArray *portTypesWithIntelligentDistortionCorrectionEnabled; // ivar: _portTypesWithIntelligentDistortionCorrectionEnabled
@property (nonatomic) ? processorConfig; // ivar: _processorConfig
@property (retain, nonatomic) NSDictionary *providedInferenceAttachedMediaByMode; // ivar: _providedInferenceAttachedMediaByMode
@property (nonatomic) int verticalSensorBinningFactor; // ivar: _verticalSensorBinningFactor


-(void)dealloc;


@end


#endif