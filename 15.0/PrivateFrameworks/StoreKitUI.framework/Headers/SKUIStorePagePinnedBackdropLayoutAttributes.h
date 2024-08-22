// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISTOREPAGEPINNEDBACKDROPLAYOUTATTRIBUTES_H
#define SKUISTOREPAGEPINNEDBACKDROPLAYOUTATTRIBUTES_H

@class UICollectionViewLayoutAttributes, UIColor, NSString;
@protocol NSCopying;



@interface SKUIStorePagePinnedBackdropLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>



@property (retain, nonatomic) UIColor *backdropColor; // ivar: _backdropColor
@property (copy, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (nonatomic) NSInteger backdropStyle; // ivar: _backdropStyle
@property (nonatomic) BOOL hidesBackdropView; // ivar: _hidesBackdropView
@property (nonatomic) CGFloat transitionProgress; // ivar: _transitionProgress


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif