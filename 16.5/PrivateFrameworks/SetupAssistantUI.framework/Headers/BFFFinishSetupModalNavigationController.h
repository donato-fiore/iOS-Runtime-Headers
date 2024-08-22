// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFFFINISHSETUPMODALNAVIGATIONCONTROLLER_H
#define BFFFINISHSETUPMODALNAVIGATIONCONTROLLER_H



#import "BFFNavigationController.h"

@interface BFFFinishSetupModalNavigationController : BFFNavigationController

@property (nonatomic) BOOL isPad; // ivar: _isPad


-(BOOL)isModalInPresentation;
-(NSInteger)modalPresentationStyle;
-(id)childViewControllerForStatusBarStyle;
-(struct CGSize )preferredContentSize;


@end


#endif