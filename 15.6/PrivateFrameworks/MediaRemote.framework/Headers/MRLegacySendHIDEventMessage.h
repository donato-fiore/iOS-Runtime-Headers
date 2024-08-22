// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRLEGACYSENDHIDEVENTMESSAGE_H
#define MRLEGACYSENDHIDEVENTMESSAGE_H



#import "MRProtocolMessage.h"

@interface MRLegacySendHIDEventMessage : MRProtocolMessage {
    *__IOHIDEvent _event;
}


@property (readonly, nonatomic) _MRHIDButtonEvent buttonEvent;


-(NSUInteger)type;
-(id)description;
-(id)initWithHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(void)dealloc;


@end


#endif