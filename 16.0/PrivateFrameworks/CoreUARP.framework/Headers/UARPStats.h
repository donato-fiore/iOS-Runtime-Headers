// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPSTATS_H
#define UARPSTATS_H


#import <Foundation/Foundation.h>


@interface UARPStats : NSObject

@property (readonly) unsigned int packetsDuplicate; // ivar: _packetsDuplicate
@property (readonly) unsigned int packetsMissed; // ivar: _packetsMissed
@property (readonly) unsigned int packetsNoVersionAgreement; // ivar: _packetsNoVersionAgreement
@property (readonly) unsigned int packetsOutOfOrder; // ivar: _packetsOutOfOrder


-(id)initWithStatistics:(struct UARPStatistics *)arg0 ;


@end


#endif