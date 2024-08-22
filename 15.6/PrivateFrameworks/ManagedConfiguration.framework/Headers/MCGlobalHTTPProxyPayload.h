// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCGLOBALHTTPPROXYPAYLOAD_H
#define MCGLOBALHTTPPROXYPAYLOAD_H

@class NSString, NSNumber;


#import "MCPayload.h"

@interface MCGlobalHTTPProxyPayload : MCPayload

@property (retain, nonatomic) NSString *credentialUUID; // ivar: _credentialUUID
@property (nonatomic) BOOL proxyCaptiveLoginAllowed; // ivar: _proxyCaptiveLoginAllowed
@property (retain, nonatomic) NSNumber *proxyCaptiveLoginAllowedNum; // ivar: _proxyCaptiveLoginAllowedNum
@property (nonatomic) BOOL proxyPACFallbackAllowed; // ivar: _proxyPACFallbackAllowed
@property (retain, nonatomic) NSNumber *proxyPACFallbackAllowedNum; // ivar: _proxyPACFallbackAllowedNum
@property (retain, nonatomic) NSString *proxyPACURLString; // ivar: _proxyPACURLString
@property (retain, nonatomic) NSString *proxyPassword; // ivar: _proxyPassword
@property (retain, nonatomic) NSString *proxyServer; // ivar: _proxyServer
@property (retain, nonatomic) NSNumber *proxyServerPort; // ivar: _proxyServerPort
@property (nonatomic) int proxyType; // ivar: _proxyType
@property (retain, nonatomic) NSString *proxyUsername; // ivar: _proxyUsername


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)installationWarnings;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)verboseDescription;


@end


#endif