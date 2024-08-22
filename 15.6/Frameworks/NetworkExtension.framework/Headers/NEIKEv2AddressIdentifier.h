// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2ADDRESSIDENTIFIER_H
#define NEIKEV2ADDRESSIDENTIFIER_H

@class NWAddressEndpoint;


#import "NEIKEv2Identifier.h"

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier

@property (retain) NWAddressEndpoint *address; // ivar: _address


+(id)copyTypeDescription;
-(NSUInteger)identifierType;
-(id)identifierData;
-(id)initWithAddress:(id)arg0 ;
-(id)stringValue;


@end


#endif