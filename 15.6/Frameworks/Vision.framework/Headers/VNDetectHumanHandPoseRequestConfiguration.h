// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNDETECTHUMANHANDPOSEREQUESTCONFIGURATION_H
#define VNDETECTHUMANHANDPOSEREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNDetectHumanHandPoseRequestConfiguration : VNImageBasedRequestConfiguration

@property NSUInteger maximumHandCount; // ivar: _maximumHandCount


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif