// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBAPPCONTAINERSTATUSBARSTATEPROXY_H
#define _SBAPPCONTAINERSTATUSBARSTATEPROXY_H



#import "SBDeviceApplicationSceneStatusBarStateProxy.h"
#import "SBAppContainerViewController.h"

@interface _SBAppContainerStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy

@property (weak, nonatomic) SBAppContainerViewController *appVCBackReference; // ivar: _appVCBackReference


-(BOOL)_statusBarAppearsOutsideOfAJailedApp;
-(CGFloat)_statusBarAlpha;
-(NSInteger)_fallbackInterfaceOrientation;
-(NSInteger)_statusBarOrientationGivenFallbackOrientation:(NSInteger)arg0 ;
-(NSInteger)_statusBarStyle;
-(NSInteger)_statusBarStyleForPartWithIdentifier:(id)arg0 suppressingInherited:(BOOL)arg1 ;
-(NSInteger)overrideStatusBarStyle;


@end


#endif