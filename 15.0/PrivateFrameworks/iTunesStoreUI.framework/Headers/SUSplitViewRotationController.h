// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSPLITVIEWROTATIONCONTROLLER_H
#define SUSPLITVIEWROTATIONCONTROLLER_H

@class UIViewController;


#import "SURotationController.h"

@interface SUSplitViewRotationController : SURotationController {
    SURotationController *_firstRotationController;
    UIViewController *_firstViewController;
    SURotationController *_secondRotationController;
    UIViewController *_secondViewController;
}




-(id)_firstRotationController;
-(id)_secondRotationController;
-(void)animateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)dealloc;
-(void)finishRotationFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)prepareToRotateToInterfaceOrientation:(NSInteger)arg0 ;


@end


#endif