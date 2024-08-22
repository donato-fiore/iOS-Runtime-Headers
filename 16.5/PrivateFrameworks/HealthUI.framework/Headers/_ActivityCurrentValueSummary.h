// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ACTIVITYCURRENTVALUESUMMARY_H
#define _ACTIVITYCURRENTVALUESUMMARY_H

@class HKActivitySummary, NSDateComponents;



@interface _ActivityCurrentValueSummary : HKActivitySummary

@property (nonatomic) CGFloat collatedSummaryCount; // ivar: _collatedSummaryCount
@property (retain, nonatomic) NSDateComponents *collationDateComponents; // ivar: _collationDateComponents
@property (nonatomic) NSInteger timeScope; // ivar: _timeScope


-(id)_addQuantity:(id)arg0 toQuantity:(id)arg1 ;
-(id)_divideQuantity:(id)arg0 divisor:(CGFloat)arg1 ;
-(id)_maxQuantity:(id)arg0 otherQuantity:(id)arg1 ;
-(id)dateComponentsForCalendar:(id)arg0 ;
-(id)initWithTimeScope:(NSInteger)arg0 ;
-(void)combineWithActivitySummary:(id)arg0 ;
-(void)finishCollatingSummaryWithGraphView:(id)arg0 ;


@end


#endif