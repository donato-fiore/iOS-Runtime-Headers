// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIALERTVIEW_H
#define AAUIALERTVIEW_H

@class UIAlertView;
@protocol OS_dispatch_semaphore;



@interface AAUIAlertView : UIAlertView {
    NSObject<OS_dispatch_semaphore> *_buttonChosenSemaphore;
    NSInteger _chosenButtonIndex;
    id *_action;
    id *_actionWithText;
}


@property (readonly) NSInteger chosenButtonIndex;


-(id)initWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 action:(id)arg3 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 otherButtonTitle:(id)arg3 action:(id)arg4 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 otherButtonTitle:(id)arg3 textFieldTitle:(id)arg4 action:(id)arg5 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 cancelButtonTitle:(id)arg2 otherButtonTitle:(id)arg3 ;
-(void)alertView:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;


@end


#endif