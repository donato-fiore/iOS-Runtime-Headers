// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABDOCUMENTVIEW_H
#define TABDOCUMENTVIEW_H

@class UIView, WKWebView;
@protocol SFWebViewGeometryC2AnimationObserving, TabDocumentViewGeometryProviding;



@interface TabDocumentView : UIView {
    UIView *_readerTransitionContainerView;
    NSInteger _interactiveGeometryUpdateCount;
    NSInteger _animatedGeometryUpdateCount;
}


@property (weak, nonatomic) NSObject<SFWebViewGeometryC2AnimationObserving> *animationObserver; // ivar: _animationObserver
@property (weak, nonatomic) NSObject<TabDocumentViewGeometryProviding> *geometryProvider; // ivar: _geometryProvider
@property (readonly, nonatomic) BOOL isAnimatingInteractiveGeometryChanges;
@property (retain, nonatomic) WKWebView *readerWebView; // ivar: _readerWebView
@property (readonly, nonatomic) CGFloat scrollDistance;
@property (readonly, nonatomic, getter=isShowingReader) BOOL showingReader; // ivar: _showingReader
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(struct ? )currentGeometry;
-(void)_applyGeometry:(struct ? )arg0 toWebView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_performReaderTransitionWithCompletion:(id)arg0 ;
-(void)applyGeometry:(struct ? )arg0 toWebView:(id)arg1 ;
-(void)applyGeometryToWebView:(id)arg0 ;
-(void)beginInteractiveGeometryChangesAnimated:(BOOL)arg0 ;
-(void)endInteractiveGeometryChangesAnimated:(BOOL)arg0 ;
-(void)ensureContentOffsetWithinContentInsets;
-(void)layoutSubviews;


@end


#endif