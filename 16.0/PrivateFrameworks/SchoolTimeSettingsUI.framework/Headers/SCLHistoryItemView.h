// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLHISTORYITEMVIEW_H
#define SCLHISTORYITEMVIEW_H

@class UIView, SCLHistoryGroup, UILabel, SCLTimeIntervalsFormatter, NSArray;


#import "SCLUnlockHistoryItemFormatter.h"

@interface SCLHistoryItemView : UIView

@property (copy, nonatomic) SCLHistoryGroup *historyGroup; // ivar: _historyGroup
@property (retain, nonatomic) SCLUnlockHistoryItemFormatter *historyItemFormatter; // ivar: _historyItemFormatter
@property (retain, nonatomic) UILabel *intervalLabel; // ivar: _intervalLabel
@property (retain, nonatomic) SCLTimeIntervalsFormatter *intervalsFormatter; // ivar: _intervalsFormatter
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSArray *unconditionalConstraints; // ivar: _unconditionalConstraints
@property (retain, nonatomic) NSArray *verticalLayoutConstraints; // ivar: _verticalLayoutConstraints


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(void)updateConstraints;


@end


#endif