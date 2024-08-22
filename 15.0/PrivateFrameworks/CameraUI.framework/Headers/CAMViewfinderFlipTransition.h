// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMVIEWFINDERFLIPTRANSITION_H
#define CAMVIEWFINDERFLIPTRANSITION_H

@protocol CAMViewfinderTransitionable;

#import <Foundation/Foundation.h>

#import "CAMSnapshotView.h"

@interface CAMViewfinderFlipTransition : NSObject

@property (retain, nonatomic, setter=_setBackSnapshotView:) CAMSnapshotView *_backSnapshotView; // ivar: __backSnapshotView
@property (nonatomic, setter=_setCurrentAnimationID:) NSUInteger _currentAnimationID; // ivar: __currentAnimationID
@property (retain, nonatomic, setter=_setFrontSnapshotView:) CAMSnapshotView *_frontSnapshotView; // ivar: __frontSnapshotView
@property (retain, nonatomic, setter=_setTargetSnapshotView:) CAMSnapshotView *_targetSnapshotView; // ivar: __targetSnapshotView
@property (readonly, weak, nonatomic) NSObject<CAMViewfinderTransitionable> *_transitionableViewfinder; // ivar: __transitionableViewfinder


-(CGFloat)_backSnapshotTargetRadiansForDirection:(NSUInteger)arg0 frontSnapshotRadians:(CGFloat)arg1 ;
-(CGFloat)_frontSnapshotTargetRadiansForDirection:(NSUInteger)arg0 fromRadians:(CGFloat)arg1 ;
-(id)_snapshotFlipAnimationFromValue:(CGFloat)arg0 toValue:(CGFloat)arg1 ;
-(id)initWithTransitionableViewfinder:(id)arg0 ;
-(void)_cleanupFromFlipTransition;
-(void)_getCurrentRadians:(*CGFloat)arg0 targetRadians:(*CGFloat)arg1 forDirection:(NSUInteger)arg2 withAnimation:(id)arg3 onFrontSnapshotLayer:(id)arg4 ;
-(void)completeTransitionToLivePreviewWithCompletionHandler:(id)arg0 ;
-(void)performFlipTransitionWithDirection:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif