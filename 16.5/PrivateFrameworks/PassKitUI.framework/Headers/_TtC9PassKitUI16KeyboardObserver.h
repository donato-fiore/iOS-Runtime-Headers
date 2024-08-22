// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9PASSKITUI16KEYBOARDOBSERVER_H
#define _TTC9PASSKITUI16KEYBOARDOBSERVER_H

@class SwiftObject;



@interface _TtC9PassKitUI16KeyboardObserver : SwiftObject {
    ? _isVisible;
    ? _keyboardHeight;
}




-(void)keyboardDidHideWithNotification:(id)arg0 ;
-(void)keyboardWillChangeFrameWithNotification:(id)arg0 ;
-(void)keyboardWillHideWithNotification:(id)arg0 ;
-(void)keyboardWillShowWithNotification:(id)arg0 ;


@end


#endif