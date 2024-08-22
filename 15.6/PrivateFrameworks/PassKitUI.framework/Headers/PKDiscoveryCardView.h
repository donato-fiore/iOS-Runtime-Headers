// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDISCOVERYCARDVIEW_H
#define PKDISCOVERYCARDVIEW_H

@class UIView, PKDiscoveryCard, PKMiniDiscoveryCard, PKDiscoveryMedia, UIImageView, UIColor, UILabel, UITapGestureRecognizer, PKDiscoveryArticleLayout;
@protocol PKDiscoveryCardViewDelegate;


#import "PKDiscoveryCallToActionFooterView.h"
#import "PKContinuousButton.h"
#import "PKDiscoveryCardViewTemplateInformation.h"

@interface PKDiscoveryCardView : UIView {
    PKDiscoveryCard *_card;
    PKMiniDiscoveryCard *_miniCard;
    PKDiscoveryMedia *_largeCardMedia;
    PKDiscoveryMedia *_miniCardMedia;
    UIImageView *_backgroundImageView;
    UIView *_miniCardBackgroundColorView;
    UIColor *_backgroundColor;
    UILabel *_headingLabel;
    UILabel *_titleLabel;
    UIImageView *_shadowView;
    UIImageView *_maskImageView;
    PKDiscoveryCallToActionFooterView *_ctaFooterView;
    UITapGestureRecognizer *_tapRecognizer;
    PKContinuousButton *_dismissButton;
    BOOL _shouldDisplayAsLarge;
    NSInteger _displayType;
    NSInteger _currentCardSize;
}


@property (retain, nonatomic) PKDiscoveryArticleLayout *articleLayout; // ivar: _articleLayout
@property (copy, nonatomic) id *callToActionTappedOverride; // ivar: _callToActionTappedOverride
@property (retain, nonatomic) PKDiscoveryCardViewTemplateInformation *cardTemplateInformation; // ivar: _cardTemplateInformation
@property (weak, nonatomic) NSObject<PKDiscoveryCardViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *dismissAction; // ivar: _dismissAction
@property (nonatomic) BOOL hasSafeAreaInsetOverride; // ivar: _hasSafeAreaInsetOverride
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic, getter=isRemoving) BOOL removing; // ivar: _removing
@property (nonatomic) UIEdgeInsets safeAreaOverrideInsets; // ivar: _safeAreaOverrideInsets


+(CGFloat)compressedHeight;
+(CGFloat)compressedWidth;
+(CGFloat)cornerRadius;
+(CGFloat)expandedHeight;
+(CGFloat)expandedWidth;
+(struct CGSize )compressedSize;
+(struct CGSize )expandedSize;
+(struct CGSize )miniCompressedSize;
-(CGFloat)_yOffsetToHeadingLabel;
-(id)_dismissButtonTintColor;
-(id)_headingLabelFont;
-(id)_headingLabelTextColor;
-(id)_titleLabelFont;
-(id)_titleLabelTextColor;
-(id)initWithArticleLayout:(id)arg0 dismissImage:(id)arg1 cardTemplateInformation:(id)arg2 ;
-(id)initWithArticleLayout:(id)arg0 dismissImage:(id)arg1 cardTemplateInformation:(id)arg2 callToActionTappedOverride:(id)arg3 ;
-(struct CGSize )_miniCardImageSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_currentContentInsets;
-(void)_dismissButtonPressed:(id)arg0 ;
-(void)_updateForDisplayType;
-(void)layoutSubviews;
-(void)loadAndUploadImageData;
-(void)setCardSize:(NSInteger)arg0 ;
-(void)setDisplayType:(NSInteger)arg0 ;
-(void)tapGestureRecognized:(id)arg0 ;


@end


#endif