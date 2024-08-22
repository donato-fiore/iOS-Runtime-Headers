// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTACCOUNTINFOOPTION_H
#define UIPRINTACCOUNTINFOOPTION_H

@class NSString;
@protocol UITextFieldDelegate;


#import "UIPrintOption.h"

@interface UIPrintAccountInfoOption : UIPrintOption <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canDismiss;
-(BOOL)isJobAccountIDRequired;
-(BOOL)shouldShow;
-(id)printOptionTableViewCell;
-(id)summary;
-(void)promptForJobAccountID;
-(void)selectJobAccountID;
-(void)updateJobAccountID:(id)arg0 ;


@end


#endif