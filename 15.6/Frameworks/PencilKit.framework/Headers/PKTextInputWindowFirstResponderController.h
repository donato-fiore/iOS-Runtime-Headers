// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTWINDOWFIRSTRESPONDERCONTROLLER_H
#define PKTEXTINPUTWINDOWFIRSTRESPONDERCONTROLLER_H

@class NSNotification, NSNotificationCenter, NSString;
@protocol UIKeyboardSceneDelegateVisibilityObserver, PKTextInputWindowFirstResponderControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKTextInputWindowFirstResponder.h"

@interface PKTextInputWindowFirstResponderController : NSObject <UIKeyboardSceneDelegateVisibilityObserver>



@property (retain, nonatomic) NSNotification *_delayedNotification; // ivar: __delayedNotification
@property (retain, nonatomic) NSNotificationCenter *_notificationCenter; // ivar: __notificationCenter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKTextInputWindowFirstResponderControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKTextInputWindowFirstResponder *firstResponder; // ivar: _firstResponder
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL paletteFloatingMode; // ivar: _paletteFloatingMode
@property (readonly) Class superclass;


-(BOOL)_isResponderEditableTextInput:(id)arg0 ;
-(id)init;
-(id)initWithNotificationCenter:(id)arg0 ;
-(void)_forceControllerToReload:(id)arg0 ;
-(void)_notifyFirstResponder:(id)arg0 isVisible:(BOOL)arg1 ;
-(void)_textInputResponderDidChangeNotificationHandler:(id)arg0 ;
-(void)dealloc;
-(void)keyboardSceneDelegate:(id)arg0 inputViewSetVisibilityDidChange:(BOOL)arg1 includedReset:(BOOL)arg2 ;
-(void)textInputSourceDidChange:(id)arg0 ;
-(void)updateFirstResponderFromWindowScene:(id)arg0 ;


@end


#endif