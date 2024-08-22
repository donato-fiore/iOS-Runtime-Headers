// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOTEWKWEBVIEW_H
#define NOTEWKWEBVIEW_H

@class WKWebView;


#import "NoteHTMLEditorView.h"

@interface NoteWKWebView : WKWebView

@property (weak, nonatomic) NoteHTMLEditorView *noteHTMLEditorView; // ivar: _noteHTMLEditorView


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)calloutOptionInvoked:(NSInteger)arg0 sender:(id)arg1 ;
-(void)findInteraction:(id)arg0 didBeginFindSession:(id)arg1 ;
-(void)findInteraction:(id)arg0 didEndFindSession:(id)arg1 ;
-(void)ic_evaluateJavaScript:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)select:(id)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)strikethrough:(id)arg0 ;
-(void)toggleBoldface:(id)arg0 ;
-(void)toggleItalics:(id)arg0 ;
-(void)toggleUnderline:(id)arg0 ;


@end


#endif