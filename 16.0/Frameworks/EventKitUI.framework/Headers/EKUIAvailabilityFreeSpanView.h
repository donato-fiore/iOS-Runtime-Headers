// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIAVAILABILITYFREESPANVIEW_H
#define EKUIAVAILABILITYFREESPANVIEW_H

@class UIView, UIColor, NSDate;



@interface EKUIAvailabilityFreeSpanView : UIView

@property (retain) UIColor *borderColor; // ivar: _borderColor
@property (retain) NSDate *endDate; // ivar: _endDate
@property (retain) NSDate *startDate; // ivar: _startDate


-(id)initWithFrame:(struct CGRect )arg0 andColor:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 isFreeSpan:(BOOL)arg4 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif