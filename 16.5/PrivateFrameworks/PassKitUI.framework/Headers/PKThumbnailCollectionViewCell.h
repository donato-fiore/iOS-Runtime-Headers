// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTHUMBNAILCOLLECTIONVIEWCELL_H
#define PKTHUMBNAILCOLLECTIONVIEWCELL_H

@class UIImageView, UILabel, UIImage, CNAvatarView, NSString;


#import "PKDashboardCollectionViewCell.h"

@interface PKThumbnailCollectionViewCell : PKDashboardCollectionViewCell {
    UIImageView *_imageView;
    UILabel *_labelTitle;
    UIImage *_image;
    BOOL _strokeImage;
}


@property (readonly, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_resetFonts;
-(void)_setupImageView:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setImage:(id)arg0 animated:(BOOL)arg1 ;
-(void)setStrokeImage:(BOOL)arg0 ;
-(void)showAvatarView:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif