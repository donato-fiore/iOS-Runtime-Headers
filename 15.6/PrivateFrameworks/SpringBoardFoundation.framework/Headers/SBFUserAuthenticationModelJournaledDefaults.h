// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFUSERAUTHENTICATIONMODELJOURNALEDDEFAULTS_H
#define SBFUSERAUTHENTICATIONMODELJOURNALEDDEFAULTS_H

@class MCProfileConnection, NSString, NSDictionary;
@protocol SBFUserAuthenticationModel, OS_dispatch_queue, SBFUserAuthenticationModelDelegate;

#import <Foundation/Foundation.h>

#import "SBSecurityDefaults.h"

@interface SBFUserAuthenticationModelJournaledDefaults : NSObject <SBFUserAuthenticationModel>

 {
    MCProfileConnection *_profileConnection;
    SBSecurityDefaults *_securityDefaults;
    NSString *_journalPath;
    NSObject<OS_dispatch_queue> *_persistentStateQueue;
    BOOL _speculativePasscodeFailureChargeOutstanding;
    NSDictionary *_originalDefaultsForRollback;
    BOOL _pendingWipe;
    BOOL _permanentlyBlocked;
    CGFloat _unblockTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SBFUserAuthenticationModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPermanentlyBlocked) BOOL permanentlyBlocked;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTemporarilyBlocked) BOOL temporarilyBlocked;
@property (readonly, nonatomic) CGFloat timeUntilUnblockedSinceReferenceDate;
@property (readonly, nonatomic, getter=isUserRequestedEraseEnabled) BOOL userRequestedEraseEnabled;


+(id)_journaledDefaultsAndTypes;
-(BOOL)_isDeviceWipePreferenceEnabled;
-(id)_copyLockControllerDefaults;
-(id)_initWithJournalPath:(id)arg0 securityDefaults:(id)arg1 profileConnection:(id)arg2 ;
-(id)init;
// -(id)updateLockControllerDefaultsWithBlock:(id)arg0 journaled:(unk)arg1  ;
-(void)_evaluatePendingWipe;
-(void)_loadLockControllerDefaults:(id)arg0 ;
-(void)_loadLockControllerDefaultsJournalIfNecessary;
-(void)_persistentStateQueue_beginSpeculativeFailureCharge;
-(void)_persistentStateQueue_cancelSpeculativeFailureCharge;
-(void)_persistentStateQueue_clearBlockedState;
-(void)_persistentStateQueue_evaluatePendingWipe;
-(void)_persistentStateQueue_loadLockState;
-(void)_persistentStateQueue_unlockFailedWithError:(id)arg0 ;
-(void)_persistentStateQueue_unlockSucceeded;
-(void)_updateLockControllerDefaultsJournal;
-(void)clearBlockedState;
-(void)notePasscodeEntryBegan;
-(void)notePasscodeEntryCancelled;
-(void)notePasscodeUnlockFailedWithError:(id)arg0 ;
-(void)notePasscodeUnlockSucceeded;
-(void)performPasswordTest:(id)arg0 ;
-(void)synchronize;
-(void)test_reloadState;


@end


#endif