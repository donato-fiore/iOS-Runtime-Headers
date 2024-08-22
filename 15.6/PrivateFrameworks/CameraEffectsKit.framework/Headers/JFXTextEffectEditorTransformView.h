// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXTEXTEFFECTEDITORTRANSFORMVIEW_H
#define JFXTEXTEFFECTEDITORTRANSFORMVIEW_H

@class UIView;


#import "JFXTextEffectEditorTextView.h"

@interface JFXTextEffectEditorTransformView : UIView

@property (readonly, nonatomic) JFXTextEffectEditorTextView *textView; // ivar: _textView


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 textView:(id)arg1 ;


@end


#endif