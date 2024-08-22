// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVEXTENDEDNOTEONEVENT_H
#define AVEXTENDEDNOTEONEVENT_H



#import "AVMusicEvent.h"

@interface AVExtendedNoteOnEvent : AVMusicEvent

@property CGFloat duration;
@property (readonly) *ExtendedNoteOnEvent event; // ivar: _event
@property unsigned int groupID;
@property unsigned int instrumentID;
@property float midiNote;
@property float velocity;


-(id)initWithMIDINote:(float)arg0 velocity:(float)arg1 groupID:(unsigned int)arg2 duration:(CGFloat)arg3 ;
-(id)initWithMIDINote:(float)arg0 velocity:(float)arg1 instrumentID:(unsigned int)arg2 groupID:(unsigned int)arg3 duration:(CGFloat)arg4 ;
-(id)initWithNoteOnEvent:(struct ExtendedNoteOnEvent *)arg0 ;
-(void)dealloc;


@end


#endif