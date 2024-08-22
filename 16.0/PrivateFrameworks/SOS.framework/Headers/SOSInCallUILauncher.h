// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOSINCALLUILAUNCHER_H
#define SOSINCALLUILAUNCHER_H

@class NSString;
@protocol SBSRemoteAlertHandleObserver, SOSProcessObserverDelegate;

#import <Foundation/Foundation.h>

#import "SOSProcessObserver.h"

@interface SOSInCallUILauncher : NSObject <SBSRemoteAlertHandleObserver, SOSProcessObserverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SOSProcessObserver *processObserver; // ivar: _processObserver
@property (readonly) Class superclass;


+(id)SOSRemoteAlertActivationReasonForSOSInCallUILaunchReason:(NSInteger)arg0 ;
+(id)sharedInCallUILauncher;
-(void)launchInCallUIForReason:(NSInteger)arg0 withRequestURL:(id)arg1 completion:(id)arg2 ;
-(void)processObserver:(id)arg0 bundleIdentifier:(id)arg1 didUpdateApplicationRunning:(BOOL)arg2 ;


@end


#endif