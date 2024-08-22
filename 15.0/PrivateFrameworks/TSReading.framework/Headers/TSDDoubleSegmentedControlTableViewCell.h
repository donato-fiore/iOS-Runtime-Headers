// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDDOUBLESEGMENTEDCONTROLTABLEVIEWCELL_H
#define TSDDOUBLESEGMENTEDCONTROLTABLEVIEWCELL_H

@class UITableViewCell;


#import "TSKSegmentedControl.h"

@interface TSDDoubleSegmentedControlTableViewCell : UITableViewCell

@property (readonly, nonatomic) TSKSegmentedControl *leftSegmentedControl; // ivar: mLeftSegmentedControl
@property (readonly, nonatomic) TSKSegmentedControl *rightSegmentedControl; // ivar: mRightSegmentedControl


-(id)initWithLeftSegmentedControl:(id)arg0 rightSegmentedControl:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif