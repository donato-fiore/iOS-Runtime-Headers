// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTERSETUPCONNECTINGVIEW_H
#define UIPRINTERSETUPCONNECTINGVIEW_H

@class UIView, UIActivityIndicatorView, UILabel;



@interface UIPrinterSetupConnectingView : UIView

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) CGFloat presentationTime; // ivar: _presentationTime


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)presentView;
-(void)setMessage:(id)arg0 active:(BOOL)arg1 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif