// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNGENERATESKYSEGMENTATIONREQUESTCONFIGURATION_H
#define VNGENERATESKYSEGMENTATIONREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNGenerateSkySegmentationRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) unsigned int outputPixelFormat; // ivar: _outputPixelFormat
@property (nonatomic) NSInteger qualityLevel; // ivar: _qualityLevel


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif