// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCVPNPAYLOADBASE_H
#define MCVPNPAYLOADBASE_H

@class NSMutableDictionary, NSString;
@protocol NEProfilePayloadBaseDelegate;


#import "MCPayload.h"

@interface MCVPNPayloadBase : MCPayload

@property (retain, nonatomic) NSMutableDictionary *configurationDictionary; // ivar: _configurationDictionary
@property (retain, nonatomic) NSObject<NEProfilePayloadBaseDelegate> *nePayloadBase; // ivar: _nePayloadBase
@property (retain, nonatomic) NSString *passwordKey; // ivar: _passwordKey
@property (retain, nonatomic) NSString *pinKey; // ivar: _pinKey
@property (retain, nonatomic) NSString *proxyPasswordKey; // ivar: _proxyPasswordKey
@property (retain, nonatomic) NSString *proxyUserNameKey; // ivar: _proxyUserNameKey
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) NSString *sharedSecretKey; // ivar: _sharedSecretKey
@property (retain, nonatomic) NSString *userNameKey; // ivar: _userNameKey
@property (copy, nonatomic) NSString *vpnType; // ivar: _vpnType


+(id)NEAlwaysOnVPNPayloadBaseDelegateWithConfigurationDict:(id)arg0 ;
+(id)NEVPNPayloadBaseDelegateWithConfigurationDict:(id)arg0 ;
-(BOOL)isPayloadAllowed;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)installationWarnings;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)verboseDescription;


@end


#endif