// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREVISIONDATASINKCONFIGURATION_H
#define FIGCAPTUREVISIONDATASINKCONFIGURATION_H

@class NSDictionary;


#import "FigCaptureSinkConfiguration.h"

@interface FigCaptureVisionDataSinkConfiguration : FigCaptureSinkConfiguration

@property (readonly, nonatomic) NSDictionary *embeddedCaptureDeviceConfiguration;
@property (nonatomic) BOOL featureBinningEnabled; // ivar: _featureBinningEnabled
@property (nonatomic) BOOL featureOrientationAssignmentEnabled; // ivar: _featureOrientationAssignmentEnabled
@property (nonatomic) float gaussianPyramidBaseOctaveDownscalingFactor; // ivar: _gaussianPyramidBaseOctaveDownscalingFactor
@property (nonatomic) unsigned int gaussianPyramidOctavesCount; // ivar: _gaussianPyramidOctavesCount
@property (nonatomic) float keypointDetectionThreshold; // ivar: _keypointDetectionThreshold
@property (nonatomic) ? maxBurstDuration; // ivar: _maxBurstDuration
@property (nonatomic) float maxBurstFrameRate; // ivar: _maxBurstFrameRate
@property (nonatomic) float maxFrameRate; // ivar: _maxFrameRate
@property (nonatomic) unsigned int maxKeypointsCount; // ivar: _maxKeypointsCount


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithXPCEncoding:(id)arg0 ;
-(int)sinkType;


@end


#endif