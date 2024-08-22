// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRSENDLYRICSEVENTMESSAGE_H
#define MRSENDLYRICSEVENTMESSAGE_H



#import "MRProtocolMessage.h"
#import "_MRLyricsEventProtobuf.h"

@interface MRSendLyricsEventMessage : MRProtocolMessage

@property (readonly, nonatomic) _MRLyricsEventProtobuf *event;


-(NSUInteger)type;
-(id)initWithEvent:(id)arg0 ;


@end


#endif