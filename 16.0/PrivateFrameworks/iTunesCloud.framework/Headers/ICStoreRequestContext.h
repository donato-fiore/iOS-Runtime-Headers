// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTOREREQUESTCONTEXT_H
#define ICSTOREREQUESTCONTEXT_H

@protocol NSSecureCoding;


#import "ICRequestContext.h"
#import "ICUserIdentity.h"
#import "ICUserIdentityStore.h"
#import "ICStoreDialogResponseHandler.h"

@interface ICStoreRequestContext : ICRequestContext <NSSecureCoding>



@property (readonly, nonatomic) BOOL allowsExpiredBags; // ivar: _allowsExpiredBags
@property (readonly, copy, nonatomic) ICUserIdentity *delegatedIdentity; // ivar: _delegatedIdentity
@property (readonly, copy, nonatomic) ICUserIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) ICUserIdentityStore *identityStore; // ivar: _identityStore
@property (readonly, nonatomic) NSInteger personalizationStyle; // ivar: _personalizationStyle
@property (readonly, copy, nonatomic) ICStoreDialogResponseHandler *storeDialogResponseHandler; // ivar: _storeDialogResponseHandler


+(BOOL)supportsSecureCoding;
+(id)activeStoreAccountRequestContext;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_webkitUserAgentVersion;
-(id)copyWithBlock:(id)arg0 ;
-(id)description;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 ;
-(id)initWithIdentity:(id)arg0 clientInfo:(id)arg1 ;
-(id)initWithIdentity:(id)arg0 identityStore:(id)arg1 clientInfo:(id)arg2 ;
-(id)initWithIdentity:(id)arg0 identityStore:(id)arg1 clientInfo:(id)arg2 authenticationProvider:(id)arg3 ;
-(id)userAgent;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif