// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKVIEWSERVICEINTERFACE_H
#define GKVIEWSERVICEINTERFACE_H

@class NSXPCInterface;



@interface GKViewServiceInterface : NSXPCInterface



+(id)challengeIssueHostViewControllerInterface;
+(id)challengeIssueServiceViewControllerInterface;
+(id)extensionHostInterface;
+(id)extensionInterface;
+(id)gameCenterHostViewControllerInterface;
+(id)gameCenterServiceViewControllerInterface;
+(id)matchmakerHostViewControllerInterface;
+(id)matchmakerServiceViewControllerInterface;
+(id)remoteFriendRequestViewControllerInterface;
+(id)remoteSignInViewControllerInterface;
+(id)serviceFriendRequestViewControllerInterface;
+(id)signInServiceViewControllerInterface;
+(id)turnBasedHostViewControllerInterface;
+(id)turnBasedServiceViewControllerInterface;
+(void)_configureKVOTypes:(id)arg0 ;
+(void)setClassesForExtensionInterface:(id)arg0 ;
+(void)setClassesForHostInterface:(id)arg0 ;


@end


#endif