// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNRECOGNIZEOBJECTSREQUESTCONFIGURATION_H
#define VNRECOGNIZEOBJECTSREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNRecognizeObjectsRequestConfiguration : VNImageBasedRequestConfiguration

@property NSUInteger imageCropAndScaleOption; // ivar: _imageCropAndScaleOption
@property float modelMinimumDetectionConfidence; // ivar: _modelMinimumDetectionConfidence
@property float modelNonMaximumSuppressionThreshold; // ivar: _modelNonMaximumSuppressionThreshold
@property BOOL useImageAnalyzerScaling; // ivar: _useImageAnalyzerScaling


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif