// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBFRAMEVIEW_H
#define WEBFRAMEVIEW_H

@class WAKView, WAKView<WebDocumentView>;
@protocol WebCoreFrameView;


#import "WebFrameViewPrivate.h"
#import "WebFrame.h"

@interface WebFrameView : WAKView <WebCoreFrameView>

 {
    WebFrameViewPrivate *_private;
}


@property (nonatomic) BOOL allowsScrolling;
@property (readonly, nonatomic) WAKView<WebDocumentView> *documentView;
@property (readonly, nonatomic) BOOL documentViewShouldHandlePrint;
@property (readonly, nonatomic) WebFrame *webFrame;


+(BOOL)_canShowMIMETypeAsHTML:(id)arg0 ;
+(Class)_viewClassForMIMEType:(id)arg0 allowingPlugins:(BOOL)arg1 ;
+(id)_viewTypesAllowImageTypeOmission:(BOOL)arg0 ;
-(BOOL)_firstResponderIsFormControl;
-(BOOL)_hasScrollBars;
-(BOOL)_isFlippedDocument;
-(BOOL)_isScrollable;
-(BOOL)_isVerticalDocument;
-(BOOL)_pageHorizontally:(BOOL)arg0 ;
-(BOOL)_pageInBlockProgressionDirection:(BOOL)arg0 ;
-(BOOL)_pageVertically:(BOOL)arg0 ;
-(BOOL)_scrollHorizontallyBy:(float)arg0 ;
-(BOOL)_scrollLineHorizontally:(BOOL)arg0 ;
-(BOOL)_scrollLineVertically:(BOOL)arg0 ;
-(BOOL)_scrollOverflowInDirection:(unsigned char)arg0 granularity:(unsigned char)arg1 ;
-(BOOL)_scrollToBeginningOfDocument;
-(BOOL)_scrollToEndOfDocument;
-(BOOL)_scrollVerticallyBy:(float)arg0 ;
-(BOOL)acceptsFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isOpaque;
-(BOOL)scrollView:(id)arg0 shouldScrollToPoint:(struct CGPoint )arg1 ;
-(Class)_customScrollViewClass;
-(Class)_viewClassForMIMEType:(id)arg0 ;
-(float)_area;
-(float)_horizontalKeyboardScrollDistance;
-(float)_horizontalPageScrollDistance;
-(float)_verticalKeyboardScrollDistance;
-(float)_verticalPageScrollDistance;
-(id)_contentView;
-(id)_largestChildWithScrollBars;
-(id)_largestScrollableChild;
-(id)_makeDocumentViewForDataSource:(id)arg0 ;
-(id)_scrollView;
-(id)_webView;
-(id)_webcore_effectiveFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )visibleRect;
-(struct NakedPtr<WebCore::Frame> )_web_frame;
-(void)_forwardMouseEvent:(id)arg0 ;
-(void)_frameSizeChanged;
-(void)_goBack;
-(void)_goForward;
-(void)_install;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)frameSizeChanged;
-(void)keyDown:(id)arg0 ;
-(void)mouseDown:(id)arg0 ;
-(void)mouseUp:(id)arg0 ;
-(void)printDocumentView;
-(void)scrollLineDown:(id)arg0 ;
-(void)scrollLineUp:(id)arg0 ;
-(void)scrollPageDown:(id)arg0 ;
-(void)scrollPageUp:(id)arg0 ;
-(void)scrollToBeginningOfDocument:(id)arg0 ;
-(void)scrollToEndOfDocument:(id)arg0 ;
-(void)setFrameSize:(struct CGSize )arg0 ;
-(void)setNextKeyView:(id)arg0 ;
-(void)viewDidMoveToWindow;


@end


#endif