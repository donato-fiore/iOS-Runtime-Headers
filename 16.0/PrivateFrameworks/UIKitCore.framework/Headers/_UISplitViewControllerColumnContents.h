// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISPLITVIEWCONTROLLERCOLUMNCONTENTS_H
#define _UISPLITVIEWCONTROLLERCOLUMNCONTENTS_H


#import <Foundation/Foundation.h>

#import "UINavigationController.h"
#import "UIViewController.h"

@interface _UISplitViewControllerColumnContents : NSObject

@property (readonly, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly, nonatomic) UIViewController *navigationControllerWrapper; // ivar: _navigationControllerWrapper
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)description;
-(id)initWithViewController:(id)arg0 navigationController:(id)arg1 navigationControllerWrapper:(id)arg2 ;


@end


#endif