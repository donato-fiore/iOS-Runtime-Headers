// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUIQUADVIEW_H
#define CLKUIQUADVIEW_H

@class UIView, NSMutableArray, NSCountedSet, NSString, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, CLKUIQuadViewDelegate;


#import "CLKUIQuadViewRenderCoordinator.h"

@interface CLKUIQuadView : UIView {
    NSMutableArray *_mutableQuads;
    CLKUIQuadViewRenderCoordinator *_renderCoordinator;
    ? _delegateRespondsTo;
    NSUInteger _frameNum;
    unsigned int _debugId;
    NSCountedSet *_disabledRenderingReasons;
    NSObject<OS_dispatch_queue> *_asyncRenderQueue;
    NSObject<OS_dispatch_semaphore> *_asyncSemaphore;
}


@property (readonly, copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (weak, nonatomic) NSObject<CLKUIQuadViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGSize drawableSize;
@property (readonly, nonatomic) NSUInteger frameNum;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) NSInteger preferredFramesPerSecond;
@property (readonly, nonatomic) NSArray *quads;
@property (nonatomic) BOOL singleBufferMode; // ivar: _singleBufferMode


+(id)quadViewWithFrame:(struct CGRect )arg0 identifier:(id)arg1 ;
+(id)quadViewWithFrame:(struct CGRect )arg0 identifier:(id)arg1 options:(NSUInteger)arg2 ;
+(id)quadViewWithFrame:(struct CGRect )arg0 identifier:(id)arg1 options:(NSUInteger)arg2 colorSpace:(NSInteger)arg3 ;
-(BOOL)_displayAndCheckForDrawable:(BOOL)arg0 withCompletion:(id)arg1 ;
-(BOOL)_sync_prepareAndRenderForTime:(CGFloat)arg0 inGroup:(id)arg1 checkForDrawable:(BOOL)arg2 completion:(id)arg3 ;
-(BOOL)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(BOOL)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 completion:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 identifier:(id)arg1 options:(NSUInteger)arg2 asyncRenderQueue:(id)arg3 ;
-(id)snapshotInRect:(struct CGRect )arg0 scale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)_async_prepareAndRenderForTime:(CGFloat)arg0 inGroup:(id)arg1 checkForDrawable:(BOOL)arg2 completion:(id)arg3 ;
-(void)_handleQuadArrayChange:(id)arg0 ;
-(void)_prepareAndRenderForTime:(CGFloat)arg0 inGroup:(id)arg1 checkForDrawable:(BOOL)arg2 completion:(id)arg3 ;
-(void)_prerenderForTime:(CGFloat)arg0 ;
-(void)_runOnRenderQueueIfNeeded:(id)arg0 ;
-(void)addDisabledRenderingReason:(id)arg0 ;
-(void)addQuad:(id)arg0 ;
-(void)addQuadsFromArray:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)discardContents;
-(void)enumerateHierarchyObserversFromView:(id)arg0 withBlock:(id)arg1 ;
-(void)removeAllQuads;
-(void)removeDisabledRenderingReason:(id)arg0 ;
-(void)removeQuad:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif