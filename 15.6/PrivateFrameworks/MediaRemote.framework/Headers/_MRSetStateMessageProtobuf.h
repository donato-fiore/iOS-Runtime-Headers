// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
    CGFloat _playbackStateTimestamp;
    NSString *_displayID;
    NSString *_displayName;
    _MRNowPlayingInfoProtobuf *_nowPlayingInfo;
    _MRPlaybackQueueProtobuf *_playbackQueue;
    _MRPlaybackQueueCapabilitiesProtobuf *_playbackQueueCapabilities;
    int _playbackState;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    _MRPlaybackQueueRequestProtobuf *_request;
    _MRSupportedCommandsProtobuf *_supportedCommands;
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