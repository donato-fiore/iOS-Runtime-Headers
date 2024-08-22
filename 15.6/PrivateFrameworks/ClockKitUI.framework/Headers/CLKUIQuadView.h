// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKUIQUADVIEW_H
#define CLKUIQUADVIEW_H

@class UIView, NSMutableArray, NSCountedSet, NSString, NSArray;
@protocol CLKUIQuadViewDelegate;


#import "CLKUIQuadViewDisplayLink.h"

@interface CLKUIQuadView : UIView {
    NSMutableArray *_mutableQuads;
    CLKUIQuadViewDisplayLink *_displayLink;
    ? _delegateRespondsTo;
    NSUInteger _frameNum;
    unsigned int _debugId;
    NSCountedSet *_disabledRenderingReasons;
}


@property (copy, nonatomic) NSString *debugIdentifier; // ivar: _debugIdentifier
@property (weak, nonatomic) NSObject<CLKUIQuadViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGSize drawableSize;
@property (readonly, nonatomic) NSUInteger frameNum;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) NSInteger preferredFramesPerSecond;
@property (readonly, nonatomic) NSArray *quads;
@property (nonatomic) BOOL singleBufferMode; // ivar: _singleBufferMode


+(id)quadViewWithFrame:(struct CGRect )arg0 ;
+(id)quadViewWithFrame:(struct CGRect )arg0 options:(NSUInteger)arg1 ;
+(id)quadViewWithFrame:(struct CGRect )arg0 options:(NSUInteger)arg1 colorSpace:(NSInteger)arg2 ;
-(BOOL)_displayAndCheckForDrawable:(BOOL)arg0 withCompletion:(id)arg1 ;
-(BOOL)_prepareAndRenderForTime:(CGFloat)arg0 inGroup:(id)arg1 checkForDrawable:(BOOL)arg2 completion:(id)arg3 ;
-(BOOL)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(BOOL)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 completion:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 options:(NSUInteger)arg1 ;
-(id)snapshotInRect:(struct CGRect )arg0 scale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)_handleQuadArrayChange:(id)arg0 ;
-(void)_prerenderForTime:(CGFloat)arg0 ;
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