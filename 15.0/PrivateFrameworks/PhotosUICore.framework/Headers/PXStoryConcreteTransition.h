// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYCONCRETETRANSITION_H
#define PXSTORYCONCRETETRANSITION_H

@class NSArray, NSString;
@protocol PXStorySegmentTransition, PXStoryEffectTransition, PXStoryTransition;


#import "PXStoryAnimation.h"
#import "PXGEffect.h"

@interface PXStoryConcreteTransition : PXStoryAnimation <PXStorySegmentTransition, PXStoryEffectTransition, PXStoryTransition>



@property (readonly, nonatomic) PXGEffect *auxiliaryEffect; // ivar: _auxiliaryEffect
@property (readonly, copy, nonatomic) NSArray *clipLayouts; // ivar: _clipLayouts
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? duration; // ivar: _duration
@property (readonly, nonatomic) PXGEffect *effect; // ivar: _effect
@property (copy, nonatomic) id *effectAlphaHandler; // ivar: _effectAlphaHandler
@property (readonly, nonatomic) NSInteger event; // ivar: _event
@property (nonatomic) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat initialClipAlpha; // ivar: _initialClipAlpha
@property (readonly, nonatomic) char kind; // ivar: _kind
@property (readonly, nonatomic) CGFloat progress;
@property (readonly) Class superclass;


-(BOOL)canBePaused;
-(CGFloat)clipAlphaForTime:(struct ? )arg0 ;
-(id)diagnosticDescription;
-(id)initWithKind:(char)arg0 duration:(struct ? )arg1 effect:(id)arg2 ;
-(id)initWithKind:(char)arg0 duration:(struct ? )arg1 effect:(id)arg2 auxiliaryEffect:(id)arg3 ;
-(id)initWithKind:(char)arg0 duration:(struct ? )arg1 event:(NSInteger)arg2 ;
-(id)initWithKind:(char)arg0 duration:(struct ? )arg1 event:(NSInteger)arg2 clipLayouts:(id)arg3 ;
-(void)_end:(BOOL)arg0 ;
-(void)_updateClipAlphaForTime:(struct ? )arg0 ;
-(void)configureEffectForTime:(struct ? )arg0 ;
-(void)setPrimaryEffectAlpha:(CGFloat)arg0 auxiliaryEffectAlpha:(CGFloat)arg1 ;
-(void)timeDidChange;
-(void)wasStopped;


@end


#endif