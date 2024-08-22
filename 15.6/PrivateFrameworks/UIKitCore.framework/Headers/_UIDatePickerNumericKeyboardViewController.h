// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDATEPICKERNUMERICKEYBOARDVIEWCONTROLLER_H
#define _UIDATEPICKERNUMERICKEYBOARDVIEWCONTROLLER_H



#import "UIViewController.h"
#import "UIKeyboard.h"

@interface _UIDatePickerNumericKeyboardViewController : UIViewController

@property (readonly, nonatomic) UIKeyboard *keyboard; // ivar: _keyboard


-(BOOL)_canShowWhileLocked;
-(id)init;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif