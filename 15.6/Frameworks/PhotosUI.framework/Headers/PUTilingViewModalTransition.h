// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUTILINGVIEWMODALTRANSITION_H
#define PUTILINGVIEWMODALTRANSITION_H

@class NSString;
@protocol PUTilingViewControllerTransition;


#import "PUModalTransition.h"
#import "PUTilingViewTransitionHelper.h"

@interface PUTilingViewModalTransition : PUModalTransition <PUTilingViewControllerTransition>



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
-(void)animateDismissTransition;
-(void)animatePresentTransition;
-(void)pauseTransition;
-(void)pauseTransitionWithOptions:(NSUInteger)arg0 ;
-(void)resumeTransition:(BOOL)arg0 ;
-(void)updatePausedTransitionWithProgress:(CGFloat)arg0 interactionProgress:(CGFloat)arg1 ;


@end


#endif