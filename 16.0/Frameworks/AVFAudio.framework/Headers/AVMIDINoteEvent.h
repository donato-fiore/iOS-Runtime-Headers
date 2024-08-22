// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMIDINOTEEVENT_H
#define AVMIDINOTEEVENT_H



#import "AVMusicEvent.h"

@interface AVMIDINoteEvent : AVMusicEvent {
    MIDINoteMessage _msg;
}


@property unsigned int channel;
@property CGFloat duration;
@property unsigned int key;
@property (readonly) *MIDINoteMessage message;
@property unsigned int velocity;


-(BOOL)isEqualTo:(id)arg0 ;
-(id)initWithChannel:(unsigned int)arg0 key:(unsigned int)arg1 velocity:(unsigned int)arg2 duration:(CGFloat)arg3 ;
-(id)initWithMessage:(struct MIDINoteMessage *)arg0 ;


@end


#endif