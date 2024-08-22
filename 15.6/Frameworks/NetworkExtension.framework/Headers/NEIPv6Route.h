// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIPV6ROUTE_H
#define NEIPV6ROUTE_H

@class NSString, NSNumber;
@protocol NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEIPv6Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>



@property (readonly) NSString *destinationAddress; // ivar: _destinationAddress
@property (readonly) NSNumber *destinationNetworkPrefixLength; // ivar: _destinationNetworkPrefixLength
@property (copy) NSString *gatewayAddress; // ivar: _gatewayAddress


+(BOOL)supportsSecureCoding;
+(id)defaultRoute;
+(void)initGlobals;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)isDefaultRoute;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinationAddress:(id)arg0 networkPrefixLength:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif