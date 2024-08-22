// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRTRANSACTIONPACKETIZER_H
#define MRTRANSACTIONPACKETIZER_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MRTransactionPacketizer : NSObject {
    NSMutableArray *_outgoingPackets;
    NSMutableDictionary *_incomingPackets;
}




-(BOOL)isEmpty;
-(void)packetize:(id)arg0 packageSize:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)unpacketize:(id)arg0 completion:(id)arg1 ;


@end


#endif