// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSGPTPUNICASTUDPV4ETEPORT_H
#define TSGPTPUNICASTUDPV4ETEPORT_H

@class NSNumber;


#import "TSgPTPFDEtEPort.h"
#import "TSXgPTPUnicastUDPv4EtEPort.h"

@interface TSgPTPUnicastUDPv4EtEPort : TSgPTPFDEtEPort {
    TSXgPTPUnicastUDPv4EtEPort *_implXPC;
}


@property (readonly, copy, nonatomic) NSNumber *destinationIPv4Address;


+(id)keyPathsForValuesAffectingDestinationIPv4Address;
-(id)initWithImplXPC:(id)arg0 ;


@end


#endif