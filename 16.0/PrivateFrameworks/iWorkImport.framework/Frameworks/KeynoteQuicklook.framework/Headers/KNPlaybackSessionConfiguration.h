// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNPLAYBACKSESSIONCONFIGURATION_H
#define KNPLAYBACKSESSIONCONFIGURATION_H

@protocol KNPlaybackLayerHost;

#import <Foundation/Foundation.h>


@interface KNPlaybackSessionConfiguration : NSObject

@property (readonly, nonatomic) CGSize boundsSize;
@property (readonly, nonatomic) *CGColorSpace colorSpace;
@property (readonly, nonatomic) BOOL isMetalEnabled;
@property (readonly, nonatomic) BOOL isRealtime;
@property (readonly, nonatomic) BOOL isSceneRenderingEnabled;
@property (readonly, nonatomic) BOOL isWideGamut;
@property (readonly, nonatomic) NSObject<KNPlaybackLayerHost> *layerHost;
@property (readonly, nonatomic) CGFloat pixelAspectRatio;


+(BOOL)canEnableMetal;
+(BOOL)isColorSpaceWideGamut:(struct CGColorSpace *)arg0 ;
+(id)configurationWithLayerHost:(id)arg0 renderingMode:(NSInteger)arg1 ;
+(id)configurationWithOffscreenCGContextBoundsSize:(struct CGSize )arg0 ;
-(CGFloat)canvasViewScaleForUnscaledSize:(struct CGSize )arg0 ;
-(id)configurationWithUpdatedLayerScreenEnvironment;
-(id)initSuperclass;


@end


#endif