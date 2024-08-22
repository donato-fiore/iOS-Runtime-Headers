// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMIDICONTROLCHANGEEVENT_H
#define AVMIDICONTROLCHANGEEVENT_H



#import "AVMIDIChannelEvent.h"

@interface AVMIDIControlChangeEvent : AVMIDIChannelEvent

@property (readonly) NSInteger messageType;
@property (readonly) unsigned int value;


-(id)initWithChannel:(unsigned int)arg0 messageType:(NSInteger)arg1 value:(unsigned int)arg2 ;
-(id)initWithMessage:(struct MIDIChannelMessage *)arg0 ;


@end


#endif