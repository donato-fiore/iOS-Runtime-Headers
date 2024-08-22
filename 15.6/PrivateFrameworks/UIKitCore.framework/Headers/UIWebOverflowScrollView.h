// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWEBOVERFLOWSCROLLVIEW_H
#define UIWEBOVERFLOWSCROLLVIEW_H

@class DOMNode, CALayer;


#import "UIScrollView.h"
#import "UIWebOverflowContentView.h"
#import "UIWebOverflowScrollListener.h"
#import "UIWebBrowserView.h"

@interface UIWebOverflowScrollView : UIScrollView

@property (nonatomic, getter=isBeingRemoved) BOOL beingRemoved; // ivar: _beingRemoved
@property (retain, nonatomic) DOMNode *node; // ivar: _node
@property (retain, nonatomic) UIWebOverflowContentView *overflowContentView; // ivar: _overflowContentView
@property (retain, nonatomic) UIWebOverflowScrollListener *scrollListener; // ivar: _scrollListener
@property (nonatomic) UIWebBrowserView *webBrowserView; // ivar: _webBrowserView
@property (retain, nonatomic) CALayer *webLayer; // ivar: _webLayer


-(BOOL)fixUpViewAfterInsertion;
-(id)initWithLayer:(id)arg0 node:(id)arg1 webBrowserView:(id)arg2 ;
-(id)superview;
-(void)dealloc;
-(void)replaceLayer:(id)arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)willBeRemoved;


@end


#endif