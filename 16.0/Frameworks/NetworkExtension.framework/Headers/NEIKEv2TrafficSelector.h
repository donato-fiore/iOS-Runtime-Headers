// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2TRAFFICSELECTOR_H
#define NEIKEV2TRAFFICSELECTOR_H

@class NWAddressEndpoint;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2TrafficSelector : NSObject <NSCopying>



@property (retain) NWAddressEndpoint *endAddress; // ivar: _endAddress
@property unsigned short endPort; // ivar: _endPort
@property unsigned char ipProtocol; // ivar: _ipProtocol
@property (retain) NWAddressEndpoint *startAddress; // ivar: _startAddress
@property unsigned short startPort; // ivar: _startPort


+(id)copyAllIPv4;
+(id)copyAllIPv6;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif