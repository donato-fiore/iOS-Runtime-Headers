// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKGAMECONTROLLERSUPPORT_H
#define GKGAMECONTROLLERSUPPORT_H

@class NSString;
@protocol GKGameCenterControllerDelegate;

#import <Foundation/Foundation.h>


@interface GKGameControllerSupport : NSObject <GKGameCenterControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)shared;
-(BOOL)shouldRegisterGameControllers;
-(void)controllerDidConnect:(id)arg0 ;
-(void)gameCenterViewControllerDidFinish:(id)arg0 ;
-(void)registerGameControllers;
-(void)setupController:(id)arg0 ;
-(void)showDashboard;


@end


#endif