// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOSPANORAMAHEADERVIEW_H
#define PUPHOTOSPANORAMAHEADERVIEW_H

@class UICollectionReusableView, UILabel;



@interface PUPhotosPanoramaHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setTitle:(id)arg0 ;


@end


#endif