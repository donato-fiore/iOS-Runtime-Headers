// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUTILINGVIEWNAVIGATIONTRANSITION_H
#define PUTILINGVIEWNAVIGATIONTRANSITION_H

@class NSString;
@protocol PUTilingViewControllerTransition;


#import "PUNavigationTransition.h"
#import "PUTilingViewTransitionHelper.h"

@interface PUTilingViewNavigationTransition : PUNavigationTransition <PUTilingViewControllerTransition>



@property (readonly, nonatomic) PUTilingViewTransitionHelper *_tilingViewTransitionHelper; // ivar: __tilingViewTransitionHelper
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasStarted;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransitionPaused) BOOL transitionPaused;


-(BOOL)isInteractive;
-(id)init;
-(void)_animateTransitionWithOperation:(NSInteger)arg0 ;
-(void)animatePopTransition;
-(void)animatePushTransition;
-(void)pauseTransition;
-(void)pauseTransitionWithOptions:(NSUInteger)arg0 ;
-(void)resumeTransition:(BOOL)arg0 ;
-(void)updatePausedTransitionWithProgress:(CGFloat)arg0 interactionProgress:(CGFloat)arg1 ;


@end


#endif