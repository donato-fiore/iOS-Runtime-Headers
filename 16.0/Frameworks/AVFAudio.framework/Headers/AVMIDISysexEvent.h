// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMIDISYSEXEVENT_H
#define AVMIDISYSEXEVENT_H

@class NSMutableData;


#import "AVMusicEvent.h"

@interface AVMIDISysexEvent : AVMusicEvent {
    NSMutableData *_sysexData;
}


@property (readonly) *MIDIRawData rawData;
@property (readonly) unsigned int sizeInBytes;


-(id)initWithData:(id)arg0 ;
-(id)initWithMIDIRawData:(struct MIDIRawData *)arg0 ;


@end


#endif