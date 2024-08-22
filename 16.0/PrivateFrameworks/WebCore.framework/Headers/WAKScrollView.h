// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WAKSCROLLVIEW_H
#define WAKSCROLLVIEW_H

@protocol WebCoreFrameScrollView;


#import "WAKView.h"
#import "WAKClipView.h"

@interface WAKScrollView : WAKView <WebCoreFrameScrollView>

 {
    WAKView *_documentView;
    WAKClipView *_contentView;
    CGPoint _scrollOrigin;
}


@property (weak, nonatomic) id *delegate; // ivar: delegate


-(BOOL)_selfHandleEvent:(id)arg0 ;
-(BOOL)drawsBackground;
-(BOOL)hasHorizontalScroller;
-(BOOL)hasVerticalScroller;
-(BOOL)inProgrammaticScroll;
-(float)horizontalLineScroll;
-(float)verticalLineScroll;
-(id)contentView;
-(id)description;
-(id)documentView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )scrollOrigin;
-(struct CGRect )documentVisibleRect;
-(struct CGRect )exposedContentRect;
-(struct CGRect )unobscuredContentRect;
-(unsigned char)horizontalScrollingMode;
-(unsigned char)verticalScrollingMode;
-(void)_adjustScrollers;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)reflectScrolledClipView:(id)arg0 ;
-(void)scrollPoint:(struct CGPoint )arg0 ;
-(void)scrollWheel:(id)arg0 ;
-(void)scrollingModes:(*unsigned char)arg0 vertical:(*unsigned char)arg1 ;
-(void)setActualScrollPosition:(struct CGPoint )arg0 ;
-(void)setDocumentView:(id)arg0 ;
-(void)setDrawsBackground:(BOOL)arg0 ;
-(void)setHasHorizontalScroller:(BOOL)arg0 ;
-(void)setHasVerticalScroller:(BOOL)arg0 ;
-(void)setHorizontalScrollingMode:(unsigned char)arg0 ;
-(void)setLineScroll:(float)arg0 ;
-(void)setScrollBarsSuppressed:(BOOL)arg0 repaintOnUnsuppress:(BOOL)arg1 ;
-(void)setScrollOrigin:(struct CGPoint )arg0 updatePositionAtAll:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)setScrollingMode:(unsigned char)arg0 ;
-(void)setScrollingModes:(unsigned char)arg0 vertical:(unsigned char)arg1 andLock:(BOOL)arg2 ;
-(void)setVerticalScrollingMode:(unsigned char)arg0 ;


@end


#endif