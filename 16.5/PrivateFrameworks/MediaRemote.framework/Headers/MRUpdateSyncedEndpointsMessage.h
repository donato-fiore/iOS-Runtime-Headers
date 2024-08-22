// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUPDATESYNCEDENDPOINTSMESSAGE_H
#define MRUPDATESYNCEDENDPOINTSMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"

@interface MRUpdateSyncedEndpointsMessage : MRProtocolMessage {
    NSArray *_endpoints;
}


@property (readonly, nonatomic) NSArray *endpoints;
@property (readonly, nonatomic) unsigned int features;


-(NSUInteger)type;
-(id)initWithEndpoints:(id)arg0 endpointFeature:(unsigned int)arg1 ;


@end


#endif