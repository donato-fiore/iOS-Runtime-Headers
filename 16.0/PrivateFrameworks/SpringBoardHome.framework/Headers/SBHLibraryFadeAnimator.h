// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHLIBRARYFADEANIMATOR_H
#define SBHLIBRARYFADEANIMATOR_H

@class BSAnimationSettings;
@protocol SBHViewControllerTransitionAnimating;

#import <Foundation/Foundation.h>


@interface SBHLibraryFadeAnimator : NSObject <SBHViewControllerTransitionAnimating>



@property (nonatomic, getter=isAlreadyAnimating) BOOL alreadyAnimating; // ivar: _alreadyAnimating
@property (readonly, nonatomic) BSAnimationSettings *animationSettings; // ivar: _animationSettings


-(id)init;
-(void)_configureIndicatorViewsForEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;
-(void)_configurePrimaryViewsForEndpoint:(NSInteger)arg0 finalizing:(BOOL)arg1 withContext:(id)arg2 ;
-(void)animateToEndpoint:(NSInteger)arg0 withContext:(id)arg1 completion:(id)arg2 ;
-(void)finalizeAnimationAtEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;
-(void)prepareToAnimateFromEndpoint:(NSInteger)arg0 withContext:(id)arg1 ;


@end


#endif