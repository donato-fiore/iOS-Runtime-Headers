// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMIDIMETAEVENT_H
#define AVMIDIMETAEVENT_H



#import "AVMusicEvent.h"

@interface AVMIDIMetaEvent : AVMusicEvent

@property (readonly) *MIDIMetaEvent metaEvent; // ivar: _event
@property (readonly) NSInteger type;


-(id)initWithMetaEvent:(struct MIDIMetaEvent *)arg0 ;
-(id)initWithType:(NSInteger)arg0 data:(id)arg1 ;
-(void)dealloc;


@end


#endif