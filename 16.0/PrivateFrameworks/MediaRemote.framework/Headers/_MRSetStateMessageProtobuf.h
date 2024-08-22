// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRSETSTATEMESSAGEPROTOBUF_H
#define _MRSETSTATEMESSAGEPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_MRNowPlayingInfoProtobuf.h"
#import "_MRPlaybackQueueProtobuf.h"
#import "_MRPlaybackQueueCapabilitiesProtobuf.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"
#import "_MRPlaybackQueueRequestProtobuf.h"
#import "_MRSupportedCommandsProtobuf.h"

@interface _MRSetStateMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *displayID; // ivar: _displayID
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasDisplayID;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasNowPlayingInfo;
@property (readonly, nonatomic) BOOL hasPlaybackQueue;
@property (readonly, nonatomic) BOOL hasPlaybackQueueCapabilities;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) BOOL hasPlaybackStateTimestamp;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (readonly, nonatomic) BOOL hasRequest;
@property (readonly, nonatomic) BOOL hasSupportedCommands;
@property (retain, nonatomic) _MRNowPlayingInfoProtobuf *nowPlayingInfo; // ivar: _nowPlayingInfo
@property (retain, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue; // ivar: _playbackQueue
@property (retain, nonatomic) _MRPlaybackQueueCapabilitiesProtobuf *playbackQueueCapabilities; // ivar: _playbackQueueCapabilities
@property (nonatomic) int playbackState; // ivar: _playbackState
@property (nonatomic) CGFloat playbackStateTimestamp; // ivar: _playbackStateTimestamp
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // ivar: _playerPath
@property (retain, nonatomic) _MRPlaybackQueueRequestProtobuf *request; // ivar: _request
@property (retain, nonatomic) _MRSupportedCommandsProtobuf *supportedCommands; // ivar: _supportedCommands


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)playbackStateAsString:(int)arg0 ;
-(int)StringAsPlaybackState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif