// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKAPPMENUCOLLECTIONVIEWCELL_H
#define CKAPPMENUCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, UIView, UILabel;
@protocol CKAppMenuCollectionViewCellDelegate;



@interface CKAppMenuCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) NSObject<CKAppMenuCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIView *selectionView; // ivar: _selectionView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didHoverOverCell:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif