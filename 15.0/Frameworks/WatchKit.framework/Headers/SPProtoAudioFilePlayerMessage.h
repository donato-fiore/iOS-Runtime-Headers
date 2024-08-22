// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPPROTOAUDIOFILEPLAYERMESSAGE_H
#define SPPROTOAUDIOFILEPLAYERMESSAGE_H

@class PBCodable;
@protocol NSCopying;


#import "SPProtoAudioFilePlayerAsset.h"
#import "SPProtoAudioFilePlayerItem.h"
#import "SPProtoAudioFileQueuePlayer.h"

@interface SPProtoAudioFilePlayerMessage : PBCodable <NSCopying>



@property (retain, nonatomic) SPProtoAudioFilePlayerAsset *asset; // ivar: _asset
@property (readonly, nonatomic) BOOL hasAsset;
@property (readonly, nonatomic) BOOL hasPlayerItem;
@property (readonly, nonatomic) BOOL hasQueuePlayer;
@property (retain, nonatomic) SPProtoAudioFilePlayerItem *playerItem; // ivar: _playerItem
@property (retain, nonatomic) SPProtoAudioFileQueuePlayer *queuePlayer; // ivar: _queuePlayer


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