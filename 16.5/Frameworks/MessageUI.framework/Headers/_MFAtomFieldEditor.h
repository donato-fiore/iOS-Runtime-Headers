// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MFATOMFIELDEDITOR_H
#define _MFATOMFIELDEDITOR_H

@class UITextView;



@interface _MFAtomFieldEditor : UITextView



-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)_enclosingScrollView;
-(id)_hostView;
-(id)_textInputTraits;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)textInputTraits;
-(id)undoManager;
-(struct CGRect )_rectForScrollToVisible:(struct _NSRange )arg0 ;
-(struct CGRect )convertGlyphRect:(struct CGRect )arg0 ;
-(void)_define:(id)arg0 ;
-(void)_lookup:(id)arg0 ;
-(void)_share:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)scrollRectToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 ;


@end


#endif