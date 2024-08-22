// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTESHAPECELL_H
#define PKPALETTESHAPECELL_H

@class UICollectionViewCell, UIImageView;


#import "PKPaletteShape.h"

@interface PKPaletteShapeCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) PKPaletteShape *shape; // ivar: _shape


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif