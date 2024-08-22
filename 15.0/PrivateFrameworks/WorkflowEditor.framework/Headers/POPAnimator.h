// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPANIMATOR_H
#define POPANIMATOR_H

@class CADisplayLink, NSMutableArray;
@protocol POPAnimatorDelegate;

#import <Foundation/Foundation.h>


@interface POPAnimator : NSObject {
    CADisplayLink *_displayLink;
    list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> _list;
    *__CFDictionary _dict;
    NSMutableArray *_observers;
    list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> _pendingList;
    *__CFRunLoopObserver _pendingListObserver;
    CGFloat _slowMotionStartTime;
    CGFloat _slowMotionLastTime;
    CGFloat _slowMotionAccumulator;
    _opaque_pthread_mutex_t _lock;
}


@property (nonatomic) CGFloat beginTime; // ivar: _beginTime
@property (weak, nonatomic) NSObject<POPAnimatorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableDisplayLink; // ivar: _disableDisplayLink
@property (readonly, nonatomic) CGFloat refreshPeriod;


+(id)sharedAnimator;
-(CGFloat)_currentRenderTime;
-(id)animationForObject:(id)arg0 key:(id)arg1 ;
-(id)animationKeysForObject:(id)arg0 ;
-(id)init;
-(id)observers;
-(void)_clearPendingListObserver;
-(void)_processPendingList;
-(void)_renderTime:(CGFloat)arg0 item:(struct shared_ptr<POPAnimatorItem> )arg1 ;
-(void)_renderTime:(CGFloat)arg0 items:(struct list<std::shared_ptr<POPAnimatorItem>, std::allocator<std::shared_ptr<POPAnimatorItem>>> )arg1 ;
-(void)_scheduleProcessPendingList;
-(void)addAnimation:(id)arg0 forObject:(id)arg1 key:(id)arg2 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeAllAnimationsForObject:(id)arg0 ;
-(void)removeAnimationForObject:(id)arg0 key:(id)arg1 ;
-(void)removeAnimationForObject:(id)arg0 key:(id)arg1 cleanupDict:(BOOL)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)render;
-(void)renderTime:(CGFloat)arg0 ;


@end


#endif