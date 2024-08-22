// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMUSICUSEREVENT_H
#define AVMUSICUSEREVENT_H

@class NSMutableData;


#import "AVMusicEvent.h"

@interface AVMusicUserEvent : AVMusicEvent {
    NSMutableData *_userData;
}


@property (readonly) unsigned int sizeInBytes;
@property (readonly) *MusicEventUserData userData;


-(id)initWithData:(id)arg0 ;
-(id)initWithUserData:(struct MusicEventUserData *)arg0 ;


@end


#endif