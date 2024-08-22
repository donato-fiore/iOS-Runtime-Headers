// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIVARIABLEDELAYLOUPEGESTURE_H
#define UIVARIABLEDELAYLOUPEGESTURE_H

@class UIResponder<UITextInput>;


#import "UILongPressGestureRecognizer.h"

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer

@property (readonly, nonatomic) BOOL isLongPress;
@property (weak) UIResponder<UITextInput> *textView; // ivar: _textView


-(BOOL)_allowsForShortDelay;
-(BOOL)_isGestureType:(NSInteger)arg0 ;
-(BOOL)_tracksPointerTouch;
-(BOOL)isCloseToCaret;
-(BOOL)isWithinRecentTap;
-(BOOL)shouldUseLegacyBehavior;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)invalidate;
-(void)startTimer;


@end


#endif