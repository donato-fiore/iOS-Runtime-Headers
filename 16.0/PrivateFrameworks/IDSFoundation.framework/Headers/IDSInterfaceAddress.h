// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSINTERFACEADDRESS_H
#define IDSINTERFACEADDRESS_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "IDSSockAddrWrapper.h"

@interface IDSInterfaceAddress : NSObject

@property (readonly, getter=isAWDL) BOOL AWDL; // ivar: _AWDL
@property (readonly, getter=isCellular) BOOL Cellular; // ivar: _Cellular
@property (readonly) NSUInteger IPVersion;
@property (readonly) IDSSockAddrWrapper *address; // ivar: _address
@property (readonly) NSData *bssid; // ivar: _bssid
@property (readonly, getter=isCompanionLink) BOOL companionLink; // ivar: _companionLink
@property (nonatomic) BOOL constrained; // ivar: _constrained
@property (readonly) unsigned int delegatedIndex; // ivar: _delegatedIndex
@property (readonly) NSString *delegatedName; // ivar: _delegatedName
@property (readonly) IDSSockAddrWrapper *destination; // ivar: _destination
@property (readonly, nonatomic) BOOL expensive; // ivar: _expensive
@property (copy) IDSSockAddrWrapper *external; // ivar: _external
@property (readonly) unsigned int index; // ivar: _index
@property (readonly) NSString *name; // ivar: _name
@property (readonly) IDSSockAddrWrapper *netmask; // ivar: _netmask
@property (readonly, getter=isTemporaryIPv6) BOOL temporary; // ivar: _temporary
@property (readonly, getter=isWired) BOOL wired; // ivar: _wired


+(?)interfaceAddress:(?)arg0 eflags:(?)arg1 v6flagsiftype;
+(id)BSSIDWithInterfaceName:(id)arg0 ;
+(id)addressesFromInterfaceAddresses:(id)arg0 ;
+(id)interfaceAddressWithTransmittedBytes:(char *)arg0 length:(NSInteger)arg1 withLocalInterfaceName:(id)arg2 ;
-(NSInteger)getTransmittableBytes:(char *)arg0 withPrefixByte:(unsigned char)arg1 ;
-(id)description;
-(id)initWithInterfaceAddress:(struct ifaddrs *)arg0 bflags:(unsigned char)arg1 bssid:(char *)arg2 bssidLength:(unsigned char)arg3 ;


@end


#endif