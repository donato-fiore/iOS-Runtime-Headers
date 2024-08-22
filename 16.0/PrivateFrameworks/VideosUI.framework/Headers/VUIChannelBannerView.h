// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUICHANNELBANNERVIEW_H
#define VUICHANNELBANNERVIEW_H

@class UIView, NSArray;


#import "VUIBaseView.h"
#import "VUIProductUberBackgroundView.h"
#import "VUILabel.h"
#import "VUISeparatorView.h"

@interface VUIChannelBannerView : VUIBaseView

@property (retain, nonatomic) UIView *appleTVChannelLogoView; // ivar: _appleTVChannelLogoView
@property (retain, nonatomic) UIView *bgColorView; // ivar: _bgColorView
@property (retain, nonatomic) VUIProductUberBackgroundView *bgImageView; // ivar: _bgImageView
@property (retain, nonatomic) UIView *descriptionTextView; // ivar: _descriptionTextView
@property (retain, nonatomic) VUILabel *disclaimerTextLabel; // ivar: _disclaimerTextLabel
@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) BOOL isDescriptionPreferredOnPhoneSizeClass; // ivar: _isDescriptionPreferredOnPhoneSizeClass
@property (nonatomic) CGFloat logoHeight; // ivar: _logoHeight
@property (retain, nonatomic) VUISeparatorView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) UIView *subscribeButton; // ivar: _subscribeButton
@property (nonatomic) CGFloat subscribeButtonHeight; // ivar: _subscribeButtonHeight
@property (retain, nonatomic) NSArray *textLabels; // ivar: _textLabels
@property (readonly, nonatomic) CGFloat topThreshold;


-(BOOL)_isSubscribed;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutSubviewsWithSize:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)_layoutLabels:(id)arg0 withOrigin:(struct CGPoint )arg1 maxWidth:(CGFloat)arg2 ;
-(void)setVuiBackgroundColor:(id)arg0 ;


@end


#endif