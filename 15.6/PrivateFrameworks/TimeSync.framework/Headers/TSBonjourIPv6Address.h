// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSBONJOURIPV6ADDRESS_H
#define TSBONJOURIPV6ADDRESS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSBonjourIPv6Address : NSObject <NSCopying>

 {
    unsigned char _ipv6Address;
    unsigned char _linkLayerAddress;
}


@property (nonatomic) BOOL hasLinkLayerAddress; // ivar: _hasLinkLayerAddress
@property (readonly, nonatomic) char * ipv6Address;
@property (readonly, nonatomic) char * linkLayerAddress;


+(BOOL)getLinkLayerAddress:(char *)arg0 forIPv6Address:(char *)arg1 error:(*id)arg2 ;
-(BOOL)getLinkLayerAddressError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIPv6Address:(char *)arg0 ;
-(void)pokeDestinationAtPort:(unsigned short)arg0 onInterfaceIndex:(unsigned int)arg1 ;


@end


#endif