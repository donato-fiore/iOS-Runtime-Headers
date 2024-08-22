// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICUSERVERIFICATIONCONTEXT_H
#define ICUSERVERIFICATIONCONTEXT_H

@class ACAccount, ACAccountStore, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICUserIdentityProperties.h"
#import "ICUserIdentityStore.h"

@interface ICUserVerificationContext : NSObject <NSCopying>



@property (retain, nonatomic) ACAccount *ACAccount; // ivar: _ACAccount
@property (retain, nonatomic) ACAccountStore *ACAccountStore; // ivar: _ACAccountStore
@property (copy, nonatomic) NSString *debugReason; // ivar: _debugReason
@property (copy, nonatomic) ICUserIdentityProperties *identityProperties; // ivar: _identityProperties
@property (retain, nonatomic) ICUserIdentityStore *identityStore; // ivar: _identityStore
@property (nonatomic) NSInteger interactionLevel; // ivar: _interactionLevel
@property (nonatomic) NSInteger verificationStyle; // ivar: _verificationStyle


+(id)contextWithACAccount:(id)arg0 accountStore:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif