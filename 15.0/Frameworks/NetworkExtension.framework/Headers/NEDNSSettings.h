// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEDNSSETTINGS_H
#define NEDNSSETTINGS_H

@class NSString, NSArray;
@protocol NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEDNSSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>



@property (readonly) NSInteger dnsProtocol;
@property (copy) NSString *domainName; // ivar: _domainName
@property (copy) NSArray *matchDomains; // ivar: _matchDomains
@property BOOL matchDomainsNoSearch; // ivar: _matchDomainsNoSearch
@property (copy) NSArray *searchDomains; // ivar: _searchDomains
@property (readonly) NSArray *servers; // ivar: _servers
@property (readonly, nonatomic) BOOL useForAllDomains;


+(BOOL)supportsSecureCoding;
+(id)createDNSSettingsFromLegacyDictionary:(id)arg0 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)overlapsWithSettings:(id)arg0 ;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServers:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif