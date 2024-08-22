// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUICOLLECTIONVIEWLAYOUTATTRIBUTES_H
#define SKUICOLLECTIONVIEWLAYOUTATTRIBUTES_H

@class UICollectionViewLayoutAttributes, UIColor;
@protocol NSCopying;



@interface SKUICollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>



@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) NSInteger position; // ivar: _position
@property (nonatomic) CGFloat zoomingImageAlpha; // ivar: _zoomingImageAlpha
@property (nonatomic) CGFloat zoomingImageImposedAlphaOfOtherViews; // ivar: _zoomingImageImposedAlphaOfOtherViews
@property (nonatomic, getter=_zoomingImageLambda, setter=_setZoomingImageLambda:) CGFloat zoomingImageLambda; // ivar: _zoomingImageLambda
@property (nonatomic) CGFloat zoomingImageWidth; // ivar: _zoomingImageWidth


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif