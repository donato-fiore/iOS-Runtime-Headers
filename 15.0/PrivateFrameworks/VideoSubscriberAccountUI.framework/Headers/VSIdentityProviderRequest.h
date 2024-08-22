// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSIDENTITYPROVIDERREQUEST_H
#define VSIDENTITYPROVIDERREQUEST_H

@class VSAccount, VSOptional, NSString, VSPersistentStorage;

#import <Foundation/Foundation.h>


@interface VSIdentityProviderRequest : NSObject

@property (retain, nonatomic) VSAccount *account; // ivar: _account
@property (retain, nonatomic) VSOptional *accountMetadataRequest; // ivar: _accountMetadataRequest
@property (copy, nonatomic) NSString *accountProviderAuthenticationToken; // ivar: _accountProviderAuthenticationToken
@property (readonly, nonatomic) BOOL allowsUI;
@property (readonly, nonatomic) BOOL forceAuthentication;
@property (copy, nonatomic) NSString *requestingAppAdamID; // ivar: _requestingAppAdamID
@property (copy, nonatomic) NSString *requestingAppDisplayName; // ivar: _requestingAppDisplayName
@property (readonly, nonatomic) BOOL requiresUI;
@property (retain, nonatomic) VSPersistentStorage *storage; // ivar: _storage
@property (nonatomic) NSInteger type; // ivar: _type


+(id)STBOptOutRequestWithStorage:(id)arg0 ;
+(id)accountMetadataRequestWithAccount:(id)arg0 storage:(id)arg1 accountMetadataRequest:(id)arg2 requestingAppDisplayName:(id)arg3 requestingAppAdamID:(id)arg4 accountProviderAuthenticationToken:(id)arg5 ;
+(id)deleteAccountRequestWithAccount:(id)arg0 storage:(id)arg1 ;
+(id)makeAccountRequestWithStorage:(id)arg0 ;
+(id)silentMakeAccountRequestWithStorage:(id)arg0 ;
-(id)_initWithRequestType:(NSInteger)arg0 account:(id)arg1 storage:(id)arg2 ;
-(id)description;
-(id)init;


@end


#endif