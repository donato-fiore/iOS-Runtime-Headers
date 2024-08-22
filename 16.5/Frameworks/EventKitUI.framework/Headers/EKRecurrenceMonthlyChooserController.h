// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKRECURRENCEMONTHLYCHOOSERCONTROLLER_H
#define EKRECURRENCEMONTHLYCHOOSERCONTROLLER_H

@class UITableViewCell;
@protocol EKRecurrenceChooserControllerDelegate;


#import "EKRecurrenceChooserController.h"
#import "EKRecurrenceMonthDayChooserController.h"
#import "EKRecurrenceOrdinalChooserController.h"

@interface EKRecurrenceMonthlyChooserController : EKRecurrenceChooserController {
    EKRecurrenceMonthDayChooserController *_monthDayChooser;
    EKRecurrenceOrdinalChooserController *_ordinalChooser;
    id<EKRecurrenceChooserControllerDelegate> *_delegate;
    NSInteger _selectedRow;
    UITableViewCell *_onEachCell;
    UITableViewCell *_onTheCell;
}


@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;


-(BOOL)drawBackgroundForRow:(NSInteger)arg0 ;
-(CGFloat)heightForRow:(NSInteger)arg0 ;
-(NSInteger)frequency;
-(NSInteger)numberOfRows;
-(id)_currentChooser;
-(id)backgroundColor;
-(id)cellForRow:(NSInteger)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(void)_selectRow:(NSInteger)arg0 ;
-(void)rowTapped:(NSInteger)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)updateFromRecurrenceRule:(id)arg0 ;
-(void)updateRecurrenceRuleBuilder:(id)arg0 ;


@end


#endif