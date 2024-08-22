// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SWCSERVICESPECIFIER_H
#define _SWCSERVICESPECIFIER_H

@class NSString, NSNumber;
@protocol SWCRedactedDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "_SWCApplicationIdentifier.h"
#import "_SWCDomain.h"

@interface _SWCServiceSpecifier : NSObject <SWCRedactedDescription, NSSecureCoding, NSCopying>



@property (readonly) _SWCApplicationIdentifier *SWCApplicationIdentifier; // ivar: _applicationIdentifier
@property (readonly) _SWCDomain *SWCDomain; // ivar: _domain
@property (readonly) NSString *applicationIdentifier;
@property (readonly) NSString *applicationIdentifierPrefix;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *domain;
@property (readonly) NSString *domainHost;
@property (readonly) char domainModeOfOperation;
@property (readonly) NSNumber *domainPort;
@property (readonly, getter=isDomainWildcard) BOOL domainWildcard;
@property (readonly, getter=isFullySpecified) BOOL fullySpecified;
@property (readonly) NSString *serviceType; // ivar: _serviceType
@property (readonly, getter=isValid) BOOL valid;


+(BOOL)supportsSecureCoding;
+(id)_serviceSpecifiersWithEntitlementValue:(id)arg0 serviceType:(id)arg1 error:(*id)arg2 ;
+(id)serviceSpecifiersWithEntitlementValue:(id)arg0 error:(*id)arg1 ;
+(id)serviceSpecifiersWithEntitlementValue:(id)arg0 serviceType:(id)arg1 error:(*id)arg2 ;
-(BOOL)domainEncompassesDomain:(id)arg0 ;
-(BOOL)domainEncompassesDomainOfServiceSpecifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithServiceType:(id)arg0 applicationIdentifier:(id)arg1 domain:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceType:(id)arg0 applicationIdentifier:(id)arg1 domain:(id)arg2 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif