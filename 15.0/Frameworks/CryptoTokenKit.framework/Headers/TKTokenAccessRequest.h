// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKTOKENACCESSREQUEST_H
#define TKTOKENACCESSREQUEST_H

@class NSString, NSXPCConnection, NSUUID;

#import <Foundation/Foundation.h>

#import "TKTokenID.h"

@interface TKTokenAccessRequest : NSObject

@property (readonly, nonatomic) NSString *clientBundleID; // ivar: _clientBundleID
@property (readonly, nonatomic) NSXPCConnection *clientConnection; // ivar: _clientConnection
@property (readonly, nonatomic) BOOL clientHasAccessTokenEntitlement; // ivar: _clientHasAccessTokenEntitlement
@property (readonly, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, nonatomic) NSUUID *correlationID; // ivar: _correlationID
@property (readonly, nonatomic) NSString *providerBundleID; // ivar: _providerBundleID
@property (readonly, nonatomic) NSString *providerName; // ivar: _providerName
@property (readonly, nonatomic) TKTokenID *tokenID; // ivar: _tokenID


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCaller:(id)arg0 tokenID:(id)arg1 extension:(id)arg2 ;
-(id)initWithClientBundleID:(id)arg0 clientName:(id)arg1 clientConnection:(id)arg2 clientHasAccessTokenEntitlement:(BOOL)arg3 tokenID:(id)arg4 providerBundleID:(id)arg5 providerName:(id)arg6 correlationID:(id)arg7 ;


@end


#endif