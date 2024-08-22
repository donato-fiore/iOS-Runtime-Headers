// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEPROFILEPAYLOADBASEVPN_H
#define NEPROFILEPAYLOADBASEVPN_H

@class NSString;


#import "NEProfilePayloadBase.h"

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase

@property (copy, nonatomic) NSString *password; // ivar: _password
@property (nonatomic) BOOL passwordRequired; // ivar: _passwordRequired
@property (copy, nonatomic) NSString *pin; // ivar: _pin
@property (nonatomic) BOOL pinRequired; // ivar: _pinRequired
@property (copy, nonatomic) NSString *proxyPassword; // ivar: _proxyPassword
@property (nonatomic) BOOL proxyPasswordRequired; // ivar: _proxyPasswordRequired
@property (copy, nonatomic) NSString *proxyUserName; // ivar: _proxyUserName
@property (nonatomic) BOOL proxyUserNameRequired; // ivar: _proxyUserNameRequired
@property (copy, nonatomic) NSString *sharedSecret; // ivar: _sharedSecret
@property (nonatomic) BOOL sharedSecretRequired; // ivar: _sharedSecretRequired
@property (copy, nonatomic) NSString *userName; // ivar: _userName
@property (nonatomic) BOOL userNameRequired; // ivar: _userNameRequired


-(BOOL)setPostprocessedPayloadContents:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getPreprocessedPayloadContents;
-(id)initWithPayload:(id)arg0 ;
-(id)validatePayload;
-(void)extractPayloadContents:(id)arg0 ;
-(void)extractPayloadContentsHTTPProxy:(id)arg0 ;
-(void)extractPayloadContentsPIN:(id)arg0 ;
-(void)extractPayloadContentsSharedSecret:(id)arg0 ;
-(void)extractPayloadContentsUserNamePassword:(id)arg0 ;


@end


#endif