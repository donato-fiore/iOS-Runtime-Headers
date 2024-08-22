// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINFOGRAPHICBUTTONVIEWCELL_H
#define HKINFOGRAPHICBUTTONVIEWCELL_H

@class UITableViewCell, UIButton;



@interface HKInfographicButtonViewCell : UITableViewCell

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (copy, nonatomic) id *didTapButton; // ivar: _didTapButton


-(id)_buttonWithFont:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)tapped;


@end


#endif