// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPINSERTINTOPLAYBACKQUEUECOMMANDEVENT_H
#define MPINSERTINTOPLAYBACKQUEUECOMMANDEVENT_H

@class NSString, NSNumber, NSArray;


#import "MPRemoteCommandEvent.h"
#import "MPRemotePlaybackQueue.h"

@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSInteger destinationOffset; // ivar: _destinationOffset
@property (readonly, nonatomic) NSString *insertAfterContentItemID; // ivar: _insertAfterContentItemID
@property (readonly, nonatomic) NSInteger insertionPosition; // ivar: _insertionPosition
@property (readonly, nonatomic) MPRemotePlaybackQueue *playbackQueue; // ivar: _playbackQueue
@property (readonly, nonatomic) NSNumber *privateListeningOverride; // ivar: _privateListeningOverride
@property (readonly, copy, nonatomic) NSArray *supportedInsertionPositions; // ivar: _supportedInsertionPositions


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;
-(id)initWithCommand:(id)arg0 playbackQueue:(id)arg1 options:(id)arg2 ;


@end


#endif