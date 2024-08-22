// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWEBDATETIMEPOPOVERVIEWCONTROLLER_H
#define UIWEBDATETIMEPOPOVERVIEWCONTROLLER_H

@protocol UIWebFormControl;


#import "UIViewController.h"

@interface UIWebDateTimePopoverViewController : UIViewController

@property (retain, nonatomic) NSObject<UIWebFormControl> *_innerWebDateTimeControl; // ivar: _innerWebDateTimeControl


-(id)initWithDOMHTMLInputElement:(id)arg0 datePickerMode:(NSInteger)arg1 ;
-(void)dealloc;
-(void)loadView;


@end


#endif