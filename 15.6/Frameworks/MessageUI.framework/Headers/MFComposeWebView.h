// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFCOMPOSEWEBVIEW_H
#define MFCOMPOSEWEBVIEW_H

@class WKWebView, NSString, _WKRemoteObjectInterface, NSArray, NSMutableDictionary, UIView, UIBarButtonItemGroup, UIBarButtonItem;
@protocol MFComposeBodyFieldObserver, WKNavigationDelegate, _WKInputDelegate, WKUIDelegatePrivate, MFMailMenuCommandProvider, MFMailComposeViewDelegate, MFMailSignatureController, MFComposeBodyFieldController, MFComposeWebViewDelegate;



@interface MFComposeWebView : WKWebView <MFComposeBodyFieldObserver, WKNavigationDelegate, _WKInputDelegate, WKUIDelegatePrivate, MFMailMenuCommandProvider>

 {
    id<MFMailComposeViewDelegate> *_mailComposeViewDelegate;
    NSString *_compositionContextID;
    id<MFMailSignatureController> *_signatureControllerProxy;
    id<MFComposeBodyFieldController> *_bodyFieldProxy;
    BOOL _shouldShowStandardButtons;
    NSUInteger _imageCount;
    BOOL _dirty;
    NSUInteger _dirtyChangeIgnoreCount;
    _WKRemoteObjectInterface *_bodyFieldObserverInterface;
    NSArray *_selectedAttachmentIdentifiers;
    NSUInteger _attachmentSequenceNumber;
    NSMutableDictionary *_attachmentsByUniqueIdentifier;
    NSMutableDictionary *_attachmentCIDsByIdentifier;
    NSArray *_originalAttachmentWrappers;
    BOOL _selectionContainsLink;
    BOOL _isFinishing;
    BOOL _originalAttachmentsWereRestored;
    BOOL _attachmentDataMissingAlertDisplayed;
    BOOL __didUpdateInputAssistantItem;
    BOOL __didReloadInputAssistantItemOnFocus;
}


@property (retain, nonatomic) NSArray *_leadingInputAssistantItemGroups; // ivar: __leadingInputAssistantItemGroups
@property (retain, nonatomic) NSArray *_trailingInputAssistantItemGroups; // ivar: __trailingInputAssistantItemGroups
@property (readonly, nonatomic) BOOL allowsAttachmentElements;
@property (weak, nonatomic) NSObject<MFComposeWebViewDelegate> *composeWebViewDelegate; // ivar: _composeWebViewDelegate
@property (weak, nonatomic) NSString *compositionContextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *inputViewForPreservingFocus; // ivar: _inputViewForPreservingFocus
@property (weak, nonatomic) NSObject<MFMailComposeViewDelegate> *mailComposeViewDelegate;
@property (retain, nonatomic) UIBarButtonItemGroup *photoAndCameraGroup; // ivar: _photoAndCameraGroup
@property (readonly, nonatomic) NSObject<MFMailSignatureController> *signatureControllerProxy;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIBarButtonItem *textFromCameraButtonItem; // ivar: _textFromCameraButtonItem


