// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRPLAYBACKSESSIONMIGRATEREQUESTPROTOBUF_H
#define _MRPLAYBACKSESSIONMIGRATEREQUESTPROTOBUF_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "_MRContentItemProtobuf.h"
#import "_MRPlaybackSessionRequestProtobuf.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying>

 {
    CGFloat _playbackPosition;
    CGFloat _playbackRate;
    _MRContentItemProtobuf *_contentItem;
    unsigned int _destinationTypes;
    int _endpointOptions;
    NSMutableArray *_events;
    unsigned int _originatorType;
    _MRPlaybackSessionRequestProtobuf *_playbackSessionRequest;
    int _playbackState;
    int _playerOptions;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_requestID;
    BOOL _allowFadeTransition;
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