// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRDEVICESETUPAUTHENTICATEACTION_H
#define TRDEVICESETUPAUTHENTICATEACTION_H

@class NSString, NSArray;


#import "TRDeviceSetupAction.h"

@interface TRDeviceSetupAuthenticateAction : TRDeviceSetupAction

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, copy, nonatomic) NSString *accountPassword;
@property (readonly, nonatomic) NSUInteger accountType;
@property (readonly, copy, nonatomic) NSArray *accountTypesWithSharedCredentials;
@property (readonly, nonatomic) NSUInteger attemptCount;
@property (readonly, copy, nonatomic) NSString *failureMessage;
@property (readonly, copy, nonatomic) NSString *requestMessage;


+(id)actionForCancelledRequestWithOriginalAction:(id)arg0 ;
+(id)actionForFailedAttemptWithOriginalAction:(id)arg0 requestMessage:(id)arg1 failureMessage:(id)arg2 ;
+(id)actionForFinishedRequestWithOriginalAction:(id)arg0 accountID:(id)arg1 accountPassword:(id)arg2 accountTypesWithSharedCredentials:(id)arg3 ;
+(id)actionForInitialAttemptWithAccountType:(NSUInteger)arg0 requestMessage:(id)arg1 ;
-(id)_initWithAccountType:(NSUInteger)arg0 accountID:(id)arg1 accountPassword:(id)arg2 accountTypesWithSharedCredentials:(id)arg3 attemptCount:(NSUInteger)arg4 requestMessage:(id)arg5 failureMessage:(id)arg6 ;
-(id)init;


@end


#endif