// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKRECURRENCEMONTHDAYCHOOSERCONTROLLER_H
#define EKRECURRENCEMONTHDAYCHOOSERCONTROLLER_H

@class NSMutableSet;


#import "EKRecurrenceGridChooserController.h"

@interface EKRecurrenceMonthDayChooserController : EKRecurrenceGridChooserController {
    NSMutableSet *_daysOfTheMonthSet;
}


@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence; // ivar: _prohibitsMultipleDaysInMonthlyRecurrence


-(NSInteger)frequency;
-(NSInteger)gridViewType;
-(id)cellLabels;
-(id)daysOfTheMonth;
-(id)initWithDate:(id)arg0 ;
-(void)prepareForDisplay;
-(void)refreshCells;
-(void)selectCell:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)setDaysOfTheMonth:(id)arg0 ;
-(void)updateFromRecurrenceRule:(id)arg0 ;
-(void)updateRecurrenceRuleBuilder:(id)arg0 ;


@end


#endif