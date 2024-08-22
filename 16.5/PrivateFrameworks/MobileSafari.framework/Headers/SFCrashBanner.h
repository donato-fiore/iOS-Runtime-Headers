// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFCRASHBANNER_H
#define SFCRASHBANNER_H

@class UIVisualEffectView, UILabel, NSString, UIButton;


#import "SFPinnableBanner.h"
#import "SFThemeColorEffectView.h"

@interface SFCrashBanner : SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
    UIVisualEffectView *_contentEffectView;
    UILabel *_label;
    CGSize _cachedLabelLayoutSize;
}


@property (copy, nonatomic) NSString *backdropGroupName;
@property (readonly, nonatomic) NSString *bannerText; // ivar: _bannerText
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (readonly, nonatomic) NSString *manuallyWrappedBannerText; // ivar: _manuallyWrappedBannerText
@property (nonatomic) NSUInteger messageType; // ivar: _messageType


-(BOOL)_shouldUseManuallyWrappedCrashMessageForWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_labelLayoutSizeForWidth:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)themeDidChange;


@end


#endif