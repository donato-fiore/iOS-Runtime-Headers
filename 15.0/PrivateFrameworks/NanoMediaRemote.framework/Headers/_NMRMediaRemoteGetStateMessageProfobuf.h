// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NMRMEDIAREMOTEGETSTATEMESSAGEPROFOBUF_H
#define _NMRMEDIAREMOTEGETSTATEMESSAGEPROFOBUF_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface _NMRMediaRemoteGetStateMessageProfobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *applicationInfoDigest; // ivar: _applicationInfoDigest
@property (readonly, nonatomic) BOOL hasApplicationInfoDigest;
@property (readonly, nonatomic) BOOL hasKnownDigest;
@property (readonly, nonatomic) BOOL hasNowPlayingInfoDigest;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (readonly, nonatomic) BOOL hasPlaybackQueueDigest;
@property (nonatomic) BOOL hasState;
@property (readonly, nonatomic) BOOL hasSupportedCommandsDigest;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSData *knownDigest; // ivar: _knownDigest
@property (retain, nonatomic) NSData *nowPlayingInfoDigest; // ivar: _nowPlayingInfoDigest
@property (nonatomic) int originIdentifier; // ivar: _originIdentifier
@property (retain, nonatomic) NSData *playbackQueueDigest; // ivar: _playbackQueueDigest
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) NSData *supportedCommandsDigest; // ivar: _supportedCommandsDigest
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