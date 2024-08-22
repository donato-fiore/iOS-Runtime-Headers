// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISYSTEMAPERTUREELEMENTSOURCEANIMATOR_H
#define SBUISYSTEMAPERTUREELEMENTSOURCEANIMATOR_H

@class NSMutableArray, NSString;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "SBUISystemApertureAnimationParameters.h"

@interface SBUISystemApertureElementSourceAnimator : NSObject <UIViewControllerAnimatedTransitioning>

 {
    NSMutableArray *_preflightActions;
    NSMutableArray *_postflightActions;
    NSMutableArray *_preAlongsideAnimations;
    NSMutableArray *_postAlongsideAnimations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBUISystemApertureAnimationParameters *settings; // ivar: _settings
@property (readonly) Class superclass;


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(void)addPostAlongsideAnimation:(id)arg0 ;
-(void)addPostflightAction:(id)arg0 ;
-(void)addPreAlongsideAnimation:(id)arg0 ;
-(void)addPreflightAction:(id)arg0 ;
-(void)animateTransition:(id)arg0 ;


@end


#endif