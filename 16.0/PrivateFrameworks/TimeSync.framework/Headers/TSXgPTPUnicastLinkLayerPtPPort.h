// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXGPTPUNICASTLINKLAYERPTPPORT_H
#define TSXGPTPUNICASTLINKLAYERPTPPORT_H

@class NSData;


#import "TSXgPTPFDPtPPort.h"

@interface TSXgPTPUnicastLinkLayerPtPPort : TSXgPTPFDPtPPort

@property (copy, nonatomic) NSData *destinationMACAddress; // ivar: _destinationMACAddress


-(void)_updateFromProperties:(id)arg0 ;


@end


#endif