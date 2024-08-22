// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCONVERSATIONVIRTUALPARTICIPANTCONFIG_H
#define TUCONVERSATIONVIRTUALPARTICIPANTCONFIG_H

@class NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TUConversationVirtualParticipantConfig : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger connectionMaxAttempts; // ivar: _connectionMaxAttempts
@property (readonly, nonatomic) NSUInteger connectionRetryIntervalMillis; // ivar: _connectionRetryIntervalMillis
@property (copy, nonatomic) NSData *idsAliasingSalt; // ivar: _idsAliasingSalt
@property (readonly, nonatomic) NSUInteger rpcStreamMaxAttempts; // ivar: _rpcStreamMaxAttempts
@property (readonly, nonatomic) NSUInteger rpcStreamRetryIntervalMillis; // ivar: _rpcStreamRetryIntervalMillis
@property (readonly, copy, nonatomic) NSString *serverCertHostnameOverride; // ivar: _serverCertHostnameOverride
@property (readonly, copy, nonatomic) NSString *serverCertLeafMarkerOIDOverride; // ivar: _serverCertLeafMarkerOIDOverride
@property (readonly, nonatomic) BOOL serverCertValidationEnabled; // ivar: _serverCertValidationEnabled


+(BOOL)supportsSecureCoding;
+(id)serverCertHostnameUserDefaultsKey;
+(id)serverCertLeafMarkerOIDUserDefaultsKey;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConversationVirtualParticipantConfig:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConnectionRetryIntervalMillis:(NSUInteger)arg0 connectionMaxAttempts:(NSUInteger)arg1 rpcStreamRetryIntervalMillis:(NSUInteger)arg2 rpcStreamMaxAttempts:(NSUInteger)arg3 serverCertValidationEnabled:(BOOL)arg4 serverCertHostnameOverride:(id)arg5 serverCertLeafMarkerOIDOverride:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif