// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXTEXTEFFECTEDITORVIEW_H
#define CFXTEXTEFFECTEDITORVIEW_H

@class UIView, NSString;
@protocol UITextDragDelegate, UITextPasteDelegate, UITextViewDelegate, JFXTextEffectEditorTextViewDelegate, CFXTextEffectEditorViewDelegate;


#import "JFXTextEffectEditorView.h"

@interface CFXTextEffectEditorView : UIView <UITextDragDelegate, UITextPasteDelegate, UITextViewDelegate, JFXTextEffectEditorTextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CFXTextEffectEditorViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) JFXTextEffectEditorView *editorView; // ivar: _editorView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text;


+(id)viewWithFrame:(struct CGRect )arg0 textEditingProperties:(id)arg1 ;
-(BOOL)textPasteConfigurationSupporting:(id)arg0 shouldAnimatePasteOfAttributedString:(id)arg1 toRange:(id)arg2 ;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 textEditingProperties:(id)arg1 ;
-(id)textDraggableView:(id)arg0 itemsForDrag:(id)arg1 ;
-(struct CGRect )textEditingFrameRelativeToView:(id)arg0 ;
-(void)CFX_setupTextField:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applyTextEditingProperties:(id)arg0 ;
-(void)endTextEditing;
-(void)selectAll;
-(void)selectAtEnd;
-(void)textEffectEditorTextViewDidUnmarkText:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;


@end


#endif