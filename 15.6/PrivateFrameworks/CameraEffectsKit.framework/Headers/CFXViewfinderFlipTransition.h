// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXVIEWFINDERFLIPTRANSITION_H
#define CFXVIEWFINDERFLIPTRANSITION_H

@class CAMSnapshotView, UIView;

#import <Foundation/Foundation.h>


@interface CFXViewfinderFlipTransition : NSObject

@property (retain, nonatomic, setter=_setBackSnapshotView:) CAMSnapshotView *_backSnapshotView; // ivar: __backSnapshotView
@property (nonatomic, setter=_setCurrentAnimationID:) NSUInteger _currentAnimationID; // ivar: __currentAnimationID
@property (retain, nonatomic, setter=_setFrontSnapshotView:) CAMSnapshotView *_frontSnapshotView; // ivar: __frontSnapshotView
@property (retain, nonatomic, setter=_setTargetSnapshotView:) CAMSnapshotView *_targetSnapshotView; // ivar: __targetSnapshotView
@property (weak, nonatomic) UIView *viewfinderView; // ivar: _viewfinderView


-(CGFloat)_backSnapshotTargetRadiansForDirection:(NSInteger)arg0 frontSnapshotRadians:(CGFloat)arg1 ;
-(CGFloat)_frontSnapshotTargetRadiansForDirection:(NSInteger)arg0 fromRadians:(CGFloat)arg1 ;
-(id)_snapshotFlipAnimationFromValue:(CGFloat)arg0 toValue:(CGFloat)arg1 ;
-(id)initWithViewfinderView:(id)arg0 ;
-(void)_cleanupFromFlipTransition;
-(void)_getCurrentRadians:(*CGFloat)arg0 targetRadians:(*CGFloat)arg1 forDirection:(NSInteger)arg2 withAnimation:(id)arg3 onFrontSnapshotLayer:(id)arg4 ;
-(void)completeTransitionToLivePreviewWithCompletionHandler:(id)arg0 ;
-(void)performFlipTransitionWithDirection:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif