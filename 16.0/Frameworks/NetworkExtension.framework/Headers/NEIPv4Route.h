// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIPV4ROUTE_H
#define NEIPV4ROUTE_H

@class NSString;
@protocol NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEIPv4Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>



@property (readonly) NSString *destinationAddress; // ivar: _destinationAddress
@property (readonly) NSString *destinationSubnetMask; // ivar: _destinationSubnetMask
@property (copy) NSString *gatewayAddress; // ivar: _gatewayAddress


+(BOOL)supportsSecureCoding;
+(id)defaultRoute;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)isDefaultRoute;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinationAddress:(id)arg0 subnetMask:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif