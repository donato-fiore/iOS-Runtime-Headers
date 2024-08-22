// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERPACKETPROVIDER_H
#define NEFILTERPACKETPROVIDER_H



#import "NEFilterProvider.h"

@interface NEFilterPacketProvider : NEFilterProvider

@property (copy) id *packetHandler; // ivar: _packetHandler


-(id)delayCurrentPacket:(id)arg0 ;
-(void)allowPacket:(id)arg0 ;


@end


#endif