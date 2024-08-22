// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIWEBCARETRECTTEXTPOSITION_H
#define UIWEBCARETRECTTEXTPOSITION_H



#import "UITextPosition.h"

@interface UIWebCaretRectTextPosition : UITextPosition

@property (readonly, nonatomic) CGRect caretRect; // ivar: _caretRect


+(id)textPositionWithCaretRect:(struct CGRect )arg0 ;
-(id)initWithCaretRect:(struct CGRect )arg0 ;


@end


#endif