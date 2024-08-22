// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKRECURRENCEWEEKDAYCHOOSERCONTROLLER_H
#define EKRECURRENCEWEEKDAYCHOOSERCONTROLLER_H

@class NSMutableArray, NSArray;


#import "EKRecurrenceChooserController.h"

@interface EKRecurrenceWeekdayChooserController : EKRecurrenceChooserController {
    NSMutableArray *_selectedRows;
}


@property (retain, nonatomic) NSMutableArray *cells; // ivar: _cells
@property (retain, nonatomic) NSArray *daysOfTheWeek; // ivar: _daysOfTheWeek


-(CGFloat)heightForRow:(NSInteger)arg0 ;
-(NSInteger)frequency;
-(NSInteger)numberOfRows;
-(id)cellForRow:(NSInteger)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(int)_dayMask;
-(void)_setCell:(id)arg0 selected:(BOOL)arg1 ;
-(void)rowTapped:(NSInteger)arg0 ;
-(void)updateFromRecurrenceRule:(id)arg0 ;
-(void)updateRecurrenceRuleBuilder:(id)arg0 ;


@end


#endif