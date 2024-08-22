// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRTRANSACTIONSOURCE_H
#define MRTRANSACTIONSOURCE_H

@class NSMutableArray;
@protocol MRTransactionSourceDelegate;

#import <Foundation/Foundation.h>

#import "MRTransactionPacketizer.h"
#import "MRPlayerPath.h"

@interface MRTransactionSource : NSObject {
    MRTransactionPacketizer *_packetizer;
    NSMutableArray *_packets;
    id<MRTransactionSourceDelegate> *_delegate;
}


@property (readonly, nonatomic) NSUInteger name; // ivar: _name
@property (readonly, nonatomic) MRPlayerPath *playerPath; // ivar: _playerPath


-(id)initWithName:(NSUInteger)arg0 playerPath:(id)arg1 packets:(id)arg2 delegate:(id)arg3 ;
-(void)_begin;
-(void)_processMessage:(id)arg0 ;


@end


#endif