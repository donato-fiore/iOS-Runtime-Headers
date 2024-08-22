// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRTRANSACTIONMESSAGE_H
#define MRTRANSACTIONMESSAGE_H

@class NSMutableArray, NSArray;


#import "MRProtocolMessage.h"
#import "MRPlayerPath.h"

@interface MRTransactionMessage : MRProtocolMessage {
    NSMutableArray *_packets;
}


@property (readonly, nonatomic) NSUInteger name;
@property (readonly, nonatomic) NSArray *packets;
@property (readonly, nonatomic) MRPlayerPath *playerPath;


-(NSUInteger)type;
-(id)initWithContentItems:(id)arg0 forPlayerPath:(id)arg1 ;
-(id)initWithName:(NSUInteger)arg0 packets:(id)arg1 playerPath:(id)arg2 ;
-(id)initWithPlaybackQueue:(id)arg0 forPlayerPath:(id)arg1 ;


@end


#endif