// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHSTACKCONFIGURATIONAPERTUREANIMATOR_H
#define SBHSTACKCONFIGURATIONAPERTUREANIMATOR_H

@protocol SBHViewControllerTransitionAnimating;

#import <Foundation/Foundation.h>

#import "SBHWidgetSettings.h"

@interface SBHStackConfigurationApertureAnimator : NSObject <SBHViewControllerTransitionAnimating>



@property (nonatomic, getter=isAlreadyAnimating) BOOL alreadyAnimating; // ivar: _alreadyAnimating
@property (readonly, nonatomic) SBHWidgetSettings *widgetSettings; // ivar: _widgetSettings


-(BOOL)_shouldUseCenterZoomTransitionForCoordinator:(id)arg0 ;
-(id)init;
-(void)_configureApertureBackgroundViewsForEndpoint:(NSInteger)arg0 withCoordinator:(id)arg1 ;
-(void)_configureForEndpoint:(NSInteger)arg0 scroll:(BOOL)arg1 withCoordinator:(id)arg2 ;
-(void)_configureWidgetStackMatchingBackgroundViewForEndpoint:(NSInteger)arg0 withCoordinator:(id)arg1 ;
-(void)_removeMatchMoveAnimationFromTargetView:(id)arg0 ;
-(void)_setupMatchMoveAnimationWithSourceView:(id)arg0 targetView:(id)arg1 ;
-(void)animateToEndpoint:(NSInteger)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)finalizeAnimationAtEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;
-(void)prepareToAnimateFromEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;


@end


#endif