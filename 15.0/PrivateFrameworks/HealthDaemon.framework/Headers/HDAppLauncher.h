// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDAPPLAUNCHER_H
#define HDAPPLAUNCHER_H

@class FBSOpenApplicationService, HDAssertionManager, NSMutableDictionary, NSMutableSet, NSString;
@protocol HDProcessStateObserver, HDAssertionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProcessStateManager.h"

@interface HDAppLauncher : NSObject <HDProcessStateObserver, HDAssertionObserver>

 {
    HDProcessStateManager *_processStateManager;
    FBSOpenApplicationService *_openApplicationService;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    NSMutableDictionary *_registeredAssertionsByIdentifier;
    NSMutableSet *_monitoredProcessBundleIdentifiers;
    NSMutableSet *_launchingProcessBundleIdentifiers;
    CGFloat _launchCountResetThreshold;
    CGFloat _baseLaunchDelay;
    NSInteger _maxLaunchCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)unitTest_hasAssertionForBundleIdentifier:(id)arg0 ;
-(id)initWithProcessStateManager:(id)arg0 openApplicationService:(id)arg1 ;
-(id)takeKeepAliveAssertionForApplicationBundleIdentifier:(id)arg0 processBundleIdentifier:(id)arg1 payloadOptions:(id)arg2 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)processTerminated:(id)arg0 ;
-(void)unitTest_setBaseLaunchDelay:(CGFloat)arg0 launchCountResetThreshold:(CGFloat)arg1 maxLaunchCount:(NSInteger)arg2 ;


@end


#endif