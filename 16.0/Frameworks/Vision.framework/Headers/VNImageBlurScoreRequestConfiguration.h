// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNIMAGEBLURSCOREREQUESTCONFIGURATION_H
#define VNIMAGEBLURSCOREREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNImageBlurScoreRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) NSUInteger blurDeterminationMethod; // ivar: _blurDeterminationMethod
@property (nonatomic) NSUInteger maximumIntermediateSideLength; // ivar: _maximumIntermediateSideLength


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif