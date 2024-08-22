// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNIMAGEBASEDREQUESTCONFIGURATION_H
#define VNIMAGEBASEDREQUESTCONFIGURATION_H

@class NSArray;


#import "VNRequestConfiguration.h"

@interface VNImageBasedRequestConfiguration : VNRequestConfiguration

@property (copy, nonatomic) NSArray *inputDetectedObjectObservations; // ivar: _inputDetectedObjectObservations
@property (copy, nonatomic) NSArray *inputFaceObservations; // ivar: _inputFaceObservations
@property (nonatomic) CGRect regionOfInterest; // ivar: _regionOfInterest


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif