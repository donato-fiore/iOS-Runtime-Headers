// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSPROCESS_H
#define BKSPROCESS_H

@class RBSProcessIdentity, RBSProcessHandle, RBSAssertion, RBSProcessMonitor, BSProcessHandle;
@protocol BKSProcessDelegate;

#import <Foundation/Foundation.h>

#import "BKSLaunchdJobSpecification.h"
#import "BKSProcessExitContext.h"
#import "BKSProcessAssertion.h"

@interface BKSProcess : NSObject {
    os_unfair_lock_s _lock;
    BOOL _bootstrapped;
    RBSProcessIdentity *_identity;
    RBSProcessHandle *_processHandle;
    BKSLaunchdJobSpecification *_jobSpec;
    RBSAssertion *_assertion;
    RBSProcessMonitor *_monitor;
    BKSProcessExitContext *_lastExitContext;
    BKSProcessAssertion *_mediaAssertion;
    BKSProcessAssertion *_audioAssertion;
    BKSProcessAssertion *_accessoryAssertion;
    RBSAssertion *_visibilityAssertion;
}


@property (readonly, nonatomic) CGFloat backgroundTimeRemaining;
@property (nonatomic) BOOL connectedToExternalAccessories; // ivar: _connectedToExternalAccessories
@property (weak, nonatomic) NSObject<BKSProcessDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BSProcessHandle *handle; // ivar: _handle
@property (readonly, nonatomic) BKSProcessExitContext *lastExitContext;
@property (nonatomic) BOOL nowPlayingWithAudio; // ivar: _nowPlayingWithAudio
@property (nonatomic) BOOL recordingAudio; // ivar: _recordingAudio
@property (readonly, nonatomic) NSInteger taskState; // ivar: _taskState
@property (nonatomic) NSInteger terminationReason; // ivar: _terminationReason
@property (nonatomic) NSInteger visibility; // ivar: _visibility
@property (nonatomic) BOOL workspaceLocked; // ivar: _workspaceLocked


+(id)busyExtensionInstances:(id)arg0 ;
+(id)currentProcess;
-(BOOL)_bootstrapWithError:(*id)arg0 ;
-(BOOL)bootstrapWithProcessHandle:(id)arg0 error:(*id)arg1 ;
-(BOOL)bootstrapWithSpecification:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithPID:(int)arg0 bundlePath:(id)arg1 visibility:(NSInteger)arg2 workspaceLocked:(BOOL)arg3 queue:(id)arg4 ;
-(id)initWithProcessIdentity:(id)arg0 ;
-(void)_lock_configureMonitor;
-(void)_lock_updateVisibility;
-(void)bootstrapCurrentProcess;
-(void)invalidate;


@end


#endif