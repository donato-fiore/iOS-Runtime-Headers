// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKTOOLSPICKERCONTROLLER_H
#define AKTOOLSPICKERCONTROLLER_H

@class UINavigationController, UIViewController;

#import <Foundation/Foundation.h>

#import "AKController.h"

@interface AKToolsPickerController : NSObject

@property (weak) AKController *controller; // ivar: _controller
@property (retain, nonatomic) UINavigationController *navController; // ivar: _navController
@property (retain, nonatomic) UIViewController *toolsListController; // ivar: _toolsListController


-(id)initWithController:(id)arg0 ;


@end


#endif