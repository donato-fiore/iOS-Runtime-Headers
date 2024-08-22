// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNCOREMLREQUESTCONFIGURATION_H
#define VNCOREMLREQUESTCONFIGURATION_H

@protocol NSObject><NSCopying;


#import "VNImageBasedRequestConfiguration.h"

@interface VNCoreMLRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) NSUInteger imageCropAndScaleOption; // ivar: _imageCropAndScaleOption
@property (copy, nonatomic) NSObject<NSObject><NSCopying> *modelCachingIdentifier; // ivar: _modelCachingIdentifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;
-(void)updateWithPropertiesOfModel:(id)arg0 ;


@end


#endif