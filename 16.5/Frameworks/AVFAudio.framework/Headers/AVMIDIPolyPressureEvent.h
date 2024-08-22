// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMIDIPOLYPRESSUREEVENT_H
#define AVMIDIPOLYPRESSUREEVENT_H



#import "AVMIDIChannelEvent.h"

@interface AVMIDIPolyPressureEvent : AVMIDIChannelEvent

@property unsigned int key;
@property unsigned int pressure;


-(id)initWithChannel:(unsigned int)arg0 key:(unsigned int)arg1 pressure:(unsigned int)arg2 ;
-(id)initWithMessage:(struct MIDIChannelMessage *)arg0 ;


@end


#endif