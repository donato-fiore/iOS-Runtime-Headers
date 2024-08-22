// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISTARTUPTOHOMESCREENANIMATIONCONTROLLER_H
#define SBUISTARTUPTOHOMESCREENANIMATIONCONTROLLER_H

@class BKSDisplayRenderOverlay;


#import "SBUIMainScreenAnimationController.h"

@interface SBUIStartupToHomescreenAnimationController : SBUIMainScreenAnimationController {
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
}




-(BOOL)_shouldDismissBanner;
-(CGFloat)_animationDelay;
-(id)animationSettings;
-(id)initWithTransitionContextProvider:(id)arg0 ;
-(id)initWithTransitionContextProvider:(id)arg0 overlay:(id)arg1 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_startAnimation;


@end


#endif