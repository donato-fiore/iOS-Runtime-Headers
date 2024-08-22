// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXGPTPUNICASTUDPV4PTPPORT_H
#define TSXGPTPUNICASTUDPV4PTPPORT_H

@class NSNumber;


#import "TSXgPTPFDPtPPort.h"

@interface TSXgPTPUnicastUDPv4PtPPort : TSXgPTPFDPtPPort

@property (copy, nonatomic) NSNumber *destinationIPv4Address; // ivar: _destinationIPv4Address


-(void)_updateFromProperties:(id)arg0 ;


@end


#endif