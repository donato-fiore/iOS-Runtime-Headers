// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKDYNAMICTILEOVERLAYRENDERER_H
#define _MKDYNAMICTILEOVERLAYRENDERER_H

@class VKCustomTileOverlayProviderData;


#import "MKOverlayRenderer.h"

@interface _MKDynamicTileOverlayRenderer : MKOverlayRenderer {
    VKCustomTileOverlayProviderData *_customDataProvider;
}


@property (nonatomic) NSUInteger desiredDisplayRate; // ivar: _desiredDisplayRate
@property (readonly, nonatomic, getter=isFallbackEnabled) BOOL fallbackEnabled;


-(BOOL)_mayExtendOutsideBounds;
-(BOOL)areOverlayResourcesRequired:(id)arg0 ;
-(BOOL)canDrawKey:(struct ? )arg0 withTile:(id)arg1 ;
-(BOOL)overlay:(id)arg0 canDrawKey:(struct ? *)arg1 withData:(id)arg2 ;
-(BOOL)overlayCanProvideCustomTileData:(id)arg0 ;
-(NSUInteger)estimatedCostForTile:(id)arg0 ;
-(NSUInteger)overlay:(id)arg0 estimatedCostForCustomTileData:(id)arg1 ;
-(id)customTileProviderForOverlay:(id)arg0 ;
-(id)initWithOverlay:(id)arg0 ;
-(id)initWithTileOverlay:(id)arg0 ;
-(void)didExitTile:(struct ? )arg0 ;
-(void)drawTileAtPath:(struct ? )arg0 withTile:(id)arg1 inIOSurface:(struct __IOSurface *)arg2 withTimestamp:(CGFloat)arg3 ;
-(void)onVisibleTiles:(struct ? *)arg0 count:(NSUInteger)arg1 ;
-(void)overlay:(id)arg0 didExitKey:(struct ? *)arg1 ;
-(void)overlay:(id)arg0 drawKey:(struct ? *)arg1 withData:(id)arg2 inIOSurface:(struct __IOSurface *)arg3 withTimestamp:(CGFloat)arg4 ;
-(void)overlay:(id)arg0 onVisibleTiles:(id)arg1 ;
-(void)setAlpha:(CGFloat)arg0 ;


@end


#endif