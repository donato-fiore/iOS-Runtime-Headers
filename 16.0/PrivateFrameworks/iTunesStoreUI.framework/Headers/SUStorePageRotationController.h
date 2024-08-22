// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSTOREPAGEROTATIONCONTROLLER_H
#define SUSTOREPAGEROTATIONCONTROLLER_H



#import "SURotationController.h"
#import "SUViewController.h"

@interface SUStorePageRotationController : SURotationController {
    SURotationController *_childRotationController;
    SUViewController *_childViewController;
}




-(id)_childRotationController;
-(void)animateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)dealloc;
-(void)finishRotationFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)prepareToRotateToInterfaceOrientation:(NSInteger)arg0 ;


@end


#endif