// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSBONJOURIPV4ADDRESS_H
#define TSBONJOURIPV4ADDRESS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSBonjourIPv4Address : NSObject <NSCopying>

 {
    unsigned char _linkLayerAddress;
}


@property (nonatomic) BOOL hasLinkLayerAddress; // ivar: _hasLinkLayerAddress
@property (readonly, nonatomic) unsigned int ipv4Address; // ivar: _ipv4Address
@property (readonly, nonatomic) char * linkLayerAddress;


+(BOOL)getLinkLayerAddress:(char *)arg0 forIPv4Address:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)getLinkLayerAddressError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithIPv4Address:(unsigned int)arg0 ;


@end


#endif