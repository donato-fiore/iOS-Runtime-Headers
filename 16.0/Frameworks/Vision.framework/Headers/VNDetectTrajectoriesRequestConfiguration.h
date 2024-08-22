// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNDETECTTRAJECTORIESREQUESTCONFIGURATION_H
#define VNDETECTTRAJECTORIESREQUESTCONFIGURATION_H



#import "VNStatefulRequestConfiguration.h"

@interface VNDetectTrajectoriesRequestConfiguration : VNStatefulRequestConfiguration

@property (nonatomic) float objectMaximumNormalizedRadius; // ivar: _objectMaximumNormalizedRadius
@property (nonatomic) float objectMinimumNormalizedRadius; // ivar: _objectMinimumNormalizedRadius
@property (nonatomic) ? targetFrameTime; // ivar: _targetFrameTime
@property (nonatomic) NSInteger trajectoryLength; // ivar: _trajectoryLength


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif