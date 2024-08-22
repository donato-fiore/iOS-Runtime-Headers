// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINFOGRAPHICBUTTONCELL_H
#define HKINFOGRAPHICBUTTONCELL_H

@class UITableViewCell, UIButton, UIButtonConfiguration;



@interface HKInfographicButtonCell : UITableViewCell

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (copy, nonatomic) id *buttonTapHandler; // ivar: _buttonTapHandler
@property (copy, nonatomic) UIButtonConfiguration *configuration; // ivar: _configuration


-(void)_constrainButton;
-(void)_didTapButton;


@end


#endif