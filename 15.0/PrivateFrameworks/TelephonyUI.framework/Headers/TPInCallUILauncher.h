// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPINCALLUILAUNCHER_H
#define TPINCALLUILAUNCHER_H

@class NSString;
@protocol SBSRemoteAlertHandleObserver, TPProcessObserverDelegate;

#import <Foundation/Foundation.h>

#import "TPProcessObserver.h"

@interface TPInCallUILauncher : NSObject <SBSRemoteAlertHandleObserver, TPProcessObserverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TPProcessObserver *processObserver; // ivar: _processObserver
@property (readonly) Class superclass;


+(id)TPRemoteAlertActivationReasonForTPInCallUILaunchReason:(NSInteger)arg0 ;
+(id)sharedInCallUILauncher;
-(void)launchInCallUIForReason:(NSInteger)arg0 withRequestURL:(id)arg1 completion:(id)arg2 ;
-(void)processObserver:(id)arg0 bundleIdentifier:(id)arg1 didUpdateApplicationRunning:(BOOL)arg2 ;


@end


#endif