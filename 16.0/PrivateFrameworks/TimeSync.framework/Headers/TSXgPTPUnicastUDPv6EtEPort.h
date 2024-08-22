// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXGPTPUNICASTUDPV6ETEPORT_H
#define TSXGPTPUNICASTUDPV6ETEPORT_H

@class NSData;


#import "TSXgPTPFDEtEPort.h"

@interface TSXgPTPUnicastUDPv6EtEPort : TSXgPTPFDEtEPort

@property (copy, nonatomic) NSData *destinationIPv6Address; // ivar: _destinationIPv6Address


-(void)_updateFromProperties:(id)arg0 ;


@end


#endif