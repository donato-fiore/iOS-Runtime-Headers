// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLWKWEBITEMVIEWCONTROLLER_H
#define QLWKWEBITEMVIEWCONTROLLER_H

@class QLItemViewController, NSString, UIPrintPageRenderer, NSLayoutConstraint, QLPreviewParts, NSURLSessionDataTask, NSCache, NSOperationQueue, WKWebView;
@protocol WKNavigationDelegate, WKURLSchemeHandler, QLPrintingProtocol, QLScrubViewDataSource, QLScrubViewDelegate, UIScrollViewDelegate, QLWebKitThumbnailGenerator, QLWebKitPaginator;


#import "QLScrubView.h"

@interface QLWKWebItemViewController : QLItemViewController <WKNavigationDelegate, WKURLSchemeHandler, QLPrintingProtocol, QLScrubViewDataSource, QLScrubViewDelegate, UIScrollViewDelegate>

 {
    NSString *_previewContentType;
    CGPoint _scrollViewTopOffset;
    id *_completionHandler;
    UIPrintPageRenderer *_renderer;
    BOOL _fullScreen;
    id<QLWebKitThumbnailGenerator> *_thumbnailGenerator;
    id<QLWebKitPaginator> *_paginator;
    CGSize _pageSize;
    QLScrubView *_scrubView;
    NSInteger _thumbnailCount;
    CGSize _thumbnailSize;
    NSLayoutConstraint *_scrubberRightConstraint;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) QLPreviewParts *generatedDocument; // ivar: _generatedDocument
@property (retain) NSURLSessionDataTask *generatedDocumentURLSessionTask; // ivar: _generatedDocumentURLSessionTask
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSCache *indexToThumbnailsCache; // ivar: _indexToThumbnailsCache
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


+(BOOL)_shouldDisableJavaScriptForContentType:(id)arg0 ;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewIndicatorInset;
-(BOOL)canClickToToggleFullscreen;
-(BOOL)canPinchToDismiss;
-(BOOL)canSwipeToDismiss;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)shouldAcceptTouch:(id)arg0 ofGestureRecognizer:(id)arg1 ;
-(NSInteger)numberOfPagesInScrubView:(id)arg0 ;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(NSUInteger)currentPageNumber;
-(id)_renderer;
-(id)_thumbnailAtIndex:(NSUInteger)arg0 ;
-(id)printer;
-(id)scrollView;
-(id)scrubView;
-(id)transitioningView;
-(struct CGSize )scrubView:(id)arg0 pageSizeAtIndex:(NSUInteger)arg1 ;
-(void)_addThumbnailToCache:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_hideScrubberIfNeeded:(BOOL)arg0 ;
-(void)_prepareThumbnailView;
-(void)_registerRemoteProxy;
-(void)_scrollToPage:(NSInteger)arg0 ;
-(void)_showScrubberIfNeeded:(BOOL)arg0 reloadThumbnails:(BOOL)arg1 ;
-(void)_updateConstraintConstants:(BOOL)arg0 ;
-(void)_updateScrubberForTraitCollection:(id)arg0 animated:(BOOL)arg1 reloadThumbnailsIfNeeded:(BOOL)arg2 ;
-(void)_updateScrubberVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateScrubberVisibilityAnimated:(BOOL)arg0 reloadThumbnailsIfNeeded:(BOOL)arg1 ;
-(void)_webViewDidRequestPasswordForQuickLookDocument:(id)arg0 ;
-(void)buttonPressedWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadView;
-(void)numberOfPagesWithSize:(struct CGSize )arg0 completionHandler:(id)arg1 ;
-(void)pdfDataForPageAtIndex:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)prepareForDrawingPages:(struct _NSRange )arg0 ofSize:(struct CGSize )arg1 ;
-(void)previewBecameFullScreen:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewWillAppear:(BOOL)arg0 ;
-(void)provideCurrentPageAndVisibleRectWithCompletionHandler:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrubView:(id)arg0 didSelectPageAtIndex:(NSUInteger)arg1 ;
-(void)scrubView:(id)arg0 thumbnailForPage:(NSInteger)arg1 size:(struct CGSize )arg2 withCompletionBlock:(id)arg3 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)transitionDidStart:(BOOL)arg0 ;
-(void)transitionWillFinish:(BOOL)arg0 didComplete:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id)arg2 ;
-(void)webView:(id)arg0 didFailNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2 ;
-(void)webView:(id)arg0 didFinishNavigation:(id)arg1 ;
-(void)webView:(id)arg0 startURLSchemeTask:(id)arg1 ;
-(void)webView:(id)arg0 stopURLSchemeTask:(id)arg1 ;
-(void)webViewWebContentProcessDidTerminate:(id)arg0 ;


@end


#endif