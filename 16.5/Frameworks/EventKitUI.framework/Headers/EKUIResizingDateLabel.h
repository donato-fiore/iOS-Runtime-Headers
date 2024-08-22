// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIRESIZINGDATELABEL_H
#define EKUIRESIZINGDATELABEL_H

@class UILabel, NSDate;



@interface EKUIResizingDateLabel : UILabel

@property (retain) NSDate *date; // ivar: _date


-(CGFloat)minDateLabelWidth;
-(id)stringForDateThatFits;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif