// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTUREVISIONDATASINKCONFIGURATION_H
#define FIGCAPTUREVISIONDATASINKCONFIGURATION_H

@class NSDictionary, NSData;


#import "FigCaptureSinkConfiguration.h"

@interface FigCaptureVisionDataSinkConfiguration : FigCaptureSinkConfiguration

@property (nonatomic, getter=isDynamicThresholdingEnabled) BOOL dynamicThresholdingEnabled; // ivar: _dynamicThresholdingEnabled
@property (readonly, nonatomic) NSDictionary *embeddedCaptureDeviceConfiguration;
@property (nonatomic) BOOL featureBinningEnabled; // ivar: _featureBinningEnabled
@property (nonatomic) int featureMatchingDescriptorSize; // ivar: _featureMatchingDescriptorSize
@property (nonatomic, getter=isFeatureMatchingEnabled) BOOL featureMatchingEnabled; // ivar: _featureMatchingEnabled
@property (nonatomic) BOOL featureOrientationAssignmentEnabled; // ivar: _featureOrientationAssignmentEnabled
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor; // ivar: _gaussianPyramidBaseOctaveDownscalingFactor
@property (nonatomic) unsigned int gaussianPyramidOctavesCount; // ivar: _gaussianPyramidOctavesCount
@property (nonatomic) NSUInteger hammingDistanceThreshold; // ivar: _hammingDistanceThreshold
@property (nonatomic) unsigned int keypointDetectionFlowType; // ivar: _keypointDetectionFlowType
@property (nonatomic) float keypointDetectionThreshold; // ivar: _keypointDetectionThreshold
@property (retain, nonatomic) NSData *laccConfigAndMetadata; // ivar: _laccConfigAndMetadata
@property (nonatomic) ? maxBurstDuration; // ivar: _maxBurstDuration
@property (nonatomic) float maxBurstFrameRate; // ivar: _maxBurstFrameRate
@property (nonatomic) float maxFrameRate; // ivar: _maxFrameRate
@property (nonatomic) unsigned int maxKeypointsCount; // ivar: _maxKeypointsCount
@property (nonatomic) float orientationDistanceThreshold; // ivar: _orientationDistanceThreshold
@property (nonatomic) float sigmaDistanceThreshold; // ivar: _sigmaDistanceThreshold
@property (nonatomic) float squareDistanceDisparityFraction; // ivar: _squareDistanceDisparityFraction
@property (nonatomic) NSUInteger subPixelThreshold; // ivar: _subPixelThreshold


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithXPCEncoding:(id)arg0 ;
-(int)sinkType;
-(void)dealloc;


@end


#endif