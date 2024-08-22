// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFCRASHBANNER_H
#define _SFCRASHBANNER_H

@class UIView, SFThemeColorEffectView, UIVisualEffectView, UILabel, NSString, UIButton, _SFBarTheme;



@interface _SFCrashBanner : UIView {
    SFThemeColorEffectView *_backdrop;
    UIVisualEffectView *_contentEffectView;
    UIView *_separator;
    UILabel *_label;
    CGSize _cachedLabelLayoutSize;
}


@property (copy, nonatomic) NSString *backdropGroupName;
@property (readonly, nonatomic) NSString *bannerText; // ivar: _bannerText
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (readonly, nonatomic) NSString *manuallyWrappedBannerText; // ivar: _manuallyWrappedBannerText
@property (retain, nonatomic) _SFBarTheme *theme; // ivar: _theme
@property (nonatomic) NSUInteger type; // ivar: _type


-(BOOL)_shouldUseManuallyWrappedCrashMessageForWidth:(CGFloat)arg0 ;
-(id)_bannerTheme;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_labelLayoutSizeForWidth:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif