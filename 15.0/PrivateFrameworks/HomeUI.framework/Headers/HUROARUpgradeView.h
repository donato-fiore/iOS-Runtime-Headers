// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUROARUPGRADEVIEW_H
#define HUROARUPGRADEVIEW_H

@class UIView, UIButton, NSMutableArray, UIImageView, UILabel;



@interface HUROARUpgradeView : UIView

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UIImageView *deviceImageView; // ivar: _deviceImageView
@property (retain, nonatomic) UILabel *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UILabel *title; // ivar: _title


-(id)init;
-(void)layoutSubviews;


@end


#endif