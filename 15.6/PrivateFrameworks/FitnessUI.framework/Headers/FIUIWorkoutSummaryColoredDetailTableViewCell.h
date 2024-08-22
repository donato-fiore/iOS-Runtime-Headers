// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIUIWORKOUTSUMMARYCOLOREDDETAILTABLEVIEWCELL_H
#define FIUIWORKOUTSUMMARYCOLOREDDETAILTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIFont, UIView, NSString, UIColor, UIButton;



@interface FIUIWorkoutSummaryColoredDetailTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_secondTitleLabel;
    UILabel *_secondDetailLabel;
    UILabel *_noDataLabel;
    UIFont *_detailFont;
    UIFont *_suffixFont;
    UIView *_dividerView;
    NSString *_detailString;
    NSString *_suffixString;
    UIColor *_textColor;
    BOOL _shouldForceLTRForDetailString;
}


@property (retain, nonatomic) UIButton *customAccessoryButton; // ivar: _customAccessoryButton
@property (retain, nonatomic) UIView *optionalButtonView; // ivar: _optionalButtonView
@property (nonatomic) BOOL showBackgroundButton; // ivar: _showBackgroundButton


+(CGFloat)rowHeightWithNoDataString:(id)arg0 ;
+(CGFloat)rowHeightWithSecondMetric;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_resizeFontsIfNeededToFitWidth:(CGFloat)arg0 ;
-(void)_setDefaultValueFontSizes;
-(void)_setupUI;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setDetailString:(id)arg0 suffixString:(id)arg1 textColor:(id)arg2 shouldForceLTRForDetailString:(BOOL)arg3 ;
-(void)setLineHidden:(BOOL)arg0 ;
-(void)setNoDataString:(id)arg0 textColor:(id)arg1 ;
-(void)setSecondMetricTitle:(id)arg0 detailString:(id)arg1 detailColor:(id)arg2 ;
-(void)setTitleString:(id)arg0 ;


@end


#endif