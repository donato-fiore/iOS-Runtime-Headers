// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNDETECTRECTANGLESREQUESTCONFIGURATION_H
#define VNDETECTRECTANGLESREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNDetectRectanglesRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) float maximumAspectRatio; // ivar: _maximumAspectRatio
@property (nonatomic) NSUInteger maximumObservations; // ivar: _maximumObservations
@property (nonatomic) float minimumAspectRatio; // ivar: _minimumAspectRatio
@property (nonatomic) float minimumConfidence; // ivar: _minimumConfidence
@property (nonatomic) float minimumSize; // ivar: _minimumSize
@property (nonatomic) float quadratureTolerance; // ivar: _quadratureTolerance
@property (nonatomic) NSUInteger requiredVersion; // ivar: _requiredVersion


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif