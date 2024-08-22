// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRPLAYBACKSESSIONMIGRATEREQUESTPROTOBUF_H
#define _MRPLAYBACKSESSIONMIGRATEREQUESTPROTOBUF_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "_MRContentItemProtobuf.h"
#import "_MRPlaybackSessionRequestProtobuf.h"
#import "_MRNowPlayingPlayerPathProtobuf.h"

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL allowFadeTransition; // ivar: _allowFadeTransition
@property (retain, nonatomic) _MRContentItemProtobuf *contentItem; // ivar: _contentItem
@property (nonatomic) unsigned int destinationTypes; // ivar: _destinationTypes
@property (nonatomic) int endpointOptions; // ivar: _endpointOptions
@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (nonatomic) BOOL hasAllowFadeTransition;
@property (readonly, nonatomic) BOOL hasContentItem;
@property (nonatomic) BOOL hasDestinationTypes;
@property (nonatomic) BOOL hasEndpointOptions;
@property (readonly, nonatomic) BOOL hasInitiator;
@property (nonatomic) BOOL hasOriginatorType;
@property (nonatomic) BOOL hasPlaybackPosition;
@property (nonatomic) BOOL hasPlaybackRate;
@property (readonly, nonatomic) BOOL hasPlaybackSessionRequest;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) BOOL hasPlayerOptions;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (readonly, nonatomic) BOOL hasRequestID;
@property (retain, nonatomic) NSString *initiator; // ivar: _initiator
@property (nonatomic) unsigned int originatorType; // ivar: _originatorType
@property (nonatomic) CGFloat playbackPosition; // ivar: _playbackPosition
@property (nonatomic) CGFloat playbackRate; // ivar: _playbackRate
@property (retain, nonatomic) _MRPlaybackSessionRequestProtobuf *playbackSessionRequest; // ivar: _playbackSessionRequest
@property (nonatomic) int playbackState; // ivar: _playbackState
@property (nonatomic) int playerOptions; // ivar: _playerOptions
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // ivar: _playerPath
@property (retain, nonatomic) NSString *requestID; // ivar: _requestID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)endpointOptionsAsString:(int)arg0 ;
-(id)eventsAtIndex:(NSUInteger)arg0 ;
-(id)playbackStateAsString:(int)arg0 ;
-(id)playerOptionsAsString:(int)arg0 ;
-(int)StringAsEndpointOptions:(id)arg0 ;
-(int)StringAsPlaybackState:(id)arg0 ;
-(int)StringAsPlayerOptions:(id)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)clearEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif