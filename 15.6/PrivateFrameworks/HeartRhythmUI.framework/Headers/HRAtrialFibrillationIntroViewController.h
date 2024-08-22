// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRATRIALFIBRILLATIONINTROVIEWCONTROLLER_H
#define HRATRIALFIBRILLATIONINTROVIEWCONTROLLER_H

@class HKViewController, UILabel, UIView, UIScrollView;



@interface HRAtrialFibrillationIntroViewController : HKViewController

@property (retain, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) UIView *heroView; // ivar: _heroView
@property (retain, nonatomic) UIView *learnMoreContentView; // ivar: _learnMoreContentView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)_assetImageBottomToTitleFirstBaseline;
-(CGFloat)_bodyLastBaselineToContentBottom;
-(CGFloat)_titleLastBaselineToBodyFirstBaseline;
-(CGFloat)_titleTopToFirstBaselineLeading;
-(id)_bodyFont;
-(id)_bodyFontTextStyle;
-(id)_createHeroView;
-(id)_titleFont;
-(id)_titleFontTextStyle;
-(void)setUpConstraints;
-(void)setUpUI;
-(void)viewDidLoad;


@end


#endif