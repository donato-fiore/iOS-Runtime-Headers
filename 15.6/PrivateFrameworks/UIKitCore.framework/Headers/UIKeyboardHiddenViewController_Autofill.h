// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDHIDDENVIEWCONTROLLER_AUTOFILL_H
#define UIKEYBOARDHIDDENVIEWCONTROLLER_AUTOFILL_H

@class NSString;
@protocol _SFAppAutoFillPasswordViewControllerDelegate;


#import "UIKeyboardHiddenViewController.h"

@interface UIKeyboardHiddenViewController_Autofill : UIKeyboardHiddenViewController <_SFAppAutoFillPasswordViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)presentViewController:(BOOL)arg0 ;
-(void)setAutofillVC:(id)arg0 ;


@end


#endif