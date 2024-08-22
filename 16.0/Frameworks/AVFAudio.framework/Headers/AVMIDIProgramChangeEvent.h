// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMIDIPROGRAMCHANGEEVENT_H
#define AVMIDIPROGRAMCHANGEEVENT_H



#import "AVMIDIChannelEvent.h"

@interface AVMIDIProgramChangeEvent : AVMIDIChannelEvent

@property unsigned int programNumber;


-(id)initWithChannel:(unsigned int)arg0 programNumber:(unsigned int)arg1 ;
-(id)initWithMessage:(struct MIDIChannelMessage *)arg0 ;


@end


#endif