// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSGPTPUNICASTUDPV6PTPPORT_H
#define TSGPTPUNICASTUDPV6PTPPORT_H

@class NSData;


#import "TSgPTPFDPtPPort.h"
#import "TSXgPTPUnicastUDPv6PtPPort.h"

@interface TSgPTPUnicastUDPv6PtPPort : TSgPTPFDPtPPort {
    TSXgPTPUnicastUDPv6PtPPort *_implXPC;
}


@property (readonly, copy, nonatomic) NSData *destinationIPv6Address;


+(id)keyPathsForValuesAffectingDestinationIPv6Address;
-(id)initWithImplXPC:(id)arg0 ;


@end


#endif