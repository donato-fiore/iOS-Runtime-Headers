// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBALERTCONTROLLER_H
#define UIKBALERTCONTROLLER_H

@protocol UIKBAlertControllerDelegate;


#import "UIAlertController.h"

@interface UIKBAlertController : UIAlertController

@property (nonatomic) NSObject<UIKBAlertControllerDelegate> *kbDelegate; // ivar: _kbDelegate


-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif