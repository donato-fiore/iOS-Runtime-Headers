// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNGENERATEANIMALSEGMENTATIONREQUESTCONFIGURATION_H
#define VNGENERATEANIMALSEGMENTATIONREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNGenerateAnimalSegmentationRequestConfiguration : VNImageBasedRequestConfiguration {
    unsigned int _outputPixelFormat;
    NSInteger _qualityLevel;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif