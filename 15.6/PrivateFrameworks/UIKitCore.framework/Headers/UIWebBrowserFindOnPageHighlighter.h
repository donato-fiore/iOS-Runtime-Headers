// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWEBBROWSERFINDONPAGEHIGHLIGHTER_H
#define UIWEBBROWSERFINDONPAGEHIGHLIGHTER_H

@class NSMutableArray, NSArray, NSString;
@protocol UIWebFindOnPageHighlighter, UIWebFindOnPageHighlighterDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIWebBrowserView.h"
#import "UIWebPDFViewHandler.h"

@interface UIWebBrowserFindOnPageHighlighter : NSObject <UIWebFindOnPageHighlighter>

 {
    NSMutableArray *_highlightBubbleViews;
    NSArray *_pdfHighlightViews;
    UIView *_highlightHostView;
    UIWebBrowserView *_browserView;
    UIWebPDFViewHandler *_pdfHandler;
    BOOL _zoomToHighlightSelection;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<UIWebFindOnPageHighlighterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger highlightedMatchIndex; // ivar: _highlightedMatchIndex
@property (readonly, nonatomic) NSUInteger numberOfMatches; // ivar: _numberOfMatches
@property (readonly, copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly) Class superclass;


+(BOOL)expandedRectsWouldIntersect:(id)arg0 ;
-(BOOL)_highlightSelection;
-(BOOL)_updateHighlightedMatchIndex:(BOOL)arg0 ;
-(BOOL)updateHighlightBubbleWobble:(BOOL)arg0 ;
-(NSUInteger)findOnPageOptions;
-(id)_currentPDFSearchResult;
-(id)initWithBrowserView:(id)arg0 ;
-(id)initWithPDFViewHandler:(id)arg0 ;
-(void)_addContentViewAtIndex:(NSUInteger)arg0 withRect:(struct CGRect )arg1 ;
-(void)_clearHighlightViews;
-(void)_commonInitialize;
-(void)_highlightFindOnPageMatch:(BOOL)arg0 ;
-(void)_highlightFindOnPageMatchForPDF:(BOOL)arg0 withPDFHandler:(id)arg1 ;
-(void)_setSelectionRect:(struct CGRect )arg0 textRects:(id)arg1 contentImage:(struct CGImage *)arg2 contentViews:(id)arg3 wobble:(BOOL)arg4 ;
-(void)clearBrowserView;
-(void)dealloc;
-(void)highlightNextMatch;
-(void)highlightPreviousMatch;
-(void)search:(id)arg0 hasPartialResults:(id)arg1 ;
-(void)searchDidBegin:(id)arg0 ;
-(void)searchDidFinish:(id)arg0 ;
-(void)searchDidTimeOut:(id)arg0 ;
-(void)searchLimitHit:(id)arg0 ;
-(void)searchWasCancelled:(id)arg0 ;
-(void)setSelectionRect:(struct CGRect )arg0 textRects:(id)arg1 contentImage:(struct CGImage *)arg2 wobble:(BOOL)arg3 ;
-(void)setSelectionRect:(struct CGRect )arg0 textRects:(id)arg1 contentViews:(id)arg2 wobble:(BOOL)arg3 ;


@end


#endif