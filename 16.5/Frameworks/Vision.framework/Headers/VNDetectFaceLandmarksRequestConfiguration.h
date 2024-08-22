// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNDETECTFACELANDMARKSREQUESTCONFIGURATION_H
#define VNDETECTFACELANDMARKSREQUESTCONFIGURATION_H

@class NSNumber;


#import "VNImageBasedRequestConfiguration.h"

@interface VNDetectFaceLandmarksRequestConfiguration : VNImageBasedRequestConfiguration

@property (retain, nonatomic) NSNumber *cascadeStepCount; // ivar: _cascadeStepCount
@property (nonatomic) NSUInteger constellation; // ivar: _constellation
@property (nonatomic) BOOL performBlinkDetection; // ivar: _performBlinkDetection
@property (nonatomic) BOOL refineLeftEyeRegion; // ivar: _refineLeftEyeRegion
@property (nonatomic) BOOL refineMouthRegion; // ivar: _refineMouthRegion
@property (nonatomic) BOOL refineRightEyeRegion; // ivar: _refineRightEyeRegion


+(BOOL)revision:(NSUInteger)arg0 supportsConstellation:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif