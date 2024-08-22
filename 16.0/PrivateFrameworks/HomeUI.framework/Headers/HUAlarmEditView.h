// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUALARMEDITVIEW_H
#define HUALARMEDITVIEW_H

@class UIView, UITableView, UIDatePicker;



@interface HUAlarmEditView : UIView

@property (nonatomic) BOOL accessorySupportsMusicAlarm; // ivar: _accessorySupportsMusicAlarm
@property (readonly, nonatomic) UITableView *settingsTable; // ivar: _settingsTable
@property (readonly, nonatomic) UIDatePicker *timePicker; // ivar: _timePicker


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 supportsMusicAlarm:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif