// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2ADDRESSATTRIBUTE_H
#define NEIKEV2ADDRESSATTRIBUTE_H

@class NWAddressEndpoint;
@protocol NSCopying;


#import "NEIKEv2ConfigurationAttribute.h"

@interface NEIKEv2AddressAttribute : NEIKEv2ConfigurationAttribute <NSCopying>

 {
    NWAddressEndpoint *_address;
    NSUInteger _customType;
}


@property (readonly) NWAddressEndpoint *address;


+(id)copyTypeDescription;
-(NSUInteger)attributeType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initCustomWithAttributeType:(NSUInteger)arg0 attributeName:(id)arg1 addressValue:(id)arg2 ;
-(id)initWithAddress:(id)arg0 ;


@end


#endif