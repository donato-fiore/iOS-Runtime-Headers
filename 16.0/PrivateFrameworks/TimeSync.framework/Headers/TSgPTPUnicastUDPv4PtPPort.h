// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSGPTPUNICASTUDPV4PTPPORT_H
#define TSGPTPUNICASTUDPV4PTPPORT_H

@class NSNumber;


#import "TSgPTPFDPtPPort.h"
#import "TSXgPTPUnicastUDPv4PtPPort.h"

@interface TSgPTPUnicastUDPv4PtPPort : TSgPTPFDPtPPort {
    TSXgPTPUnicastUDPv4PtPPort *_implXPC;
}


@property (readonly, copy, nonatomic) NSNumber *destinationIPv4Address;


+(id)keyPathsForValuesAffectingDestinationIPv4Address;
-(id)initWithImplXPC:(id)arg0 ;


@end


#endif