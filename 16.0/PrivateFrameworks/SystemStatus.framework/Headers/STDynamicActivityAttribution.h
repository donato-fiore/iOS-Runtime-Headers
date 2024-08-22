// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STDYNAMICACTIVITYATTRIBUTION_H
#define STDYNAMICACTIVITYATTRIBUTION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STDynamicActivityAttribution : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) ? clientAuditToken; // ivar: _clientAuditToken
@property (readonly, copy, nonatomic) NSString *clientExecutablePath; // ivar: _clientExecutablePath
@property (readonly, copy, nonatomic) NSString *formattedString; // ivar: _formattedString
@property (readonly, copy, nonatomic) NSString *localizationKey; // ivar: _localizationKey
@property (readonly, nonatomic) ? maskingClientAuditToken; // ivar: _maskingClientAuditToken
@property (readonly, copy, nonatomic) NSString *maskingClientExecutablePath; // ivar: _maskingClientExecutablePath
@property (readonly, copy, nonatomic) NSString *website; // ivar: _website


+(BOOL)supportsSecureCoding;
+(id)attributionForClientAuditToken:(struct ? )arg0 clientExecutablePath:(id)arg1 bundleID:(id)arg2 localizationKey:(id)arg3 ;
+(id)attributionForClientAuditToken:(struct ? )arg0 maskingClientAuditToken:(struct ? )arg1 clientExecutablePath:(id)arg2 maskingClientExecutablePath:(id)arg3 localizationKey:(id)arg4 ;
+(id)attributionForClientAuditToken:(struct ? )arg0 maskingClientAuditToken:(struct ? )arg1 clientExecutablePath:(id)arg2 maskingClientExecutablePath:(id)arg3 stringWithFormat:(id)arg4 ;
+(id)attributionForClientAuditToken:(struct ? )arg0 maskingClientAuditToken:(struct ? )arg1 clientExecutablePath:(id)arg2 maskingClientExecutablePath:(id)arg3 website:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif