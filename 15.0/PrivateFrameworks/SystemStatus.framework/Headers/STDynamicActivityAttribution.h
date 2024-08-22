// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


+(BOOL)supportsSecureCoding;
+(id)attributionForClientAuditToken:(struct ? )arg0 clientExecutablePath:(id)arg1 bundleID:(id)arg2 localizationKey:(id)arg3 ;
+(id)attributionForClientAuditToken:(struct ? )arg0 clientExecutablePath:(id)arg1 stringWithFormat:(id)arg2 maskingClientAuditToken:(struct ? )arg3 maskingClientExecutablePath:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithClientAuditToken:(struct ? )arg0 clientExecutablePath:(id)arg1 ;
-(id)_initWithclientAuditToken:(struct ? )arg0 clientExecutablePath:(id)arg1 maskingClientAuditToken:(struct ? )arg2 maskingClientExecutablePath:(id)arg3 ;
-(id)description;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif