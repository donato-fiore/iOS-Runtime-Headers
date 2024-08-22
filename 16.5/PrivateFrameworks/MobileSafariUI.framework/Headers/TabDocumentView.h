// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TABDOCUMENTVIEW_H
#define TABDOCUMENTVIEW_H

@class UIView, WKWebView;
@protocol TabDocumentViewGeometryProviding;



@interface TabDocumentView : UIView {
    NSInteger _interactiveGeometryUpdateCount;
    UIView *_readerTransitionContainerView;
}


@property (readonly, nonatomic, getter=isAnimatingInteractiveGeometryChanges) BOOL animatingInteractiveGeometryChanges;
@property (weak, nonatomic) NSObject<TabDocumentViewGeometryProviding> *geometryProvider; // ivar: _geometryProvider
@property (retain, nonatomic) WKWebView *readerWebView; // ivar: _readerWebView
@property (readonly, nonatomic) CGFloat scrollDistance;
@property (readonly, nonatomic, getter=isShowingReader) BOOL showingReader; // ivar: _showingReader
@property (retain, nonatomic) WKWebView *webView; // ivar: _webView


-(struct ? )currentGeometry;
-(void)_performReaderTransitionWithCompletion:(id)arg0 ;
-(void)applyGeometry:(struct ? )arg0 toWebView:(id)arg1 ;
-(void)applyGeometryToWebView:(id)arg0 ;
-(void)beginInteractiveGeometryChanges;
-(void)endInteractiveGeometryChanges;
-(void)ensureContentOffsetWithinContentInsets;
-(void)layoutSubviews;


@end


#endif