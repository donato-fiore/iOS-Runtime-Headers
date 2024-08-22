// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRTRANSACTIONPACKETACCUMULATOR_H
#define MRTRANSACTIONPACKETACCUMULATOR_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface MRTransactionPacketAccumulator : NSObject {
    NSMutableOrderedSet *_packets;
    NSUInteger _currentLength;
}




-(id)init;
-(id)mergePacket:(id)arg0 ;


@end


#endif