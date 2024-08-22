// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEAPPRULE_H
#define NEAPPRULE_H

@class NSArray, NSString;
@protocol NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEAppRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>



@property (retain) NSArray *cachedMachOUUIDs; // ivar: _cachedMachOUUIDs
@property (copy) NSArray *matchAccountIdentifiers; // ivar: _matchAccountIdentifiers
@property (readonly) NSString *matchDesignatedRequirement; // ivar: _matchDesignatedRequirement
@property (copy) NSArray *matchDomains; // ivar: _matchDomains
@property (copy) NSString *matchPath; // ivar: _matchPath
@property (readonly) NSString *matchSigningIdentifier; // ivar: _matchSigningIdentifier
@property (copy) NSArray *matchTools; // ivar: _matchTools
@property BOOL noDivertDNS; // ivar: _noDivertDNS
@property BOOL noRestriction; // ivar: _noRestriction


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)matchesProcessWithAuditToken:(id)arg0 ;
-(BOOL)overlapsWithRule:(id)arg0 ;
-(BOOL)signingIdentifierAllowed:(id)arg0 domainsOrAccountsRequired:(*BOOL)arg1 ;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSigningIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif