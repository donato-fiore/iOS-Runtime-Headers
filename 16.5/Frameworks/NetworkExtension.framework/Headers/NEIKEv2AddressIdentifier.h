// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2ADDRESSIDENTIFIER_H
#define NEIKEV2ADDRESSIDENTIFIER_H

@class NWAddressEndpoint;


#import "NEIKEv2Identifier.h"

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier {
    NWAddressEndpoint *_address;
}


@property (readonly) NWAddressEndpoint *address;


+(id)copyTypeDescription;
-(NSUInteger)identifierType;
-(id)identifierData;
-(id)initWithAddress:(id)arg0 ;
-(id)stringValue;


@end


#endif