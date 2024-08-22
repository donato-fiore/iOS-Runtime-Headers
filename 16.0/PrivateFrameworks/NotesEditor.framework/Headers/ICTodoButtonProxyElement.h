// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTODOBUTTONPROXYELEMENT_H
#define ICTODOBUTTONPROXYELEMENT_H

@class UIAccessibilityElement, ICTodoButton;


#import "ICBaseTextView.h"

@interface ICTodoButtonProxyElement : UIAccessibilityElement

@property (nonatomic) _NSRange textRange; // ivar: _textRange
@property (weak, nonatomic) ICBaseTextView *textView; // ivar: _textView
@property (weak, nonatomic) ICTodoButton *todoButton; // ivar: _todoButton


-(BOOL)accessibilityActivate;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)initWithTodoButton:(id)arg0 inTextRange:(struct _NSRange )arg1 textView:(id)arg2 ;
-(struct CGRect )accessibilityFrame;


@end


#endif