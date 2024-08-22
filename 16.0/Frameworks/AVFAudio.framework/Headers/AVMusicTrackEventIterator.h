// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMUSICTRACKEVENTITERATOR_H
#define AVMUSICTRACKEVENTITERATOR_H


#import <Foundation/Foundation.h>


@interface AVMusicTrackEventIterator : NSObject {
    *MusicTrackEventIteratorImpl _impl;
}




-(BOOL)hasCurrentEvent;
-(BOOL)hasNextEvent;
-(BOOL)hasPreviousEvent;
-(BOOL)setEventInfo:(unsigned int)arg0 data:(*void)arg1 ;
-(BOOL)setEventTime:(CGFloat)arg0 ;
-(id)initWithImpl:(struct MusicTrackEventIteratorImpl *)arg0 ;
-(int)nextEvent;
-(int)previousEvent;
-(void)deleteEvent;
-(void)getEventInfo:(*CGFloat)arg0 outEventType:(*unsigned int)arg1 eventData:(**void)arg2 dataSize:(*unsigned int)arg3 ;
-(void)seek:(CGFloat)arg0 ;


@end


#endif