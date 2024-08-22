// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRREMOVEENDPOINTSMESSAGE_H
#define MRREMOVEENDPOINTSMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"

@interface MRRemoveEndpointsMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *endpointUIDs;


-(NSUInteger)type;
-(id)initWithEndpointUIDs:(id)arg0 ;


@end


#endif