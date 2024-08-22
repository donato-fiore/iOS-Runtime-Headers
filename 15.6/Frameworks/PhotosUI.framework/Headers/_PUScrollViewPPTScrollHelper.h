// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PUSCROLLVIEWPPTSCROLLHELPER_H
#define _PUSCROLLVIEWPPTSCROLLHELPER_H

@class CADisplayLink, UIScrollView;

#import <Foundation/Foundation.h>


@interface _PUScrollViewPPTScrollHelper : NSObject

@property (copy, nonatomic, setter=_setCompletionHandler:) id *_completionHandler; // ivar: __completionHandler
@property (weak, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink; // ivar: __displayLink
@property (copy, nonatomic, setter=_setIncrementHandler:) id *_incrementHandler; // ivar: __incrementHandler
@property (nonatomic, setter=_setLastIncrementTime:) CGFloat _lastIncrementTime; // ivar: __lastIncrementTime
@property (nonatomic, setter=_setOriginContentOffset:) CGPoint originContentOffset; // ivar: _originContentOffset
@property (readonly, weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView


-(id)init;
-(id)initWithScrollView:(id)arg0 ;
-(void)_endScroll;
-(void)_incrementScroll;
// -(void)scrollWithStartHandler:(id)arg0 incrementHandler:(unk)arg1 completionHandler:(id)arg2  ;


@end


#endif