// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIUSERNOTIFICATIONALERTVIEW_H
#define _UIUSERNOTIFICATIONALERTVIEW_H



#import "UIAlertView.h"

@interface _UIUserNotificationAlertView : UIAlertView {
    *__CFUserNotification _userNotification;
    *__CFRunLoopSource _userNotificationRunLoopSource;
    id *_strongDelegate;
    id *_retainedSelf;
}




+(void)initialize;
-(BOOL)isVisible;
-(NSInteger)addButtonWithTitle:(id)arg0 ;
-(id)textFieldAtIndex:(NSInteger)arg0 ;
-(void)_cancelUserNotification;
-(void)_removeObservervations;
-(void)cancelAlertView;
-(void)dealloc;
-(void)dismissWithClickedButtonIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)setHostedWindow:(id)arg0 ;
-(void)setRemoteViewController:(id)arg0 ;
-(void)show;


@end


#endif