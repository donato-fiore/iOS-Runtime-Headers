// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBLAUNCHMANAGER_H
#define RBLAUNCHMANAGER_H

@protocol RBLaunchManagerDelegate;

#import <Foundation/Foundation.h>

#import "RBLaunchdJobManager.h"
#import "RBLaunchTracker.h"

@interface RBLaunchManager : NSObject {
    RBLaunchdJobManager *_jobManager;
    id<RBLaunchManagerDelegate> *_delegate;
    RBLaunchTracker *_launchTracker;
}




-(BOOL)_checkLaunchForBackoff:(id)arg0 error:(*id)arg1 ;
-(id)_resolveNewProcessForInstance:(id)arg0 requestIdentity:(id)arg1 context:(id)arg2 withError:(*id)arg3 ;
-(id)executeLaunchRequest:(id)arg0 existingProcess:(id)arg1 requestIdentity:(id)arg2 withError:(*id)arg3 ;
-(id)init;
-(id)initWithJobManager:(id)arg0 timeProvider:(id)arg1 delegate:(id)arg2 ;
-(void)_validateBundleIDForProcess:(id)arg0 launchedWithContext:(id)arg1 ;


@end


#endif