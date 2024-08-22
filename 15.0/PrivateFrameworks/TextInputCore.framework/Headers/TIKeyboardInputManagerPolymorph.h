// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIKEYBOARDINPUTMANAGERPOLYMORPH_H
#define TIKEYBOARDINPUTMANAGERPOLYMORPH_H



#import "TIKeyboardInputManagerWrapper.h"

@interface TIKeyboardInputManagerPolymorph : TIKeyboardInputManagerWrapper



-(void)dealloc;
-(void)handleKeyboardInput:(id)arg0 keyboardState:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleKeyboardState:(id)arg0 ;
-(void)setInputManagerForInputMode:(id)arg0 withKeyboardState:(id)arg1 class:(Class)arg2 ;
-(void)setInputManagerForKeyboardState:(id)arg0 ;
-(void)skipHitTestForTouchEvent:(id)arg0 keyboardState:(id)arg1 ;
-(void)syncToKeyboardState:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif