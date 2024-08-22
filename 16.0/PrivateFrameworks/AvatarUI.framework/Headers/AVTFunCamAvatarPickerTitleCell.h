// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTFUNCAMAVATARPICKERTITLECELL_H
#define AVTFUNCAMAVATARPICKERTITLECELL_H

@class UICollectionViewCell, UILabel;



@interface AVTFunCamAvatarPickerTitleCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)cellIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)updateWithTitle:(id)arg0 ;


@end


#endif