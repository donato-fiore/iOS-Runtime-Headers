// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBKSTOREERROR_H
#define SBKSTOREERROR_H

@class NSError, NSString;


#import "SBKTransaction.h"

@interface SBKStoreError : NSError

@property (readonly, copy, nonatomic) NSString *currentStoreAccountName;
@property (readonly, nonatomic) BOOL isAccountsChangedError;
@property (readonly, nonatomic) BOOL isAuthenticationError;
@property (readonly, nonatomic) BOOL isClampError;
@property (readonly, nonatomic) BOOL isRecoverableError;
@property (readonly, nonatomic) BOOL isTransactionCancelledError;
@property (readonly, nonatomic) BOOL isTransactionMissingInformationError;
@property (readonly, copy, nonatomic) NSString *previousStoreAccountName;
@property (readonly, nonatomic) CGFloat retrySeconds;
@property (retain, nonatomic) SBKTransaction *transaction; // ivar: _transaction


+(id)delegateCancelledErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)keyValueStoreDisabledErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)keyValueStoreErrorWithCode:(NSInteger)arg0 localizedDescription:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3 ;
+(id)killSwitchErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)networkingBlockedErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)noStoreAccountErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)serverClampErrorWithTransaction:(id)arg0 retrySeconds:(CGFloat)arg1 underlyingError:(id)arg2 ;
+(id)storeAccountMismatchErrorWithPreviousStoreAccountName:(id)arg0 currentStoreAccountName:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3 ;
+(id)storeAccountSessionExpiredWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)storeGenericErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)storeLoggedOutErrorWithPreviousStoreAccountName:(id)arg0 transaction:(id)arg1 underlyingError:(id)arg2 ;
+(id)storeValidationErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)transactionCancelledErrorWithTransaction:(id)arg0 code:(NSInteger)arg1 underlyingError:(id)arg2 ;
+(id)transactionCancelledErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)transactionMissingDomainErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)transactionMissingURLErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)transactionTimeoutErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)unknownErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)userCancelledSignInErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
+(id)userClampErrorWithTransaction:(id)arg0 retrySeconds:(CGFloat)arg1 underlyingError:(id)arg2 ;
+(id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg0 underlyingError:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif