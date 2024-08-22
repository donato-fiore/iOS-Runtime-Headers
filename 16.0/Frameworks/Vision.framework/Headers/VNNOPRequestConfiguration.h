// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNNOPREQUESTCONFIGURATION_H
#define VNNOPREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"
#import "VNSupportedImageSize.h"

@interface VNNOPRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) CGFloat detectorExecutionTimeInterval; // ivar: _detectorExecutionTimeInterval
@property (retain, nonatomic) VNSupportedImageSize *detectorPreferredImageSize; // ivar: _detectorPreferredImageSize
@property (nonatomic) BOOL detectorWantsAnisotropicScaling; // ivar: _detectorWantsAnisotropicScaling


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif