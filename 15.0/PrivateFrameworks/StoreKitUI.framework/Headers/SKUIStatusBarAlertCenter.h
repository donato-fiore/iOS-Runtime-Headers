// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISTATUSBARALERTCENTER_H
#define SKUISTATUSBARALERTCENTER_H

@class NSString;
@protocol _SKUIStatusBarAlertViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "_SKUIStatusBarAlertViewController.h"
#import "_SKUIClickThroughWindow.h"

@interface SKUIStatusBarAlertCenter : NSObject <_SKUIStatusBarAlertViewControllerDelegate>



@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) _SKUIStatusBarAlertViewController *rootViewController; // ivar: _rootViewController
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic) _SKUIClickThroughWindow *window; // ivar: _window


+(id)sharedCenter;
-(id)init;
-(void)dismiss;
-(void)scheduleDismiss;
-(void)showMessage:(id)arg0 withStyle:(NSInteger)arg1 forDuration:(CGFloat)arg2 actionBlock:(id)arg3 ;
-(void)statusBarAlertViewControllerWasTapped:(id)arg0 ;
-(void)unscheduleDismiss;


@end


#endif