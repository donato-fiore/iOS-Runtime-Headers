// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSROUTEESTIMATESVIEW_H
#define CPSROUTEESTIMATESVIEW_H

@class UIView, NSTimeZone;


#import "CPSLabeledValueView.h"
#import "CPSTravelEstimatesStringFormatter.h"

@interface CPSRouteEstimatesView : UIView

@property (readonly, nonatomic) CPSLabeledValueView *arrivalTimeView; // ivar: _arrivalTimeView
@property (copy, nonatomic) NSTimeZone *arrivalTimeZone;
@property (readonly, nonatomic) CPSLabeledValueView *distanceRemainingView; // ivar: _distanceRemainingView
@property (nonatomic) NSUInteger timeRemainingColor; // ivar: _timeRemainingColor
@property (readonly, nonatomic) CPSLabeledValueView *timeRemainingView; // ivar: _timeRemainingView
@property (readonly, nonatomic) CPSTravelEstimatesStringFormatter *travelEstimatesStringFormatter; // ivar: _travelEstimatesStringFormatter


-(id)initWithStyle:(NSUInteger)arg0 ;
-(void)_updateTextColors;
-(void)setCurrentTravelEstimates:(id)arg0 ;
-(void)setTripEstimateStyle:(NSUInteger)arg0 ;


@end


#endif