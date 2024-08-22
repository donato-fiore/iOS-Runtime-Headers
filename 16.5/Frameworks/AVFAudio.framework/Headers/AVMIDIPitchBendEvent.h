// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMIDIPITCHBENDEVENT_H
#define AVMIDIPITCHBENDEVENT_H



#import "AVMIDIChannelEvent.h"

@interface AVMIDIPitchBendEvent : AVMIDIChannelEvent

@property unsigned int value;


-(id)initWithChannel:(unsigned int)arg0 value:(unsigned int)arg1 ;
-(id)initWithMessage:(struct MIDIChannelMessage *)arg0 ;


@end


#endif