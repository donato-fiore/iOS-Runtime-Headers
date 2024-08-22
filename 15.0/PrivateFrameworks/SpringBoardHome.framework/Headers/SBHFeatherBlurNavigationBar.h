// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHFEATHERBLURNAVIGATIONBAR_H
#define SBHFEATHERBLURNAVIGATIONBAR_H

@class UINavigationBar, UINavigationBarAppearance, UILabel, UINavigationItem, NSArray, UIView, SBFFeatherBlurView;



@interface SBHFeatherBlurNavigationBar : UINavigationBar {
    UINavigationBarAppearance *_barAppearance;
    UILabel *_featherBlurTitleLabel;
    UINavigationItem *_configuredForItem;
    NSArray *_maskLayers;
    CGFloat _largeTextHeight;
    UIView *_capturedLargeTextLabelContainerView;
    UIView *_capturedTinyTextLabelContainerView;
}


@property (nonatomic) BOOL allowsAnimatedUpdating; // ivar: _allowsAnimatedUpdating
@property (retain, nonatomic) SBFFeatherBlurView *featherBlurBackgroundView; // ivar: _featherBlurBackgroundView
@property (readonly, nonatomic) CGRect gradientMaskFrame; // ivar: _gradientMaskFrame
@property (readonly, nonatomic) CGFloat sb_maximumNavbarHeight; // ivar: _sb_maximumNavbarHeight
@property (readonly, nonatomic) CGFloat sb_minimumNavbarHeight; // ivar: _sb_minimumNavbarHeight


-(CGFloat)_topMargin;
-(NSInteger)barPosition;
-(id)_capturedLargeTextLabelContainerView;
-(id)_capturedTinyTextLabelContainerView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_calculateCompactNavBarFrame;
-(struct CGRect )_calculateFeatherBlurBackgroundViewFrame;
-(void)_updateAppearance;
-(void)_updateHeights;
-(void)_updateLabel;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif