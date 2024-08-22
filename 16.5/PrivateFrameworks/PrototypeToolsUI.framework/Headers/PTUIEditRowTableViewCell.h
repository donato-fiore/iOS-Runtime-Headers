// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTUIEDITROWTABLEVIEWCELL_H
#define PTUIEDITROWTABLEVIEWCELL_H

@class NSString;
@protocol PTUINumericKeypadDelegate, UITextFieldDelegate;


#import "PTUIRowTableViewCell.h"

@interface PTUIEditRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate, UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)cellStyleForRow:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)textForValue:(id)arg0 ;
-(id)valueForText:(id)arg0 ;
-(void)numericKeypadDidUpdateValue:(id)arg0 ;
-(void)numericKeypadWillDismiss:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)updateDisplayedValue;


@end


#endif