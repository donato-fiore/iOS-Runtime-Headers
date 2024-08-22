// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSDASHBOARDESTIMATESVIEW_H
#define CPSDASHBOARDESTIMATESVIEW_H

@class UIView, NSString, UILabel, UIStackView;
@protocol CPSNavigationDisplaying;


#import "CPSTravelEstimatesStringFormatter.h"

@interface CPSDashboardEstimatesView : UIView <CPSNavigationDisplaying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *distanceRemainingLabel; // ivar: _distanceRemainingLabel
@property (retain, nonatomic) UILabel *etaLabel; // ivar: _etaLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *timeRemainingLabel; // ivar: _timeRemainingLabel
@property (retain, nonatomic) CPSTravelEstimatesStringFormatter *travelEstimatesStringFormatter; // ivar: _travelEstimatesStringFormatter


-(id)_labelFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTripEstimates:(id)arg0 ;


@end


#endif