// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFKEYBOARD_H
#define WFKEYBOARD_H


#import <Foundation/Foundation.h>


@interface WFKeyboard : NSObject

@property (readonly, nonatomic) NSInteger animationCurve; // ivar: _animationCurve
@property (readonly, nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (readonly, nonatomic) CGRect keyboardFrame; // ivar: _keyboardFrame
@property (readonly, nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


+(id)sharedKeyboard;
+(void)beginObservingKeyboardNotifications;
-(id)init;
-(struct CGRect )keyboardFrameInView:(id)arg0 ;
-(void)dealloc;
-(void)keyboardWillChangeFrame:(id)arg0 ;
-(void)keyboardWillChangeVisible:(id)arg0 ;


@end


#endif