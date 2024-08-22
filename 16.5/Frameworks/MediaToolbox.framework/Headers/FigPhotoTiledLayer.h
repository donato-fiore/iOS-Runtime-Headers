// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGPHOTOTILEDLAYER_H
#define FIGPHOTOTILEDLAYER_H

@class CALayer, CMPhotoTiledLayer;



@interface FigPhotoTiledLayer : CALayer {
    CMPhotoTiledLayer *_tiledLayer;
}


@property (readonly, nonatomic) NSInteger imageOrientation;
@property (readonly, nonatomic) CGSize imageSize;


-(id)initWithContainerData:(id)arg0 containerImageIndex:(NSInteger)arg1 backgroundImageSize:(struct CGSize )arg2 screenSize:(struct CGSize )arg3 ;
-(id)initWithContainerData:(id)arg0 containerImageIndex:(NSInteger)arg1 placeholderImage:(struct CGImage *)arg2 screenSize:(struct CGSize )arg3 ;
-(id)initWithContainerURL:(id)arg0 containerImageIndex:(NSInteger)arg1 backgroundImageSize:(struct CGSize )arg2 screenSize:(struct CGSize )arg3 ;
-(void)dealloc;
-(void)flushCache;
-(void)setVisibleRectangle:(struct CGRect )arg0 zoomScale:(CGFloat)arg1 ;
-(void)sizeToFit;


@end


#endif