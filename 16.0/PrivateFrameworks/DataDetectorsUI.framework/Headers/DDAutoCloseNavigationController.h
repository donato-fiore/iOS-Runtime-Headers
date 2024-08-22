// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDAUTOCLOSENAVIGATIONCONTROLLER_H
#define DDAUTOCLOSENAVIGATIONCONTROLLER_H

@class UINavigationController;


#import "DDFlightAction.h"

@interface DDAutoCloseNavigationController : UINavigationController

@property (weak) DDFlightAction *target; // ivar: _target


-(void)closePressed;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif