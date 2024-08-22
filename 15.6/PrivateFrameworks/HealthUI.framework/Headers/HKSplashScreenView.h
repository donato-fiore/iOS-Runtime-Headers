// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPLASHSCREENVIEW_H
#define HKSPLASHSCREENVIEW_H

@class UIView, UIVisualEffectView, UIButton, UITableView, UILabel;



@interface HKSplashScreenView : UIView

@property (retain, nonatomic) UIVisualEffectView *bottomBlurView; // ivar: _bottomBlurView
@property (retain, nonatomic) UIButton *continueButton; // ivar: _continueButton
@property (retain, nonatomic) UITableView *featureTableView; // ivar: _featureTableView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIVisualEffectView *topBlurView; // ivar: _topBlurView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateForFontOrTextChange;
-(void)updateTableViewInsetsForHeaderAndFooterBlurView;


@end


#endif