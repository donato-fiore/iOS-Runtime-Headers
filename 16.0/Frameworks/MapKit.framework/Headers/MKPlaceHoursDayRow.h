// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEHOURSDAYROW_H
#define MKPLACEHOURSDAYROW_H

@class NSString, NSLayoutConstraint;
@protocol MKPlaceHoursViewDelegate;


#import "MKPlaceSectionRowView.h"
#import "MKPlaceHoursView.h"

@interface MKPlaceHoursDayRow : MKPlaceSectionRowView <MKPlaceHoursViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKPlaceHoursView *hoursView; // ivar: _hoursView
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *topAnchorToTopLabelBaseline; // ivar: _topAnchorToTopLabelBaseline


-(id)initWithBusinessHours:(id)arg0 frame:(struct CGRect )arg1 ;
-(void)_setUpConstraints;
-(void)_setUpViewsForPlaceHoursDayRow;
-(void)hoursViewDidUpdate:(id)arg0 ;


@end


#endif