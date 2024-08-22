// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNDETECTSCREENGAZEREQUESTCONFIGURATION_H
#define VNDETECTSCREENGAZEREQUESTCONFIGURATION_H



#import "VNStatefulRequestConfiguration.h"

@interface VNDetectScreenGazeRequestConfiguration : VNStatefulRequestConfiguration

@property (nonatomic) NSInteger temporalSmoothingFrameCount; // ivar: _temporalSmoothingFrameCount


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif