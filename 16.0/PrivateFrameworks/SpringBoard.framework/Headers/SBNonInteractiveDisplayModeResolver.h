// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBNONINTERACTIVEDISPLAYMODERESOLVER_H
#define SBNONINTERACTIVEDISPLAYMODERESOLVER_H

@class FBSDisplayIdentity, NSString;
@protocol SBWindowingModeResolver, SBFAuthenticationStatusProvider, SBDisplayWindowingModeResolverDelegate;

#import <Foundation/Foundation.h>

#import "SBApplicationController.h"
#import "SBWindowScene.h"

@interface SBNonInteractiveDisplayModeResolver : NSObject <SBWindowingModeResolver>

 {
    FBSDisplayIdentity *_rootDisplayIdentity;
    SBApplicationController *_applicationController;
    id<SBFAuthenticationStatusProvider> *_userAuthenticationProvider;
    SBWindowScene *_monitoredWindowScene;
    BOOL _nonInteractiveModeAvailableOnPhysicalDisplay;
    BOOL _haveAuthenticatedOnce;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBDisplayWindowingModeResolverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayWindowingMode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isWindowingModeAvailable;
@property (readonly, nonatomic) FBSDisplayIdentity *rootDisplayIdentity;
@property (readonly) Class superclass;


-(id)initWithRootDisplay:(id)arg0 applicationController:(id)arg1 userAuthenticationProvider:(id)arg2 monitoredWindowScene:(id)arg3 ;
-(void)_appProcessStateDidChange:(id)arg0 ;
-(void)_authenicationStateDidChange:(id)arg0 ;
-(void)_evaluateAndNotifyOfStateChanges;


@end


#endif