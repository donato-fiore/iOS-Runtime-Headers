// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKRECURRENCEMONTHCHOOSERCONTROLLER_H
#define EKRECURRENCEMONTHCHOOSERCONTROLLER_H

@class NSMutableSet, NSArray;


#import "EKRecurrenceGridChooserController.h"

@interface EKRecurrenceMonthChooserController : EKRecurrenceGridChooserController {
    NSMutableSet *_monthsOfTheYearSet;
}


@property (retain, nonatomic) NSArray *monthsOfTheYear;
@property (nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence; // ivar: _prohibitsMultipleMonthsInYearlyRecurrence


-(NSInteger)frequency;
-(NSInteger)gridViewType;
-(id)cellLabels;
-(id)initWithDate:(id)arg0 ;
-(id)tableViewCell;
-(void)prepareForDisplay;
-(void)refreshCells;
-(void)selectCell:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg0 ;
-(void)updateRecurrenceRuleBuilder:(id)arg0 ;


@end


#endif