// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNDETECTOBJECTATPOINTREQUESTCONFIGURATION_H
#define VNDETECTOBJECTATPOINTREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNDetectObjectAtPointRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) CGPoint inputPoint; // ivar: _inputPoint


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif