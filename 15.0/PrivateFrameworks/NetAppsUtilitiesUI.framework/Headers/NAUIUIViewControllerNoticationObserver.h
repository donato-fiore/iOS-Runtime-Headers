// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NAUIUIVIEWCONTROLLERNOTICATIONOBSERVER_H
#define NAUIUIVIEWCONTROLLERNOTICATIONOBSERVER_H

@class NSMutableArray, UIViewController;

#import <Foundation/Foundation.h>


@interface NAUIUIViewControllerNoticationObserver : NSObject {
    NSMutableArray *_observations;
}


@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)init;
-(void)dealloc;


@end


#endif