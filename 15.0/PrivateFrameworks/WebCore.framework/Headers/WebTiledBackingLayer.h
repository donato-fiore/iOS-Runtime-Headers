// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBTILEDBACKINGLAYER_H
#define WEBTILEDBACKINGLAYER_H

@class CALayer;



@interface WebTiledBackingLayer : CALayer {
    unique_ptr<WebCore::TileController, std::default_delete<WebCore::TileController>> _tileController;
}




-(*void)createTileController:(*void)arg0 ;
-(BOOL)drawsAsynchronously;
-(BOOL)isOpaque;
-(BOOL)supportsSubpixelAntialiasedText;
-(BOOL)wantsDeepColorBackingStore;
-(CGFloat)contentsScale;
-(id)actionForKey:(id)arg0 ;
-(id)init;
-(struct TiledBacking *)tiledBacking;
-(void)dealloc;
-(void)invalidate;
-(void)setBorderColor:(struct CGColor *)arg0 ;
-(void)setBorderWidth:(CGFloat)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)setDrawsAsynchronously:(BOOL)arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setSupportsSubpixelAntialiasedText:(BOOL)arg0 ;
-(void)setWantsDeepColorBackingStore:(BOOL)arg0 ;


@end


#endif