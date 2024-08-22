// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2ADDRESSLIST_H
#define NEIKEV2ADDRESSLIST_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface NEIKEv2AddressList : NSObject

@property NSUInteger ipv4AddressIndex; // ivar: _ipv4AddressIndex
@property (retain) NSMutableArray *ipv4AddressList; // ivar: _ipv4AddressList
@property NSUInteger ipv6AddressIndex; // ivar: _ipv6AddressIndex
@property (retain) NSMutableArray *ipv6AddressList; // ivar: _ipv6AddressList


+(id)getSynthesizedIPv6Address:(id)arg0 outgoingIf:(NSUInteger)arg1 nat64Prefixes:(struct ? *)arg2 numNat64Prefixes:(int)arg3 ;
+(id)normalizeServerAddress:(id)arg0 path:(id)arg1 ;
-(BOOL)addAddressToList:(id)arg0 ;
-(id)getNextAddressForPath:(id)arg0 ;


@end


#endif