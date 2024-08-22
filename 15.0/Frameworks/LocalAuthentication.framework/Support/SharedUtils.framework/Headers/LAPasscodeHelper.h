// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LAPASSCODEHELPER_H
#define LAPASSCODEHELPER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface LAPasscodeHelper : NSObject {
    NSMutableDictionary *_failedAttemptsDictionary;
    NSMutableDictionary *_backoffEndTimeDictionary;
}




+(id)sharedInstance;
-(BOOL)accountBlockedForUserID:(id)arg0 ;
-(BOOL)isPasscodeSetWithError:(*id)arg0 ;
-(CGFloat)backoffTimeIntervalForUserID:(id)arg0 ;
-(NSInteger)createStash:(id)arg0 mode:(int)arg1 manifest:(id)arg2 ;
-(NSInteger)failedAttemptsForUserID:(id)arg0 ;
-(NSInteger)maxUnlockAttemptsForUserID:(id)arg0 ;
-(NSInteger)passcodeScreenStyleWithPolicy:(NSInteger)arg0 options:(id)arg1 darkInterface:(BOOL)arg2 ;
-(NSInteger)verifyPasswordUsingAKS:(id)arg0 acmContext:(id)arg1 userId:(id)arg2 policy:(NSInteger)arg3 options:(id)arg4 ;
-(NSInteger)verifyPasswordUsingPAM:(id)arg0 userID:(id)arg1 pamService:(id)arg2 pamUser:(id)arg3 pamToken:(id)arg4 ;
-(id)_currentUserID;
-(id)_passwordPolicyStatusForUserID:(id)arg0 ;
-(id)init;
-(unsigned int)_keybagHandleForUserId:(id)arg0 ;
-(void)_increaseFailedAttemptCountForUserID:(id)arg0 ;
-(void)_resetFailedAttemptCountForUserID:(id)arg0 ;


@end


#endif