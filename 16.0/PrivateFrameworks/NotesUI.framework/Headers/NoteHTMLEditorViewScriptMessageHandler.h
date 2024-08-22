// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOTEHTMLEDITORVIEWSCRIPTMESSAGEHANDLER_H
#define NOTEHTMLEDITORVIEWSCRIPTMESSAGEHANDLER_H

@class NSString;
@protocol WKScriptMessageHandler;

#import <Foundation/Foundation.h>

#import "NoteHTMLEditorView.h"

@interface NoteHTMLEditorViewScriptMessageHandler : NSObject <WKScriptMessageHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NoteHTMLEditorView *noteHTMLEditorView; // ivar: _noteHTMLEditorView
@property (readonly) Class superclass;


-(id)initWithNoteHMLEditorView:(id)arg0 ;
-(void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1 ;


@end


#endif