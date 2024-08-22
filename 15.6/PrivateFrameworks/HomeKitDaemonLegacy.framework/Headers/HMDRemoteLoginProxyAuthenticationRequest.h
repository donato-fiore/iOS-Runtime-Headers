// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTELOGINPROXYAUTHENTICATIONREQUEST_H
#define HMDREMOTELOGINPROXYAUTHENTICATIONREQUEST_H

@class NSString, NSDictionary;
@protocol HMRemoteLoginMessageProtocol;


#import "HMDRemoteLoginAuthenticationRequest.h"

@interface HMDRemoteLoginProxyAuthenticationRequest : HMDRemoteLoginAuthenticationRequest <HMRemoteLoginMessageProtocol>



@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly, nonatomic) NSDictionary *messagePayload;
@property (retain, nonatomic) NSString *passwordToken; // ivar: _passwordToken
@property (retain, nonatomic) NSString *rawPassword; // ivar: _rawPassword
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *username; // ivar: _username
@property (readonly, copy, nonatomic) NSString *xpcMessageName;


+(BOOL)supportsSecureCoding;
+(id)objWithDict:(id)arg0 ;
+(id)objWithMessage:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif