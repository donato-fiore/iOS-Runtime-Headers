// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTACCOUNTINFOOPTION_H
#define UIPRINTACCOUNTINFOOPTION_H

@class NSString, UITextField;
@protocol UITextFieldDelegate;


#import "UIPrintOption.h"

@interface UIPrintAccountInfoOption : UIPrintOption <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UITextField *jobAccountIDTextField; // ivar: _jobAccountIDTextField
@property (readonly) Class superclass;


-(BOOL)canDismiss;
-(BOOL)isJobAccountIDRequired;
-(BOOL)shouldShow;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionTableViewCell;
-(id)summary;
-(void)changeJobAccountID:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)promptForJobAccountID;
-(void)selectJobAccountID;
-(void)updateFromPrintInfo;


@end


#endif