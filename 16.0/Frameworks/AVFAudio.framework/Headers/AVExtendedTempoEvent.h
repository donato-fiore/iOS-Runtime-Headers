// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVEXTENDEDTEMPOEVENT_H
#define AVEXTENDEDTEMPOEVENT_H



#import "AVMusicEvent.h"

@interface AVExtendedTempoEvent : AVMusicEvent

@property CGFloat tempo; // ivar: _bpm


-(id)initWithTempo:(CGFloat)arg0 ;


@end


#endif