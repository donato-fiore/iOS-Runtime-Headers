// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIAUTORESPONDINGSCROLLVIEWCONTROLLERKEYBOARDSUPPORT_H
#define UIAUTORESPONDINGSCROLLVIEWCONTROLLERKEYBOARDSUPPORT_H

@class UIViewController<_UIKeyboardAutoRespondingScrollViewController>;

#import <Foundation/Foundation.h>


@interface UIAutoRespondingScrollViewControllerKeyboardSupport : NSObject {
    UIViewController<_UIKeyboardAutoRespondingScrollViewController> *_viewController;
    BOOL _viewIsDisappearing;
    BOOL _registeredForNotifications;
}


@property (nonatomic) CGFloat adjustmentForKeyboard; // ivar: _adjustmentForKeyboard
@property (nonatomic) BOOL registeredForNotifications;
@property (nonatomic) BOOL viewIsDisappearing;


-(id)initWithViewController:(id)arg0 ;
-(void)_adjustScrollViewForKeyboardInfo:(id)arg0 ;
-(void)_keyboardDidChangeFrame:(id)arg0 ;
-(void)_keyboardDidHide:(id)arg0 ;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;


@end


#endif