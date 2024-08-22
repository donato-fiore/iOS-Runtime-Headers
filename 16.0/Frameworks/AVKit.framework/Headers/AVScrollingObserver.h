// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSCROLLINGOBSERVER_H
#define AVSCROLLINGOBSERVER_H

@class UIView, NSHashTable, NSTimer, NSString;
@protocol _UIScrollViewScrollObserver;

#import <Foundation/Foundation.h>


@interface AVScrollingObserver : NSObject <_UIScrollViewScrollObserver>

 {
    UIView *_view;
    NSHashTable *_observedScrollViews;
    NSHashTable *_delegates;
    NSTimer *_scrollingDidEndTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isScrolling) BOOL scrolling; // ivar: _scrolling
@property (nonatomic, getter=isScrollingQuickly) BOOL scrollingQuickly; // ivar: _scrollingQuickly
@property (readonly) Class superclass;


-(id)initWithView:(id)arg0 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_updateScrollingStatus;
-(void)addDelegate:(id)arg0 ;
-(void)dealloc;
-(void)removeDelegate:(id)arg0 ;
-(void)update;


@end


#endif