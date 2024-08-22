// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICUSERCREDENTIALREQUEST_H
#define ICUSERCREDENTIALREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICClientInfo.h"
#import "ICUserIdentity.h"
#import "ICUserIdentityStore.h"

@interface ICUserCredentialRequest : NSObject <NSCopying>



@property (readonly, copy, nonatomic) ICClientInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy, nonatomic) ICUserIdentity *identity; // ivar: _identity
@property (readonly, nonatomic) ICUserIdentityStore *identityStore; // ivar: _identityStore
@property (nonatomic) NSInteger qualityOfService; // ivar: _qualityOfService
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentity:(id)arg0 identityStore:(id)arg1 clientInfo:(id)arg2 ;


@end


#endif