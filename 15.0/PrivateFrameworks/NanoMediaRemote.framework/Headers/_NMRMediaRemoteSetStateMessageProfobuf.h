// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NMRMEDIAREMOTESETSTATEMESSAGEPROFOBUF_H
#define _NMRMEDIAREMOTESETSTATEMESSAGEPROFOBUF_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface _NMRMediaRemoteSetStateMessageProfobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *applicationInfo; // ivar: _applicationInfo
@property (retain, nonatomic) NSData *digest; // ivar: _digest
@property (readonly, nonatomic) BOOL hasApplicationInfo;
@property (readonly, nonatomic) BOOL hasDigest;
@property (readonly, nonatomic) BOOL hasNowPlayingInfo;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (readonly, nonatomic) BOOL hasPayload;
@property (readonly, nonatomic) BOOL hasPlaybackQueue;
@property (nonatomic) BOOL hasState;
@property (readonly, nonatomic) BOOL hasSupportedCommands;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSData *nowPlayingInfo; // ivar: _nowPlayingInfo
@property (nonatomic) int originIdentifier; // ivar: _originIdentifier
@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (retain, nonatomic) NSData *playbackQueue; // ivar: _playbackQueue
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) NSData *supportedCommands; // ivar: _supportedCommands
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


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