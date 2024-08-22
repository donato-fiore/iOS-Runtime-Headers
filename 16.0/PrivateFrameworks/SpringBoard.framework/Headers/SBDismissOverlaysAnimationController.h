// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDISMISSOVERLAYSANIMATIONCONTROLLER_H
#define SBDISMISSOVERLAYSANIMATIONCONTROLLER_H



#import "SBUIAnimationController.h"

@interface SBDismissOverlaysAnimationController : SBUIAnimationController

@property (readonly, nonatomic) NSUInteger dismissOptions; // ivar: _dismissOptions


+(BOOL)willDismissOverlaysForDismissOptions:(NSUInteger)arg0 ;
+(NSUInteger)_overlaysToDismissForOptions:(NSUInteger)arg0 ;
-(BOOL)_canBeInterrupted;
-(id)animationSettings;
-(id)initWithTransitionContextProvider:(id)arg0 ;
-(id)initWithTransitionContextProvider:(id)arg0 options:(NSUInteger)arg1 ;
-(void)_startAnimation;


@end


#endif