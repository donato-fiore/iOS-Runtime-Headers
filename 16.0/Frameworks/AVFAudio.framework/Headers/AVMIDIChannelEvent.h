// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMIDICHANNELEVENT_H
#define AVMIDICHANNELEVENT_H



#import "AVMusicEvent.h"

@interface AVMIDIChannelEvent : AVMusicEvent {
    MIDIChannelMessage _msg;
}


@property unsigned int channel;
@property (readonly) *MIDIChannelMessage message;


-(BOOL)isEqualTo:(id)arg0 ;
-(id)initWithChannel:(unsigned char)arg0 status:(unsigned char)arg1 data1:(unsigned char)arg2 data2:(unsigned char)arg3 ;
-(id)initWithMessage:(struct MIDIChannelMessage *)arg0 ;
-(unsigned char)data1;
-(unsigned char)data2;
-(void)setData1:(unsigned char)arg0 ;
-(void)setData2:(unsigned char)arg0 ;


@end


#endif