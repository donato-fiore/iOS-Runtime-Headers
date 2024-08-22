// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRTRANSACTIONDESTINATION_H
#define MRTRANSACTIONDESTINATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRTransactionPacketizer.h"
#import "MRPlayerPath.h"

@interface MRTransactionDestination : NSObject {
    MRTransactionPacketizer *_packetizer;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, nonatomic) NSUInteger name; // ivar: _name
@property (readonly, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath


-(id)initWithName:(NSUInteger)arg0 playerPath:(id)arg1 ;
-(void)packetsFromMessage:(id)arg0 completion:(id)arg1 ;
-(void)unpacketize:(id)arg0 completion:(id)arg1 ;


@end


#endif