// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISUIKITDIALOGOPERATION_H
#define ISUIKITDIALOGOPERATION_H

@class UIAlertController, UIWindow;


#import "ISDialogOperation.h"

@interface ISUIKitDialogOperation : ISDialogOperation {
    UIAlertController *_alert;
    UIWindow *_window;
}




-(void)_cleanupAlert;
-(void)_showAlertWithCompletion:(id)arg0 ;
-(void)handleButtonSelected:(NSInteger)arg0 withResponseDictionary:(id)arg1 ;
-(void)run;


@end


#endif