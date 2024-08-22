// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NOTECONTENTLAYER_H
#define NOTECONTENTLAYER_H

@class UIView, NSLayoutConstraint, UILabel, NSString, NSDate;
@protocol NoteHTMLEditorViewDelegate, NoteHTMLEditorViewActionDelegate, NoteHTMLEditorViewLayoutDelegate, UIScrollViewDelegate, NoteContentLayerAttachmentPresentationDelegate, NoteContentLayerDelegate;


#import "ICTextBackgroundView.h"
#import "NoteHTMLEditorView.h"

@interface NoteContentLayer : UIView <NoteHTMLEditorViewDelegate, NoteHTMLEditorViewActionDelegate, NoteHTMLEditorViewLayoutDelegate, UIScrollViewDelegate>



@property (nonatomic) BOOL allowsAttachments; // ivar: _allowsAttachments
@property (weak, nonatomic) NSObject<NoteContentLayerAttachmentPresentationDelegate> *attachmentPresentationDelegate; // ivar: _attachmentPresentationDelegate
@property (retain, nonatomic) NSLayoutConstraint *backgroundHeightConstraint; // ivar: _backgroundHeightConstraint
@property (retain, nonatomic) ICTextBackgroundView *backgroundView; // ivar: _backgroundView
@property (nonatomic) BOOL containsCJK; // ivar: _containsCJK
@property (readonly, nonatomic) BOOL contentContainsValuableContent;
@property (nonatomic) CGPoint contentOffset;
@property (retain, nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NoteContentLayerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic, getter=isForPreview) BOOL forPreview; // ivar: _forPreview
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NoteHTMLEditorView *noteHTMLEditorView; // ivar: _noteHTMLEditorView
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *timestampDate; // ivar: _timestampDate
@property (readonly, nonatomic) NSString *title;
@property (nonatomic) BOOL tracksMaximumContentLength; // ivar: _tracksMaximumContentLength
@property (nonatomic) BOOL updatedTitleRange; // ivar: _updatedTitleRange


-(BOOL)allowsAttachmentsInNoteHTMLEditorView:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canInsertImagesInNoteHTMLEditorView:(id)arg0 ;
-(BOOL)canResignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)isNoteHTMLEditorViewVisible:(id)arg0 ;
-(BOOL)isNoteManagedForNoteHTMLEditorView:(id)arg0 ;
-(BOOL)noteHTMLEditorView:(id)arg0 acceptContentsFromPasteboard:(id)arg1 ;
-(BOOL)noteHTMLEditorView:(id)arg0 canAddAttachmentItemProviders:(id)arg1 ;
-(BOOL)noteHTMLEditorViewShouldBeginEditing:(id)arg0 isUserInitiated:(BOOL)arg1 ;
-(BOOL)noteHTMLEditorViewShouldPaste:(id)arg0 ;
-(BOOL)processMapAttachmentItemProvider:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(BOOL)shouldRenderAsAttachment:(id)arg0 ;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(id)contentAsPlainText:(BOOL)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 forPreview:(BOOL)arg1 ;
-(id)keyCommands;
-(id)noteHTMLEditorView:(id)arg0 attachmentPresentationForContentID:(id)arg1 ;
-(id)noteHTMLEditorView:(id)arg0 createAttachmentPresentationWithFileWrapper:(id)arg1 mimeType:(id)arg2 ;
-(id)noteHTMLEditorView:(id)arg0 fileURLForAttachmentWithContentID:(id)arg1 ;
-(id)noteHTMLEditorView:(id)arg0 updateAttachments:(id)arg1 ;
-(id)readerDelegateInNoteHTMLEditorView:(id)arg0 ;
-(id)viewPrintFormatter;
-(id)webArchive;
-(struct CGRect )rectForDOMNode:(id)arg0 ;
-(void)chosenUTI:(*id)arg0 andChosenMIMEType:(*id)arg1 forItemProvider:(id)arg2 ;
-(void)copyNoteHTMLToPasteboard;
-(void)createLayout;
-(void)dealloc;
-(void)flashScrollIndicators;
-(void)forcedSetContainsCJK:(BOOL)arg0 ;
-(void)getRectForSelectionWithCompletion:(id)arg0 ;
-(void)insertImageInNoteHTMLEditorView:(id)arg0 ;
-(void)noteHTMLEditorView:(id)arg0 addAttachmentItemProviders:(id)arg1 ;
-(void)noteHTMLEditorView:(id)arg0 didAddAttachmentForMimeType:(id)arg1 filename:(id)arg2 data:(id)arg3 ;
-(void)noteHTMLEditorView:(id)arg0 didInvokeFormattingCalloutOption:(NSInteger)arg1 ;
-(void)noteHTMLEditorView:(id)arg0 didInvokeStyleFormattingOption:(NSInteger)arg1 ;
-(void)noteHTMLEditorView:(id)arg0 openURL:(id)arg1 ;
-(void)noteHTMLEditorView:(id)arg0 showShareSheetForAttachment:(id)arg1 atPoint:(struct CGPoint )arg2 ;
-(void)noteHTMLEditorViewDidBeginEditing:(id)arg0 ;
-(void)noteHTMLEditorViewDidChange:(id)arg0 ;
-(void)noteHTMLEditorViewDidEndEditing:(id)arg0 ;
-(void)noteHTMLEditorViewNeedsContentReload:(id)arg0 ;
-(void)noteHTMLEditorViewWillChange:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)processAttachmentItemProviders:(id)arg0 ;
-(void)replaceSelectionWithAttachmentPresentation:(id)arg0 ;
-(void)scrollSelectionToVisible:(BOOL)arg0 ;
-(void)scrollToTopAnimated:(BOOL)arg0 ;
-(void)setContent:(id)arg0 isPlainText:(BOOL)arg1 isCJK:(BOOL)arg2 attachments:(id)arg3 ;
-(void)setScrollIndicatorInsets:(struct UIEdgeInsets )arg0 ;
-(void)setSelectionToStart;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentInsets;
-(void)updateObscuredInsets;


@end


#endif