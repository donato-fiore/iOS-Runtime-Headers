// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHSTACKCONFIGURATIONFADEANIMATOR_H
#define SBHSTACKCONFIGURATIONFADEANIMATOR_H

@class BSAnimationSettings, UIView;
@protocol SBHViewControllerTransitionAnimating;

#import <Foundation/Foundation.h>


@interface SBHStackConfigurationFadeAnimator : NSObject <SBHViewControllerTransitionAnimating>



@property (nonatomic, getter=isAlreadyAnimating) BOOL alreadyAnimating; // ivar: _alreadyAnimating
@property (readonly, nonatomic) BSAnimationSettings *animationSettings; // ivar: _animationSettings
@property (retain, nonatomic) UIView *sourceSnapshotView; // ivar: _sourceSnapshotView


-(id)init;
-(void)_configureForEndpoint:(NSInteger)arg0 withCoordinator:(id)arg1 ;
-(void)_setupMatchMoveAnimationWithSourceView:(id)arg0 targetView:(id)arg1 ;
-(void)_updateSourceSnapshotViewUsingSourceIconView:(BOOL)arg0 withCoordinator:(id)arg1 ;
-(void)animateToEndpoint:(NSInteger)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)finalizeAnimationAtEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;
-(void)prepareToAnimateFromEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;


@end


#endif