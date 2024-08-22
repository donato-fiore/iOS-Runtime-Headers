// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICLLQUERYMESSAGE_H
#define _ICLLQUERYMESSAGE_H

@class PBCodable;
@protocol NSCopying;


#import "_ICLLParticipantQuery.h"
#import "_ICLLPlaybackControlSettingsQuery.h"
#import "_ICLLPlaybackSyncStateQuery.h"
#import "_ICLLQueueQuery.h"

@interface _ICLLQueryMessage : PBCodable <NSCopying>

 {
    _ICLLParticipantQuery *_participant;
    _ICLLPlaybackControlSettingsQuery *_playbackControlSettings;
    _ICLLPlaybackSyncStateQuery *_playbackSyncState;
    int _query;
    _ICLLQueueQuery *_queue;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif