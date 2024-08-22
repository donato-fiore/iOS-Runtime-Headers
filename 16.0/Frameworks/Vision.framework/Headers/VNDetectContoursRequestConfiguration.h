// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNDETECTCONTOURSREQUESTCONFIGURATION_H
#define VNDETECTCONTOURSREQUESTCONFIGURATION_H

@class NSNumber;


#import "VNImageBasedRequestConfiguration.h"

@interface VNDetectContoursRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) float contrastAdjustment; // ivar: _contrastAdjustment
@property (retain, nonatomic) NSNumber *contrastPivot; // ivar: _contrastPivot
@property (nonatomic) BOOL detectsDarkOnLight; // ivar: _detectsDarkOnLight
@property (nonatomic) BOOL forceUseInputCVPixelBufferDirectly; // ivar: _forceUseInputCVPixelBufferDirectly
@property (nonatomic) BOOL inHierarchy; // ivar: _inHierarchy
@property (nonatomic) NSUInteger maximumImageDimension; // ivar: _maximumImageDimension


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif