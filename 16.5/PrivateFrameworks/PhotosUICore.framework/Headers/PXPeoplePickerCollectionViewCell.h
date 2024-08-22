// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLEPICKERCOLLECTIONVIEWCELL_H
#define PXPEOPLEPICKERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, UILabel;



@interface PXPeoplePickerCollectionViewCell : UICollectionViewCell {
    UIImageView *_badgeView;
}


@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) UILabel *nameLabel; // ivar: _nameLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateContentAlpha;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif