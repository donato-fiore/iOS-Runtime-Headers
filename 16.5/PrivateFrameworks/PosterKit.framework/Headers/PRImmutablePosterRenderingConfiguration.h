// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRIMMUTABLEPOSTERRENDERINGCONFIGURATION_H
#define PRIMMUTABLEPOSTERRENDERINGCONFIGURATION_H



#import "PRPosterRenderingConfiguration.h"

@interface PRImmutablePosterRenderingConfiguration : PRPosterRenderingConfiguration {
    BOOL _depthEffectDisabled;
    BOOL _parallaxEnabled;
}




-(BOOL)isDepthEffectDisabled;
-(BOOL)isParallaxEnabled;
-(id)initWithDepthEffectDisabled:(BOOL)arg0 parallaxEnabled:(BOOL)arg1 ;


@end


#endif