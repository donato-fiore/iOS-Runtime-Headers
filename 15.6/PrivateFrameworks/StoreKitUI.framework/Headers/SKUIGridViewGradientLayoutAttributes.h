// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGRIDVIEWGRADIENTLAYOUTATTRIBUTES_H
#define SKUIGRIDVIEWGRADIENTLAYOUTATTRIBUTES_H

@class UICollectionViewLayoutAttributes, IKColor;
@protocol NSCopying;



@interface SKUIGridViewGradientLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>



@property (retain, nonatomic) IKColor *gradientColor; // ivar: _gradientColor


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif