// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKWATCHHEROIMAGEVIEW_H
#define PKWATCHHEROIMAGEVIEW_H

@class UIView, BPSIllustratedWatchView, UILabel, UIImageView, UIImage;



@interface PKWatchHeroImageView : UIView {
    BPSIllustratedWatchView *_watchView;
    UILabel *_doneLabel;
    UIImageView *_wallpaperImageView;
    UIImageView *_cardArtImageView;
}


@property (readonly, nonatomic) CGRect cardFrame;
@property (retain, nonatomic) UIImage *cardImage;
@property (nonatomic) BOOL hideDoneLabel; // ivar: _hideDoneLabel
@property (nonatomic) NSUInteger size; // ivar: _size
@property (retain, nonatomic) UIImage *wallpaperImage;
@property (readonly, nonatomic) CGFloat watchDeviceImageScaleFactor;
@property (readonly, nonatomic) CGPoint watchScreenCenter;
@property (readonly, nonatomic) CGRect watchScreenFrame;


+(struct CGSize )heroWatchImageSize;
+(struct CGSize )recommendedCardImageSize;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )spaceBelowCardFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updatedAccessibilityLabel;
-(void)layoutSubviews;


@end


#endif