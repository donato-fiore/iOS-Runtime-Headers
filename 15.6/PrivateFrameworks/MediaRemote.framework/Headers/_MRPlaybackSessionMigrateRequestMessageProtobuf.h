// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRPLAYBACKSESSIONMIGRATEREQUESTMESSAGEPROTOBUF_H
#define _MRPLAYBACKSESSIONMIGRATEREQUESTMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRPlaybackSessionProtobuf.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"
#import "_MRPlaybackSessionMigrateRequestProtobuf.h"

@interface _MRPlaybackSessionMigrateRequestMessageProtobuf : PBCodable <NSCopying>

 {
    _MRPlaybackSessionProtobuf *_playbackSession;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    _MRPlaybackSessionMigrateRequestProtobuf *_request;
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