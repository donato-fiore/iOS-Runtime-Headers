// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKJSKEYBOARD_H
#define IKJSKEYBOARD_H

@class JSValue, NSString;
@protocol IKJSKeyboard, _IKJSKeyboardProxy, _IKJSKeyboard, IKAppKeyboardBridge;


#import "IKJSObject.h"

@interface IKJSKeyboard : IKJSObject <IKJSKeyboard, _IKJSKeyboardProxy, _IKJSKeyboard>



@property (retain, nonatomic) NSObject<IKAppKeyboardBridge> *appBridge; // ivar: _appBridge
@property (copy, nonatomic) JSValue *hints;
@property (copy, nonatomic) JSValue *suggestions;
@property (copy, nonatomic) NSString *text;


-(id)asPrivateIKJSKeyboard;
-(void)jsDidSelectHint:(id)arg0 ;
-(void)jsTextDidChange;


@end


#endif