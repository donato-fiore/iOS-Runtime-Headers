// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRMUTABLEPOSTERRENDERINGCONFIGURATION_H
#define PRMUTABLEPOSTERRENDERINGCONFIGURATION_H



#import "PRPosterRenderingConfiguration.h"

@interface PRMutablePosterRenderingConfiguration : PRPosterRenderingConfiguration

@property (nonatomic, getter=isDepthEffectDisabled) BOOL depthEffectDisabled; // ivar: _depthEffectDisabled
@property (nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled; // ivar: _parallaxEnabled


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDepthEffectDisabled:(BOOL)arg0 parallaxEnabled:(BOOL)arg1 ;


@end


#endif