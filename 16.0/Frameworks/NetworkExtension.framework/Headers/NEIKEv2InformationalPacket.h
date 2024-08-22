// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIKEV2INFORMATIONALPACKET_H
#define NEIKEV2INFORMATIONALPACKET_H

@class NSArray;


#import "NEIKEv2Packet.h"
#import "NEIKEv2ConfigPayload.h"

@interface NEIKEv2InformationalPacket : NEIKEv2Packet {
    NSArray *_deletes;
    NEIKEv2ConfigPayload *_config;
}




+(NSUInteger)exchangeType;
+(id)copyTypeDescription;
-(void)filloutPayloads;
-(void)gatherPayloads;


@end


#endif