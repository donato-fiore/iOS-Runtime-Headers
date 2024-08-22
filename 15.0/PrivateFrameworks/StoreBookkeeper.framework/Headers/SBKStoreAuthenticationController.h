// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKSTOREAUTHENTICATIONCONTROLLER_H
#define SBKSTOREAUTHENTICATIONCONTROLLER_H

@class SSAccount;

#import <Foundation/Foundation.h>


@interface SBKStoreAuthenticationController : NSObject

@property (nonatomic) BOOL shouldAuthenticate; // ivar: _shouldAuthenticate
@property (readonly, nonatomic) SSAccount *storeAccount; // ivar: _storeAccount


+(id)lastFailedSyncAccountIdentifier;
+(id)lastFailedSyncAccountName;
+(id)lastSyncedAccountIdentifier;
+(id)lastSyncedAccountName;
+(void)clearLastSyncnedAccount;
-(BOOL)isAuthenticationValidForTransaction:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldForceAuthenticationForTransaction:(id)arg0 ;
-(id)authenticationErrorsForTransaction:(id)arg0 ;
-(id)initWithStoreAccount:(id)arg0 ;
-(void)saveAccountToLastFailedSyncDefaults;
-(void)saveAccountToLastSyncedDefaults;


@end


#endif