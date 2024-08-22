// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMECARDSHARINGONBOARDINGAVATARCAROUSELCELL_H
#define CNMECARDSHARINGONBOARDINGAVATARCAROUSELCELL_H

@class UICollectionViewCell, NSUUID, UIImage, UIImageView, UILabel, NSString;



@interface CNMeCardSharingOnboardingAvatarCarouselCell : UICollectionViewCell

@property (retain, nonatomic) NSUUID *displaySessionUUID; // ivar: _displaySessionUUID
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) CGFloat imageInsetPercentage; // ivar: _imageInsetPercentage
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *title;


+(id)cellIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif