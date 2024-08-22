// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBGLLAYER_H
#define WEBGLLAYER_H

@class CALayer;



@interface WebGLLayer : CALayer {
    BOOL _preparedForDisplay;
    optional<WebGLLayerSwapChain> _swapChain;
}




-(*void)swapChain;
-(id)initWithDevicePixelRatio:(float)arg0 contentsOpaque:(BOOL)arg1 ;
-(struct CGImage *)copyImageSnapshotWithColorSpace:(struct CGColorSpace *)arg0 ;
-(void)display;
-(void)prepareForDisplay;
-(void)setAnchorPoint:(struct CGPoint )arg0 ;
-(void)setTransform:(struct CATransform3D )arg0 ;


@end


#endif