// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSTEXTVIEWPANE_H
#define PSTEXTVIEWPANE_H

@class UITextView;


#import "PSEditingPane.h"

@interface PSTextViewPane : PSEditingPane {
    UITextView *_textView;
}




-(BOOL)handlesDoneButton;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setPreferenceSpecifier:(id)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif