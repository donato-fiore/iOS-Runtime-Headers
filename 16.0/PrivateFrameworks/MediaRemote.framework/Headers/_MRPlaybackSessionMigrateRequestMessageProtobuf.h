// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRPLAYBACKSESSIONMIGRATEREQUESTMESSAGEPROTOBUF_H
#define _MRPLAYBACKSESSIONMIGRATEREQUESTMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRPlaybackSessionProtobuf.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"
#import "_MRPlaybackSessionMigrateRequestProtobuf.h"

@interface _MRPlaybackSessionMigrateRequestMessageProtobuf : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPlaybackSession;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (readonly, nonatomic) BOOL hasRequest;
@property (retain, nonatomic) _MRPlaybackSessionProtobuf *playbackSession; // ivar: _playbackSession
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // ivar: _playerPath
@property (retain, nonatomic) _MRPlaybackSessionMigrateRequestProtobuf *request; // ivar: _request


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif