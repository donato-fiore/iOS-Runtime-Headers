// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2ADDRESSATTRIBUTE_H
#define NEIKEV2ADDRESSATTRIBUTE_H

@class NWAddressEndpoint;
@protocol NSCopying;


#import "NEIKEv2ConfigurationAttribute.h"

@interface NEIKEv2AddressAttribute : NEIKEv2ConfigurationAttribute <NSCopying>



@property (retain) NWAddressEndpoint *address; // ivar: _address
@property (nonatomic) NSUInteger customType; // ivar: _customType


+(id)copyTypeDescription;
-(NSUInteger)attributeType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initCustomWithAttributeType:(NSUInteger)arg0 attributeName:(id)arg1 addressValue:(id)arg2 ;
-(id)initWithAddress:(id)arg0 ;


@end


#endif