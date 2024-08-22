// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHWIDGETCONFIGURATIONFLIPANIMATOR_H
#define SBHWIDGETCONFIGURATIONFLIPANIMATOR_H

@class NSString, UIViewFloatAnimatableProperty, SBFTouchPassThroughView, UIView;
@protocol SBIconViewObserver, SBHViewControllerTransitionAnimating;

#import <Foundation/Foundation.h>

#import "SBHWidgetConfigurationTransformView.h"
#import "SBHWidgetSettings.h"

@interface SBHWidgetConfigurationFlipAnimator : NSObject <SBIconViewObserver, SBHViewControllerTransitionAnimating>



@property (nonatomic) NSInteger currentEndpoint; // ivar: _currentEndpoint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat endingFlipFraction; // ivar: _endingFlipFraction
@property (nonatomic) CGFloat endingRotationAngle; // ivar: _endingRotationAngle
@property (retain, nonatomic) UIViewFloatAnimatableProperty *flipAnimatableProperty; // ivar: _flipAnimatableProperty
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect homeScreenContentFrame; // ivar: _homeScreenContentFrame
@property (retain, nonatomic) SBFTouchPassThroughView *matchMoveView; // ivar: _matchMoveView
@property (retain, nonatomic) SBHWidgetConfigurationTransformView *sourceContainerView; // ivar: _sourceContainerView
@property (nonatomic) CGRect sourceContentFrame; // ivar: _sourceContentFrame
@property (nonatomic) CGRect sourceContentFrameInMatchMoveViewSpace; // ivar: _sourceContentFrameInMatchMoveViewSpace
@property (nonatomic) CGFloat startingFlipFraction; // ivar: _startingFlipFraction
@property (nonatomic) CGFloat startingRotationAngle; // ivar: _startingRotationAngle
@property (readonly) Class superclass;
@property (nonatomic) CGRect targetContentFrame; // ivar: _targetContentFrame
@property (nonatomic) CGRect targetContentFrameInMatchMoveViewSpace; // ivar: _targetContentFrameInMatchMoveViewSpace
@property (retain, nonatomic) UIView *targetSuperview; // ivar: _targetSuperview
@property (readonly, nonatomic) SBHWidgetSettings *widgetSettings; // ivar: _widgetSettings


-(id)init;
-(void)_configureForEndpoint:(NSInteger)arg0 context:(id)arg1 inMode:(NSInteger)arg2 completion:(id)arg3 ;
-(void)animateToEndpoint:(NSInteger)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)finalizeAnimationAtEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;
-(void)iconViewDidBecomeWindowless:(id)arg0 ;
-(void)iconViewWasDiscarded:(id)arg0 ;
-(void)iconViewWasRecycled:(id)arg0 ;
-(void)prepareToAnimateFromEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;


@end


#endif