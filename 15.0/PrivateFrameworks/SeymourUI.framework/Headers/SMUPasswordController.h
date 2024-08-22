// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SMUPASSWORDCONTROLLER_H
#define SMUPASSWORDCONTROLLER_H

@class NSString, UIViewController;
@protocol _TVRAlertControllerDelegate;

#import <Foundation/Foundation.h>

#import "SMUPasswordAlertController.h"

@interface SMUPasswordController : NSObject <_TVRAlertControllerDelegate>

 {
    SMUPasswordAlertController *_alertController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *passwordEnteredHandler; // ivar: _passwordEnteredHandler
@property (copy, nonatomic) id *passwordEntryCancelledHandler; // ivar: _passwordEntryCancelledHandler
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *viewController;


-(id)initWithTitle:(id)arg0 passwordLength:(NSInteger)arg1 ;
-(void)alertController:(id)arg0 enteredText:(id)arg1 ;
-(void)alertController:(id)arg0 generatedTextInputPayload:(id)arg1 ;
-(void)alertControllerCancelled:(id)arg0 ;
-(void)alertControllerHitKeyboardReturnKey:(id)arg0 ;
-(void)alertControllerPressedDictationButton:(id)arg0 ;
-(void)alertControllerReleasedDictationButton:(id)arg0 ;
-(void)dismiss;


@end


#endif