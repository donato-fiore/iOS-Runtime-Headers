// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUONEUPASSETTRANSITIONCONTEXT_H
#define PUONEUPASSETTRANSITIONCONTEXT_H

@class UIView, PXAction;

#import <Foundation/Foundation.h>

#import "PUAssetTransitionInfo.h"

@interface PUOneUpAssetTransitionContext : NSObject

@property (copy, nonatomic, setter=_setAnimationBlock:) id *animationBlock; // ivar: _animationBlock
@property (retain, nonatomic, setter=_setContainerView:) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) PXAction *executedAction; // ivar: _executedAction
@property (retain, nonatomic, setter=_setFromView:) UIView *fromView; // ivar: _fromView
@property (retain, nonatomic, setter=_setLeadingAssetTransitionInfo:) PUAssetTransitionInfo *leadingAssetTransitionInfo; // ivar: _leadingAssetTransitionInfo
@property (nonatomic, setter=_setShouldHideBackground:) BOOL shouldHideBackground; // ivar: _shouldHideBackground
@property (retain, nonatomic, setter=_setSnapshotView:) UIView *snapshotView; // ivar: _snapshotView
@property (retain, nonatomic, setter=_setTrailingAssetTransitionInfo:) PUAssetTransitionInfo *trailingAssetTransitionInfo; // ivar: _trailingAssetTransitionInfo
@property (retain, nonatomic, setter=_setTransitionInfo:) PUAssetTransitionInfo *transitionInfo; // ivar: _transitionInfo


+(id)oneUpAssetTransitionContextWithContainerView:(id)arg0 fromView:(id)arg1 snapshotView:(id)arg2 transitionInfo:(id)arg3 ;
+(id)oneUpAssetTransitionContextWithContainerView:(id)arg0 fromView:(id)arg1 snapshotView:(id)arg2 transitionInfo:(id)arg3 trailingAssetTransitionInfo:(id)arg4 leadingAssetTransitionInfo:(id)arg5 ;
-(id)oneUpTransitionContextWithAnimationBlock:(id)arg0 ;
-(id)oneUpTransitionContextWithContextShouldHideBackground:(BOOL)arg0 ;
-(id)oneUpTransitionContextWithContextWithContainerView:(id)arg0 ;


@end


#endif