// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19HEALTHVISUALIZATION21HIGHLIGHTCALENDARVIEW_H
#define _TTC19HEALTHVISUALIZATION21HIGHLIGHTCALENDARVIEW_H

@class NUIContainerGridView;



@interface _TtC19HealthVisualization21HighlightCalendarView : NUIContainerGridView {
    ? longWeekdayStrings;
    ? shortWeekdayStrings;
    ? $__lazy_storage_$_ringsRenderer;
    ? weekdayLabels;
    ? monthLabels;
}




-(id)initWithArrangedSubviewRows:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif