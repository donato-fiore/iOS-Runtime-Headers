// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUPDATEPROVISIONINGREQUEST_H
#define AAUPDATEPROVISIONINGREQUEST_H

@class ACAccount, NSString;


#import "AARequest.h"

@interface AAUpdateProvisioningRequest : AARequest

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) NSString *authToken; // ivar: _authToken


+(Class)responseClass;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithAccount:(id)arg0 token:(id)arg1 ;
-(id)initWithURLString:(id)arg0 account:(id)arg1 ;
-(id)urlCredential;
-(id)urlRequest;
-(id)urlString;


@end


#endif