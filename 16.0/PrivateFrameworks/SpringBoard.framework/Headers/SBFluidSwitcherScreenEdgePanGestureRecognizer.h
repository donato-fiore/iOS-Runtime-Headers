// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERSCREENEDGEPANGESTURERECOGNIZER_H
#define SBFLUIDSWITCHERSCREENEDGEPANGESTURERECOGNIZER_H



#import "SBHomeGesturePanGestureRecognizer.h"
#import "SBFluidSwitcherViewController.h"

@interface SBFluidSwitcherScreenEdgePanGestureRecognizer : SBHomeGesturePanGestureRecognizer {
    NSInteger _touchInterfaceOrientationWhenGestureBegan;
}


@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController; // ivar: _switcherViewController


-(NSInteger)_touchInterfaceOrientation;
-(id)viewForTouchHistory;
-(void)reset;
-(void)setState:(NSInteger)arg0 ;


@end


#endif