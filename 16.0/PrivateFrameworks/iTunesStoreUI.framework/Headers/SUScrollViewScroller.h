// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCROLLVIEWSCROLLER_H
#define SUSCROLLVIEWSCROLLER_H

@class NSMutableArray, NSString, UIScrollView;
@protocol UIScrollViewDelegate;

#import <Foundation/Foundation.h>


@interface SUScrollViewScroller : NSObject <UIScrollViewDelegate>

 {
    NSObject<UIScrollViewDelegate> *_originalDelegate;
    NSMutableArray *_scrollRequests;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_addScrollRequest:(id)arg0 ;
-(void)_finishActiveScrollRequest;
-(void)_performContentOffsetRequest:(id)arg0 ;
-(void)_performNextScrollRequest;
-(void)_performScrollRectRequest:(id)arg0 ;
-(void)attachToScrollView:(id)arg0 ;
-(void)dealloc;
-(void)detachFromScrollView;
-(void)forwardInvocation:(id)arg0 ;
-(void)scrollFrameToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;


@end


#endif