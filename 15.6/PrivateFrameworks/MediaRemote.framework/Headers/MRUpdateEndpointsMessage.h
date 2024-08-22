// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUPDATEENDPOINTSMESSAGE_H
#define MRUPDATEENDPOINTSMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"

@interface MRUpdateEndpointsMessage : MRProtocolMessage {
    NSArray *_endpoints;
}


@property (readonly, nonatomic) NSArray *endpoints;
@property (readonly, nonatomic) unsigned int features;


-(NSUInteger)type;
-(id)initWithEndpoints:(id)arg0 endpointFeature:(unsigned int)arg1 ;


@end


#endif