// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTXMESSAGETRANSMITTER_H
#define DTXMESSAGETRANSMITTER_H


#import <Foundation/Foundation.h>


@interface DTXMessageTransmitter : NSObject

@property unsigned int suggestedFragmentSize; // ivar: _suggestedFragmentSize


-(unsigned int)fragmentsForLength:(NSUInteger)arg0 ;
-(void)transmitMessage:(id)arg0 routingInfo:(struct DTXMessageRoutingInfo )arg1 fragment:(unsigned int)arg2 transmitter:(id)arg3 ;


@end


#endif