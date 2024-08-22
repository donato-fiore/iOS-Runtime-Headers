// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKPDFVIEW_H
#define WKPDFVIEW_H

@class NSString, UITextRange, UIView, NSData;
@protocol _WKWebViewPrintProvider, PDFHostViewControllerDelegate, WKActionSheetAssistantDelegate, UITextSearching, WKShareSheetDelegate, WKWebViewContentProvider, NSObject><NSCopying;


#import "WKApplicationStateTrackingView.h"

@interface WKPDFView : WKApplicationStateTrackingView <_WKWebViewPrintProvider, PDFHostViewControllerDelegate, WKActionSheetAssistantDelegate, UITextSearching, WKShareSheetDelegate, WKWebViewContentProvider>

 {
    RetainPtr<WKActionSheetAssistant> _actionSheetAssistant;
    RetainPtr<NSData> _data;
    RetainPtr<CGPDFDocument *> _documentForPrinting;
    BlockPtr<void ()> _findCompletion;
    RetainPtr<NSString> _findString;
    NSUInteger _findStringCount;
    NSUInteger _findStringMaxCount;
    RetainPtr<UIView> _fixedOverlayView;
    optional<unsigned long> _focusedSearchResultIndex;
    NSInteger _focusedSearchResultPendingOffset;
    RetainPtr<PDFHostViewController> _hostViewController;
    CGSize _overlaidAccessoryViewsInset;
    RetainPtr<UIView> _pageNumberIndicator;
    CString _passwordForPrinting;
    InteractionInformationAtPosition _positionInformation;
    RetainPtr<NSString> _suggestedFilename;
    WeakObjCPtr<WKWebView> _webView;
    RetainPtr<WKKeyboardScrollViewAnimator> _keyboardScrollingAnimator;
    RetainPtr<WKShareSheet> _shareSheet;
    RetainPtr<id<UITextSearchAggregator>> _searchAggregator;
    RetainPtr<NSString> _searchString;
}


@property (readonly, nonatomic) BOOL _wk_printFormatterRequiresMainThread;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) UITextRange *selectedTextRange;
@property (readonly) NSObject<NSObject><NSCopying> *selectedTextSearchDocument;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsTextReplacement;
@property (readonly, nonatomic) UIView *web_contentView;
@property (readonly, nonatomic) NSData *web_dataRepresentation;
@property (readonly, nonatomic) BOOL web_isBackground;
@property (readonly, nonatomic) NSString *web_suggestedFilename;


+(BOOL)web_requiresCustomSnapshotting;
-(BOOL)_computeFocusedSearchResultIndexWithOptions:(NSUInteger)arg0 didWrapAround:(*BOOL)arg1 ;
-(BOOL)actionSheetAssistant:(id)arg0 shouldIncludeAppLinkActionsForElement:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)web_handleKeyEvent:(id)arg0 ;
-(NSInteger)compareFoundRange:(id)arg0 toRange:(id)arg1 inDocument:(id)arg2 ;
-(NSUInteger)_wk_pageCountForPrintFormatter:(id)arg0 ;
-(id)_URLWithPageIndex:(NSInteger)arg0 ;
-(id)_contentView;
-(id)dataDetectionContextForActionSheetAssistant:(id)arg0 positionInformation:(*void)arg1 ;
-(id)web_initWithFrame:(struct CGRect )arg0 webView:(id)arg1 mimeType:(id)arg2 ;
-(struct CGPDFDocument *)_ensureDocumentForPrinting;
-(struct CGPoint )_offsetForPageNumberIndicator;
-(struct RetainPtr<NSArray> )actionSheetAssistant:(id)arg0 decideActionsForElement:(id)arg1 defaultActions:(struct RetainPtr<NSArray> )arg2 ;
-(struct optional<WebKit::InteractionInformationAtPosition> )positionInformationForActionSheetAssistant:(id)arg0 ;
-(void)_findString:(id)arg0 withOptions:(NSUInteger)arg1 maxCount:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_focusOnSearchResultWithOptions:(NSUInteger)arg0 ;
-(void)_goToURL:(id)arg0 atLocation:(struct CGPoint )arg1 ;
-(void)_movePageNumberIndicatorToPoint:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)_resetFind;
-(void)_scrollToURLFragment:(id)arg0 ;
-(void)_showActionSheetForURL:(id)arg0 atLocation:(struct CGPoint )arg1 withAnnotationRect:(struct CGRect )arg2 ;
-(void)_updateLayoutAnimated:(BOOL)arg0 ;
-(void)_wk_requestDocumentForPrintFormatter:(id)arg0 ;
-(void)actionSheetAssistant:(id)arg0 openElementAtLocation:(struct CGPoint )arg1 ;
-(void)actionSheetAssistant:(id)arg0 performAction:(BOOL)arg1 ;
-(void)actionSheetAssistant:(id)arg0 shareElementWithURL:(id)arg1 rect:(struct CGRect )arg2 ;
-(void)clearAllDecoratedFoundText;
-(void)dealloc;
-(void)decorateFoundTextRange:(id)arg0 inDocument:(id)arg1 usingStyle:(NSInteger)arg2 ;
-(void)pdfHostViewController:(id)arg0 didLongPressPageIndex:(NSInteger)arg1 atLocation:(struct CGPoint )arg2 withAnnotationRect:(struct CGRect )arg3 ;
-(void)pdfHostViewController:(id)arg0 didLongPressURL:(id)arg1 atLocation:(struct CGPoint )arg2 withAnnotationRect:(struct CGRect )arg3 ;
-(void)pdfHostViewController:(id)arg0 documentDidUnlockWithPassword:(id)arg1 ;
-(void)pdfHostViewController:(id)arg0 findStringUpdate:(NSUInteger)arg1 done:(BOOL)arg2 ;
-(void)pdfHostViewController:(id)arg0 goToPageIndex:(NSInteger)arg1 withViewFrustum:(struct CGRect )arg2 ;
-(void)pdfHostViewController:(id)arg0 goToURL:(id)arg1 ;
-(void)pdfHostViewController:(id)arg0 updatePageCount:(NSInteger)arg1 ;
-(void)pdfHostViewControllerExtensionProcessDidCrash:(id)arg0 ;
-(void)performTextSearchWithQueryString:(id)arg0 usingOptions:(id)arg1 resultAggregator:(id)arg2 ;
-(void)shareSheetDidDismiss:(id)arg0 ;
-(void)web_beginAnimatedResizeWithUpdates:(id)arg0 ;
-(void)web_computedContentInsetDidChange;
-(void)web_countStringMatches:(id)arg0 options:(NSUInteger)arg1 maxCount:(NSUInteger)arg2 ;
-(void)web_didSameDocumentNavigation:(unsigned int)arg0 ;
-(void)web_findString:(id)arg0 options:(NSUInteger)arg1 maxCount:(NSUInteger)arg2 ;
-(void)web_hideFindUI;
-(void)web_scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)web_scrollViewDidScroll:(id)arg0 ;
-(void)web_scrollViewDidZoom:(id)arg0 ;
-(void)web_scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)web_setContentProviderData:(id)arg0 suggestedFilename:(id)arg1 ;
-(void)web_setFixedOverlayView:(id)arg0 ;
-(void)web_setMinimumSize:(struct CGSize )arg0 ;
-(void)web_setOverlaidAccessoryViewsInset:(struct CGSize )arg0 ;
-(void)web_snapshotRectInContentViewCoordinates:(struct CGRect )arg0 snapshotWidth:(CGFloat)arg1 completionHandler:(id)arg2 ;


@end


#endif