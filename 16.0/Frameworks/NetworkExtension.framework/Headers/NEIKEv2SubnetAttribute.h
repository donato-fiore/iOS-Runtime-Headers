// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2SUBNETATTRIBUTE_H
#define NEIKEV2SUBNETATTRIBUTE_H

@class NWAddressEndpoint;
@protocol NSCopying;


#import "NEIKEv2ConfigurationAttribute.h"

@interface NEIKEv2SubnetAttribute : NEIKEv2ConfigurationAttribute <NSCopying>

 {
    unsigned char _prefix;
    unsigned int _ipv4SubnetMask;
    NWAddressEndpoint *_address;
    NSUInteger _customType;
}


@property (readonly) NWAddressEndpoint *address;
@property (readonly) unsigned int ipv4SubnetMask;
@property (readonly) unsigned char prefix;
@property (readonly) NWAddressEndpoint *subnetMaskAddress;


+(id)copyTypeDescription;
-(NSUInteger)attributeType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initCustomWithAttributeType:(NSUInteger)arg0 attributeName:(id)arg1 addressValue:(id)arg2 ipv4SubnetMask:(unsigned int)arg3 ;
-(id)initCustomWithAttributeType:(NSUInteger)arg0 attributeName:(id)arg1 addressValue:(id)arg2 prefix:(unsigned char)arg3 ;
-(id)initWithAddress:(id)arg0 ipv4SubnetMask:(unsigned int)arg1 ;
-(id)initWithAddress:(id)arg0 prefix:(unsigned char)arg1 ;


@end


#endif