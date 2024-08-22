// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNGENERATEFACESEGMENTSREQUESTCONFIGURATION_H
#define VNGENERATEFACESEGMENTSREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNGenerateFaceSegmentsRequestConfiguration : VNImageBasedRequestConfiguration {
    float _faceBoundingBoxExpansionRatio;
}


@property (nonatomic) float faceBoundingBoxExpansionRatio;


+(BOOL)expansionRatioWithinValidRange:(float)arg0 ;
+(float)beginRangeFaceBoundingBoxExpansionRatio;
+(float)defaultFaceBoundingBoxExpansionRatio;
+(float)endRangeFaceBoundingBoxExpansionRatio;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif