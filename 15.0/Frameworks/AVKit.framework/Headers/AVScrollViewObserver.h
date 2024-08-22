// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVSCROLLVIEWOBSERVER_H
#define AVSCROLLVIEWOBSERVER_H

@class NSString, NSHashTable, UIView<AVScrollViewObserverContentView>, NSTimer;
@protocol _UIScrollViewScrollObserver;

#import <Foundation/Foundation.h>


@interface AVScrollViewObserver : NSObject <_UIScrollViewScrollObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSHashTable *observedScrollViews; // ivar: _observedScrollViews
@property (weak, nonatomic) UIView<AVScrollViewObserverContentView> *observer; // ivar: _observer
@property (nonatomic, getter=isScrolling) BOOL scrolling; // ivar: _scrolling
@property (retain, nonatomic) NSTimer *scrollingDidEndTimer; // ivar: _scrollingDidEndTimer
@property (nonatomic, getter=isScrollingQuickly) BOOL scrollingQuickly; // ivar: _scrollingQuickly
@property (readonly) Class superclass;


-(id)initWithContentView:(id)arg0 ;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_updateScrollingStatus;
-(void)dealloc;
-(void)updateObservedScrollViews;


@end


#endif