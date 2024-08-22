// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOTEHTMLEDITORVIEWURLSCHEMEHANDLER_H
#define NOTEHTMLEDITORVIEWURLSCHEMEHANDLER_H

@class NSString;
@protocol WKURLSchemeHandler;

#import <Foundation/Foundation.h>

#import "NoteHTMLEditorView.h"

@interface NoteHTMLEditorViewURLSchemeHandler : NSObject <WKURLSchemeHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NoteHTMLEditorView *noteHTMLEditorView; // ivar: _noteHTMLEditorView
@property (readonly) Class superclass;


-(id)initWithNoteHMLEditorView:(id)arg0 ;
-(void)webView:(id)arg0 startURLSchemeTask:(id)arg1 ;
-(void)webView:(id)arg0 stopURLSchemeTask:(id)arg1 ;


@end


#endif