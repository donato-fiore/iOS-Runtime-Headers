// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBUSERALERTVIEW_H
#define DBUSERALERTVIEW_H

@class UIView, UIStackView, UILabel;



@interface DBUserAlertView : UIView

@property (retain, nonatomic) UIStackView *buttonStackView; // ivar: _buttonStackView
@property (readonly, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_buttonFont;
-(id)_buttonWithAlertAction:(id)arg0 ;
-(id)_titleFont;
-(id)initWithAlert:(id)arg0 environmentConfiguration:(id)arg1 ;


@end


#endif