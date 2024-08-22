// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIPERSONPICKERVIEWCONTROLLER_H
#define SIRIUIPERSONPICKERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol CNContactPickerDelegate;


#import "SiriUIObjectPickerViewController.h"

@interface SiriUIPersonPickerViewController : SiriUIObjectPickerViewController <CNContactPickerDelegate>

 {
    UIViewController *_presentingViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_pickerResponseForPerson:(id)arg0 ;
-(void)_dismissPicker;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;
-(void)showPicker:(id)arg0 ;


@end


#endif