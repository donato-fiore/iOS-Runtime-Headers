// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRREMOVESYNCEDENDPOINTSMESSAGE_H
#define MRREMOVESYNCEDENDPOINTSMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"

@interface MRRemoveSyncedEndpointsMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *endpointUIDs;


-(NSUInteger)type;
-(id)initWithEndpointUIDs:(id)arg0 ;


@end


#endif