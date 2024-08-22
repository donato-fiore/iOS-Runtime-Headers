// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCELLULARSETUPLOADINGVIEW_H
#define TSCELLULARSETUPLOADINGVIEW_H

@class UIView, UILabel, UIActivityIndicatorView;



@interface TSCellularSetupLoadingView : UIView

@property (retain, nonatomic) UILabel *firstLabel; // ivar: _firstLabel
@property (nonatomic) BOOL isRemotePlan; // ivar: _isRemotePlan
@property (retain, nonatomic) UILabel *secondLabel; // ivar: _secondLabel
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupActivityIndicator;
-(void)_setupLabels;
-(void)layoutSubviews;


@end


#endif