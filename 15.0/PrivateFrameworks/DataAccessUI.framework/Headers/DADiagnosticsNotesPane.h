// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DADIAGNOSTICSNOTESPANE_H
#define DADIAGNOSTICSNOTESPANE_H

@class PSEditingPane, UITextView;



@interface DADiagnosticsNotesPane : PSEditingPane {
    UITextView *_notesView;
}




-(BOOL)becomeFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferenceValue;


@end


#endif