// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11WEATHERMAPS32MAPKITDYNAMICTILEOVERLAYRENDERER_H
#define _TTC11WEATHERMAPS32MAPKITDYNAMICTILEOVERLAYRENDERER_H

@class MKDynamicTileOverlayRenderer;



@interface _TtC11WeatherMaps32MapKitDynamicTileOverlayRenderer : MKDynamicTileOverlayRenderer {
    ? dynamicOverlay;
    ? overlayRenderer;
    ? signposter;
    ? defaultFramerate;
    ? renderTimer;
    ? animationPosition;
    ? lastProcessedVisibleTiles;
}


@property (nonatomic, readonly) BOOL fallbackEnabled;


-(BOOL)canDrawKey:(struct ? )arg0 withTile:(id)arg1 ;
-(BOOL)isFallbackEnabled;
-(id)initWithOverlay:(id)arg0 ;
-(id)initWithTileOverlay:(id)arg0 ;
-(void)didExitTile:(struct ? )arg0 ;
-(void)drawTileAtPath:(struct ? )arg0 withTile:(id)arg1 inIOSurface:(struct __IOSurface *)arg2 withTimestamp:(CGFloat)arg3 ;
-(void)onVisibleTiles:(struct ? *)arg0 count:(NSInteger)arg1 ;


@end


#endif