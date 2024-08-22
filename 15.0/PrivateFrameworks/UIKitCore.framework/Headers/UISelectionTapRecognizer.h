// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISELECTIONTAPRECOGNIZER_H
#define UISELECTIONTAPRECOGNIZER_H

@class UIResponder<UITextInput>;


#import "UITextTapRecognizer.h"

@interface UISelectionTapRecognizer : UITextTapRecognizer

@property UIResponder<UITextInput> *textView; // ivar: _textView


-(BOOL)isCloseToSelection;
-(void)setState:(NSInteger)arg0 ;


@end


#endif