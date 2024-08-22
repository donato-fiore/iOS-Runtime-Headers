// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCLASSIFYIMAGEREQUESTCONFIGURATION_H
#define VNCLASSIFYIMAGEREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"
#import "VNClassificationCustomHierarchy.h"

@interface VNClassifyImageRequestConfiguration : VNImageBasedRequestConfiguration

@property (retain, nonatomic) VNClassificationCustomHierarchy *customHierarchy; // ivar: _customHierarchy
@property (nonatomic) NSUInteger imageCropAndScaleOption; // ivar: _imageCropAndScaleOption
@property (nonatomic) NSUInteger maximumHierarchicalObservations; // ivar: _maximumHierarchicalObservations
@property (nonatomic) NSUInteger maximumLeafObservations; // ivar: _maximumLeafObservations


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif