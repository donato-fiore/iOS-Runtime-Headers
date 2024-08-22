// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERASTREAMFULLSCREENANIMATOR_H
#define HUCAMERASTREAMFULLSCREENANIMATOR_H


#import <Foundation/Foundation.h>

#import "HUGridCameraCell.h"

@interface HUCameraStreamFullScreenAnimator : NSObject

@property (readonly, nonatomic) HUGridCameraCell *sourceCameraCell; // ivar: _sourceCameraCell


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)initWithSourceCameraCell:(id)arg0 ;
-(struct CGRect )_adjustPresentedViewFrame:(struct CGRect )arg0 forTransitionContext:(id)arg1 ;
-(struct CGRect )_toViewFinalFrame:(id)arg0 ;


@end


#endif