+(id)_webViewConfiguration;
+(id)log;
+(id)menuCommands;
+(void)setURLCacheBlock:(id)arg0 ;
-(BOOL)_canPerformCommandAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)_getExtensionAndMimeTypeForImageData:(id)arg0 outExtension:(*id)arg1 outMimeType:(*id)arg2 ;
-(BOOL)_shouldShowInsertPhotosButton;
-(BOOL)_shouldShowMarkupButton;
-(BOOL)_sourceIsManaged;
-(BOOL)becomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(NSInteger)_webView:(id)arg0 dataOwnerForDragSession:(id)arg1 ;
-(NSInteger)_webView:(id)arg0 dataOwnerForDropSession:(id)arg1 ;
-(NSInteger)_webView:(id)arg0 decidePolicyForFocusedElement:(id)arg1 ;
-(id)_addInlineAttachmentWithData:(id)arg0 fileName:(id)arg1 type:(id)arg2 contentID:(id)arg3 ;
-(id)_attachmentInfoByIdentifier;
-(id)_attachmentInfoByURL;
-(id)_bodyFieldProxy;
-(id)_filenameForVideoAttachmentAtURL:(id)arg0 ;
-(id)_mailComposeEditingLeadingInputAssistantGroups;
-(id)_mailComposeEditingTrailingInputAssistantGroups;
-(id)_makeAttachmentDataWithFileURL:(id)arg0 type:(id)arg1 ;
-(id)containsRichText;
-(id)contentIDsForMediaAttachments;
-(id)htmlString;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)inputView;
-(id)keyCommands;
-(id)mimeTypeForFilename:(id)arg0 ;
-(id)nextAttachmentName;
-(id)plainTextContent;
-(struct CGRect )rectOfElementWithID:(id)arg0 ;
-(struct _NSRange )selectedRange;
-(void)_addAdditionalItemsToCalloutBar;
-(void)_addAttachment:(id)arg0 ;
-(void)_captureTextFromCamera;
-(void)_changeQuoteLevelBy:(NSInteger)arg0 ;
-(void)_close;
-(void)_decreaseQuoteLevel:(id)arg0 ;
-(void)_decreaseQuoteLevelKeyCommandInvoked:(id)arg0 ;
-(void)_didTapCameraButton:(id)arg0 ;
-(void)_didTapInsertDrawingOrMarkupButton:(id)arg0 ;
-(void)_didTapInsertPhotoButton:(id)arg0 ;
-(void)_importDocumentCommandInvoked:(id)arg0 ;
-(void)_increaseQuoteLevel:(id)arg0 ;
-(void)_increaseQuoteLevelKeyCommandInvoked:(id)arg0 ;
-(void)_insertDocumentFromData:(id)arg0 isImage:(BOOL)arg1 contentID:(id)arg2 ;
-(void)_menuDidHide:(id)arg0 ;
-(void)_pasteAsQuotationKeyCommandInvoked:(id)arg0 ;
-(void)_removeAttachment:(id)arg0 ;
-(void)_removeInlineAttachment:(id)arg0 ;
-(void)_replaceFilenamePlaceholderWithAttachment:(id)arg0 fileName:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 ;
-(void)_scanDocumentCommandInvoked:(id)arg0 ;
-(void)_webView:(id)arg0 didChangeFontAttributes:(id)arg1 ;
-(void)_webView:(id)arg0 didInsertAttachment:(id)arg1 withSource:(id)arg2 ;
-(void)_webView:(id)arg0 didInvalidateDataForAttachment:(id)arg1 ;
-(void)_webView:(id)arg0 didRemoveAttachment:(id)arg1 ;
-(void)_webView:(id)arg0 didStartInputSession:(id)arg1 ;
-(void)_webView:(id)arg0 takeFocus:(NSInteger)arg1 ;
-(void)_webView:(id)arg0 willStartInputSession:(id)arg1 ;
-(void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(BOOL)arg0 shouldQuote:(BOOL)arg1 ;
-(void)appendMarkupString:(id)arg0 quote:(BOOL)arg1 ;
-(void)appendOrReplace:(id)arg0 withMarkupString:(id)arg1 quote:(BOOL)arg2 ;
-(void)attachmentTapped:(id)arg0 ;
-(void)beginPreventingLayout;
-(void)changeQuoteLevel:(NSInteger)arg0 ;
-(void)composeBodyFieldDidChange;
-(void)composeBodyFieldDidThrowException:(id)arg0 ;
-(void)composeBodyFieldIsDirtyChanged:(BOOL)arg0 ;
-(void)composeBodyFieldSelectionContainsLinkStateDidChange:(BOOL)arg0 ;
-(void)compositionDidFailToFinish;
-(void)compositionWillFinish;
-(void)endPreventingLayout;
-(void)getHTMLStringsAttachmentsAndPlainTextAlternative:(id)arg0 ;
-(void)getHTMLStringsAttachmentsAndPlainTextAlternativeRemovingSignature:(BOOL)arg0 completion:(id)arg1 ;
-(void)getHTMLStringsAttachmentsAndPlainTextAlternativeRemovingSignature:(BOOL)arg0 removeQuotes:(BOOL)arg1 completion:(id)arg2 ;
-(void)insertDocumentWithData:(id)arg0 fileName:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 ;
-(void)insertDocumentWithURL:(id)arg0 isDrawingFile:(BOOL)arg1 ;
-(void)insertPhotoOrVideoWithAssetIdentifier:(id)arg0 infoDictionary:(id)arg1 ;
-(void)insertScannedDocumentWithData:(id)arg0 ;
-(void)layoutWithMinimumSize;
-(void)markupSelectedAttachment;
-(void)placeCaretAtStartOfBodyField;
-(void)prepareDataForDocumentAtURLForInsertion:(id)arg0 completion:(id)arg1 ;
-(void)prependMarkupString:(id)arg0 quote:(BOOL)arg1 ;
-(void)prependPreamble:(id)arg0 quote:(BOOL)arg1 ;
-(void)prependString:(id)arg0 ;
-(void)releaseFocusAfterDismissing:(BOOL)arg0 ;
-(void)removeDropPlaceholders;
-(void)removeMediaWithAssetIdentifier:(id)arg0 ;
-(void)replaceAttachment:(id)arg0 withDocumentAtURL:(id)arg1 completion:(id)arg2 ;
-(void)replaceAttachment:(id)arg0 withDocumentData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 ;
-(void)replaceImagesIfNecessary;
-(void)retainFocusAfterPresenting;
-(void)scaleImagesToScale:(NSUInteger)arg0 ;
-(void)selectedAttachmentIdentifiersDidChange:(id)arg0 ;
-(void)setCaretPosition:(NSUInteger)arg0 ;
-(void)setMarkupString:(id)arg0 ;
-(void)setMarkupString:(id)arg0 quote:(BOOL)arg1 ;
-(void)setOriginalAttachmentInfo:(id)arg0 ;
-(void)setPrefersFirstLineSelection;
-(void)setReplacementFilenamesByContentID:(id)arg0 ;
-(void)showOriginalAttachments;
-(void)showQuoteLevelOptions;
-(void)unscaleImages;
-(void)updateInputAssistantItem;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;


@end


#endif