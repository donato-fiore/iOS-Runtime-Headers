// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNOFFSCREENCGCONTEXTPLAYBACKSESSIONCONFIGURATION_H
#define KNOFFSCREENCGCONTEXTPLAYBACKSESSIONCONFIGURATION_H



#import "KNPlaybackSessionConfiguration.h"

@interface KNOffscreenCGContextPlaybackSessionConfiguration : KNPlaybackSessionConfiguration {
    CGSize _boundsSize;
}




-(BOOL)isMetalEnabled;
-(BOOL)isSceneRenderingEnabled;
-(CGFloat)pixelAspectRatio;
-(id)configurationWithUpdatedLayerScreenEnvironment;
-(id)description;
-(id)initWithOffscreenCGContextBoundsSize:(struct CGSize )arg0 ;
-(id)layerHost;
-(struct CGColorSpace *)colorSpace;
-(struct CGSize )boundsSize;


@end


#endif