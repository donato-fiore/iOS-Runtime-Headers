// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDYNAMICANIMATIONGROUP_H
#define _UIDYNAMICANIMATIONGROUP_H

@class UIDynamicAnimation, NSMutableArray, NSArray;



@interface _UIDynamicAnimationGroup : UIDynamicAnimation {
    id *_applier;
    NSMutableArray *_runningAnimations;
}


@property (copy, nonatomic) NSArray *animations; // ivar: _animations


-(BOOL)_animateForInterval:(CGFloat)arg0 ;
-(void)_appendSubclassDescription:(id)arg0 atLevel:(int)arg1 ;
-(void)_stopAnimation;
-(void)addAnimation:(id)arg0 ;
-(void)dealloc;
-(void)removeAnimation:(id)arg0 ;
-(void)runWithCompletion:(id)arg0 ;
// -(void)runWithGroupApplier:(id)arg0 completion:(unk)arg1  ;
// -(void)runWithGroupApplier:(id)arg0 completion:(unk)arg1 forScreen:(id)arg2 runLoopMode:(unk)arg3  ;


@end


#endif