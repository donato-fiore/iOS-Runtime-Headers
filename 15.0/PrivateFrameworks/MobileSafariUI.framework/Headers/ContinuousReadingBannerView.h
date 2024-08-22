// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CONTINUOUSREADINGBANNERVIEW_H
#define CONTINUOUSREADINGBANNERVIEW_H

@class UIView, UIImage, UIImageView, NSString, UILabel, SFBannerTheme;


#import "ContinuousReadingItem.h"

@interface ContinuousReadingBannerView : UIView {
    UIView *_topHairline;
    UIView *_bottomHairline;
}


@property (readonly, retain, nonatomic) ContinuousReadingItem *continuousReadingItem; // ivar: _continuousReadingItem
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) SFBannerTheme *theme; // ivar: _theme
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly, nonatomic) CGRect titleRect;
@property (nonatomic) UIEdgeInsets topHairlineInsets; // ivar: _topHairlineInsets


+(id)hairlineColor;
+(id)makeHairlineSeparator;
-(CGFloat)_textBaseline;
-(id)_bottomHairline;
-(id)_topHairline;
-(id)initWithContinuousReadingItem:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_scaledImageSize;
-(void)_updateImage;
-(void)_updateLabels;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif