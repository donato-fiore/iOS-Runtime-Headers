// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NOTEHTMLEDITORVIEW_H
#define NOTEHTMLEDITORVIEW_H

@class UIView, NSArray, NSLayoutConstraint, NSString, ICSelectorDelayer, UIViewPrintFormatter, WebArchive;
@protocol WKUIDelegatePrivate, _WKInputDelegate, UIScrollViewDelegate, WKNavigationDelegate, NoteHTMLEditorViewActionDelegate, NoteHTMLEditorViewDelegate, NoteHTMLEditorViewLayoutDelegate;


#import "NoteHTMLEditorViewScriptMessageHandler.h"
#import "NoteHTMLEditorViewURLSchemeHandler.h"
#import "NoteWKWebView.h"

@interface NoteHTMLEditorView : UIView <WKUIDelegatePrivate, _WKInputDelegate, UIScrollViewDelegate, WKNavigationDelegate>



@property (weak, nonatomic) NSObject<NoteHTMLEditorViewActionDelegate> *actionDelegate; // ivar: _actionDelegate
@property (copy, nonatomic) NSArray *attachmentContentIDs; // ivar: _attachmentContentIDs
@property (copy, nonatomic) NSArray *attachmentsToLoad; // ivar: _attachmentsToLoad
@property (retain, nonatomic) NSLayoutConstraint *contentSizeHeightConstraint; // ivar: _contentSizeHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *contentSizeWidthConstraint; // ivar: _contentSizeWidthConstraint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NoteHTMLEditorViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (nonatomic) BOOL hasAttachments; // ivar: _hasAttachments
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *htmlString; // ivar: _htmlString
@property (copy, nonatomic) NSString *htmlStringToLoad; // ivar: _htmlStringToLoad
@property (weak, nonatomic) NSObject<NoteHTMLEditorViewLayoutDelegate> *layoutDelegate; // ivar: _layoutDelegate
@property (nonatomic) unsigned short listStyle; // ivar: _listStyle
@property (retain, nonatomic) NoteHTMLEditorViewScriptMessageHandler *scriptMessageHandler; // ivar: _scriptMessageHandler
@property (nonatomic) NSInteger selectionLength; // ivar: _selectionLength
@property (nonatomic) BOOL setSelectionToEndAfterLoad; // ivar: _setSelectionToEndAfterLoad
@property (nonatomic) BOOL startEditingAfterLoad; // ivar: _startEditingAfterLoad
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) CGFloat textZoomFactor;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) ICSelectorDelayer *updateContentDelayer; // ivar: _updateContentDelayer
@property (nonatomic) BOOL updatingContent; // ivar: _updatingContent
@property (retain, nonatomic) NoteHTMLEditorViewURLSchemeHandler *urlSchemeHandler; // ivar: _urlSchemeHandler
@property (readonly, nonatomic) UIViewPrintFormatter *viewPrintFormatter;
@property (readonly, nonatomic) WebArchive *webArchive;
@property (retain, nonatomic) NoteWKWebView *webView; // ivar: _webView


+(id)baseHTMLString;
-(BOOL)_webView:(id)arg0 focusShouldStartInputSession:(id)arg1 ;
-(BOOL)_webView:(id)arg0 performDataInteractionOperationWithItemProviders:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)isFirstResponder;
-(NSInteger)_webView:(id)arg0 dataOwnerForDragSession:(id)arg1 ;
-(NSInteger)_webView:(id)arg0 dataOwnerForDropSession:(id)arg1 ;
-(id)attachmentInfoDictionaryForAttachmentPresentation:(id)arg0 ;
-(id)contextMenuConfigurationForElement:(id)arg0 presentation:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)jsonStringFromDictionaryOrArray:(id)arg0 ;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)_webView:(id)arg0 contextMenuConfigurationForElement:(id)arg1 completionHandler:(id)arg2 ;
-(void)_webView:(id)arg0 contextMenuDidEndForElement:(id)arg1 ;
-(void)_webView:(id)arg0 didInsertAttachment:(id)arg1 withSource:(id)arg2 ;
-(void)_webView:(id)arg0 didStartInputSession:(id)arg1 ;
-(void)adoptEditableState;
-(void)buildMenuWithBuilder:(id)arg0 ;
-(void)copyNoteHTMLToPasteboard;
-(void)didReceiveScriptMessage:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)getRectForSelectionWithCompletion:(id)arg0 ;
-(void)insertBulletedList:(id)arg0 ;
-(void)insertDashedList:(id)arg0 ;
-(void)insertHTMLString:(id)arg0 ;
-(void)insertImage:(id)arg0 ;
-(void)insertLinkWithURL:(id)arg0 title:(id)arg1 ;
-(void)insertLinksWithURLs:(id)arg0 titles:(id)arg1 ;
-(void)insertOrderedList:(id)arg0 ;
-(void)loadAttachmentContentForURLSchemeTask:(id)arg0 ;
-(void)removeScriptHandlers;
-(void)removeStyle:(id)arg0 ;
-(void)replaceContentIDs:(id)arg0 ;
-(void)replaceSelectionWithAttachmentPresentation:(id)arg0 ;
-(void)scrollSelectionToVisible:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setEnableAttachments:(BOOL)arg0 ;
-(void)setEnableShiftNewlinesInSmartLists:(BOOL)arg0 ;
-(void)setEnableSmartLists:(BOOL)arg0 ;
-(void)setSelectionToEnd;
-(void)setSelectionToStart;
-(void)setupWebView;
-(void)startEditing;
-(void)stopEditing;
-(void)stopEditingWithCompletion:(id)arg0 ;
-(void)stopLoadingAttachmentContentForURLSchemeTask:(id)arg0 ;
-(void)undoablyRemoveAttachmentPresentations:(id)arg0 undoManager:(id)arg1 ;
-(void)undoablyReplaceSelectionWithAttachmentPresentations:(id)arg0 undoManager:(id)arg1 ;
-(void)updateContent;
-(void)updateDataDetectors;
-(void)updateDataOwnerForCopyAndPaste;
-(void)updateWebViewEditability;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif