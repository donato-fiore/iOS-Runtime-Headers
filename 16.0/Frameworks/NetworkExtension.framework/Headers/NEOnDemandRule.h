// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEONDEMANDRULE_H
#define NEONDEMANDRULE_H

@class NSArray, NSURL;
@protocol NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEOnDemandRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>



@property (copy) NSArray *DNSSearchDomainMatch; // ivar: _DNSSearchDomainMatch
@property (copy) NSArray *DNSServerAddressMatch; // ivar: _DNSServerAddressMatch
@property (copy) NSArray *SSIDMatch; // ivar: _SSIDMatch
@property (readonly) NSInteger action; // ivar: _action
@property NSInteger interfaceTypeMatch; // ivar: _interfaceTypeMatch
@property (copy) NSURL *probeURL; // ivar: _probeURL


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithAction:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif