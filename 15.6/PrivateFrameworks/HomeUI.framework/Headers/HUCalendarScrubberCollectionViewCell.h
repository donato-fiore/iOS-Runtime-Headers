// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCALENDARSCRUBBERCOLLECTIONVIEWCELL_H
#define HUCALENDARSCRUBBERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, UILabel, NSString;



@interface HUCalendarScrubberCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *circleView; // ivar: _circleView
@property (retain, nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (copy, nonatomic) NSString *dateString; // ivar: _dateString
@property (retain, nonatomic) UILabel *dayMonthLabel; // ivar: _dayMonthLabel
@property (copy, nonatomic) NSString *dayOfWeekString; // ivar: _dayOfWeekString
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif