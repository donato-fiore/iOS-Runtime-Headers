// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPAPERSTYLECELL_H
#define ICPAPERSTYLECELL_H

@class UICollectionViewCell, UIImageView, UIView;



@interface ICPaperStyleCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIView *selectionView; // ivar: _selectionView


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityHint;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredTintColor;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupCell;


@end


#endif