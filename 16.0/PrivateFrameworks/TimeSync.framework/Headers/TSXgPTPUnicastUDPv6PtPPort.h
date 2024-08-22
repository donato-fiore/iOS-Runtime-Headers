// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXGPTPUNICASTUDPV6PTPPORT_H
#define TSXGPTPUNICASTUDPV6PTPPORT_H

@class NSData;


#import "TSXgPTPFDPtPPort.h"

@interface TSXgPTPUnicastUDPv6PtPPort : TSXgPTPFDPtPPort

@property (copy, nonatomic) NSData *destinationIPv6Address; // ivar: _destinationIPv6Address


-(void)_updateFromProperties:(id)arg0 ;


@end


#endif