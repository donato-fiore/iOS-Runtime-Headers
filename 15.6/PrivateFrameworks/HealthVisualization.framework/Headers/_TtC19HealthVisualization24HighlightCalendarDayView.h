// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC19HEALTHVISUALIZATION24HIGHLIGHTCALENDARDAYVIEW_H
#define _TTC19HEALTHVISUALIZATION24HIGHLIGHTCALENDARDAYVIEW_H

@class UIView, NSDate, NSString;



@interface _TtC19HealthVisualization24HighlightCalendarDayView : UIView {
    ? model;
    ? dayLabel;
    ? todayIndicatorLayer;
    ? ringsRenderer;
    ? activityRingsView;
}


@property (nonatomic, readonly) NSInteger axCircleState;
@property (nonatomic, readonly) NSDate *axDate;
@property (nonatomic, readonly) NSInteger axProbability;
@property (nonatomic, readonly) NSString *axProjectionKind;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif