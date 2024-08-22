// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNLAYERPLAYBACKSESSIONCONFIGURATION_H
#define KNLAYERPLAYBACKSESSIONCONFIGURATION_H

@protocol KNPlaybackLayerHost;


#import "KNPlaybackSessionConfiguration.h"
#import "KNAnimationScreenEnvironment.h"

@interface KNLayerPlaybackSessionConfiguration : KNPlaybackSessionConfiguration {
    KNAnimationScreenEnvironment *_screenEnvironment;
    BOOL _isMetalEnabled;
    BOOL _isSceneRenderingEnabled;
    id<KNPlaybackLayerHost> *_layerHost;
    CGSize _boundsSize;
}




-(BOOL)isMetalEnabled;
-(BOOL)isSceneRenderingEnabled;
-(CGFloat)pixelAspectRatio;
-(id)configurationWithUpdatedLayerScreenEnvironment;
-(id)description;
-(id)initWithLayerHost:(id)arg0 isMetalEnabled:(BOOL)arg1 isSceneRenderingEnabled:(BOOL)arg2 ;
-(id)layerHost;
-(struct CGColorSpace *)colorSpace;
-(struct CGSize )boundsSize;


@end


#endif