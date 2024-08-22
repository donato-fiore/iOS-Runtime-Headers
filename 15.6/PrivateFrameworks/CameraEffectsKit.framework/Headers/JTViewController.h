// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JTVIEWCONTROLLER_H
#define JTVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, NSMutableDictionary;


#import "JTView.h"

@interface JTViewController : UIViewController

@property BOOL debuggingUIEnabled; // ivar: _debuggingUIEnabled
@property (retain, nonatomic) NSMutableArray *suspendInteractionTags; // ivar: _suspendInteractionTags
@property (retain, nonatomic) NSMutableDictionary *suspendedChildViewControllerRequests; // ivar: _suspendedChildViewControllerRequests
@property (retain, nonatomic) JTView *view;
@property (retain, nonatomic) UIViewController *viewControllerDrivingStatusAppearance; // ivar: _viewControllerDrivingStatusAppearance


-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
-(void)logSuspendedChildViewControllersToString:(id)arg0 indentLevel:(int)arg1 ;
-(void)logSuspendedViewControllers;
-(void)resumeInteractionForChildViewControllersWithTag:(id)arg0 ;
-(void)resumeInteractionWithTag:(id)arg0 ;
-(void)setChildViewControllerInteractionEnabledWithRequest:(id)arg0 enabled:(BOOL)arg1 ;
-(void)suspendChildViewControllersInteractionWithTag:(id)arg0 timeout:(CGFloat)arg1 excluding:(id)arg2 ;
-(void)suspendInteractionWithTag:(id)arg0 ;
-(void)timeoutInteractionSuspended:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif