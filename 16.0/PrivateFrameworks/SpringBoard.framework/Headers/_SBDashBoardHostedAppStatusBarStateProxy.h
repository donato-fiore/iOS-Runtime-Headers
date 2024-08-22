// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBDASHBOARDHOSTEDAPPSTATUSBARSTATEPROXY_H
#define _SBDASHBOARDHOSTEDAPPSTATUSBARSTATEPROXY_H



#import "SBDeviceApplicationSceneStatusBarStateProxy.h"
#import "SBDashBoardHostedAppViewController.h"

@interface _SBDashBoardHostedAppStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy

@property (weak, nonatomic) SBDashBoardHostedAppViewController *hostedAppVCBackReference; // ivar: _hostedAppVCBackReference


-(BOOL)_suppressInheritedPartStyles;
-(CGFloat)_statusBarAlpha;
-(NSInteger)_fallbackInterfaceOrientation;


@end


#endif