// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STPINCONTROLLER_H
#define STPINCONTROLLER_H

@class NSDate;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "STCoreUser.h"

@interface STPINController : NSObject

@property (retain) NSObject<OS_dispatch_source> *backoffTimer; // ivar: _backoffTimer
@property (readonly) BOOL canRecoveryAuthenticate;
@property (copy) NSDate *timeoutEndDate; // ivar: _timeoutEndDate
@property (readonly, nonatomic) STCoreUser *user; // ivar: _user


+(NSUInteger)pinLength;
-(BOOL)_authenticateWithPIN:(id)arg0 forUser:(id)arg1 allowPasscodeRecovery:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_isPINValid:(id)arg0 ;
-(BOOL)_saveChangesForUser:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setPasscode:(id)arg0 recoveryAppleID:(id)arg1 forUser:(id)arg2 error:(*id)arg3 ;
-(BOOL)authenticateWithPIN:(id)arg0 error:(*id)arg1 ;
-(id)_timeoutEndDateForAttemptNumber:(NSInteger)arg0 ;
-(id)initWithUser:(id)arg0 ;
-(void)_beginTimeoutUntilDate:(id)arg0 ;
// -(void)_setNewPIN:(id)arg0 currentPIN:(id)arg1 recoveryAppleIDPrompt:(id)arg2 completionHandler:(unk)arg3  ;
-(void)authenticateWithPIN:(id)arg0 allowPasscodeRecovery:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)authenticateWithPIN:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePIN:(id)arg0 completionHandler:(id)arg1 ;
// -(void)setPIN:(id)arg0 withRecoveryAppleIDPrompt:(id)arg1 completionHandler:(unk)arg2  ;
// -(void)updatePIN:(id)arg0 toPIN:(id)arg1 withRecoveryAppleIDPrompt:(id)arg2 completionHandler:(unk)arg3  ;


@end


#endif