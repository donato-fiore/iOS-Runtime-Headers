// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCLASSIFYJUNKIMAGEREQUESTCONFIGURATION_H
#define VNCLASSIFYJUNKIMAGEREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNClassifyJunkImageRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) NSUInteger imageCropAndScaleOption; // ivar: _imageCropAndScaleOption


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif