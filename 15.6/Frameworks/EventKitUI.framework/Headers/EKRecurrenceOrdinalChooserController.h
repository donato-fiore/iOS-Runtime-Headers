// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKRECURRENCEORDINALCHOOSERCONTROLLER_H
#define EKRECURRENCEORDINALCHOOSERCONTROLLER_H

@class UITableViewCell, NSString;
@protocol EKRecurrenceOrdinalPickerViewControllerDelegate;


#import "EKRecurrenceChooserController.h"
#import "EKRecurrenceOrdinalPickerViewController.h"

@interface EKRecurrenceOrdinalChooserController : EKRecurrenceChooserController <EKRecurrenceOrdinalPickerViewControllerDelegate>

 {
    EKRecurrenceOrdinalPickerViewController *_pickerViewController;
    UITableViewCell *_cell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)heightForRow:(NSInteger)arg0 ;
-(NSInteger)frequency;
-(NSInteger)numberOfRows;
-(id)cellForRow:(NSInteger)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(void)frequencyPickerUpdated:(id)arg0 ;
-(void)updateFromRecurrenceRule:(id)arg0 ;
-(void)updateRecurrenceRuleBuilder:(id)arg0 ;


@end


#endif