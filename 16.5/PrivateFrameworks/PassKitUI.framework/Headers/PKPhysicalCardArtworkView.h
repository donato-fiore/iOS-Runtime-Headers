// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPHYSICALCARDARTWORKVIEW_H
#define PKPHYSICALCARDARTWORKVIEW_H

@class UIView, UIImageView, UILabel, UIImage, NSString;



@interface PKPhysicalCardArtworkView : UIView {
    UIImageView *_artworkImageView;
    UILabel *_nameLabel;
}


@property (retain, nonatomic) UIImage *artworkImage; // ivar: _artworkImage
@property (copy, nonatomic) NSString *nameOnCard; // ivar: _nameOnCard


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif