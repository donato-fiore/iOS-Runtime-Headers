// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPPROTOAUDIOFILEPLAYERITEM_H
#define SPPROTOAUDIOFILEPLAYERITEM_H

@class PBCodable;
@protocol NSCopying;


#import "SPProtoObjectMessage.h"
#import "SPProtoAudioFilePlayerItemSetCurrentTime.h"
#import "SPProtoAudioFilePlayerStatus.h"
#import "SPProtoAudioFilePlayerUpdateContainedIdentifier.h"

@interface SPProtoAudioFilePlayerItem : PBCodable <NSCopying>



@property (retain, nonatomic) SPProtoObjectMessage *destroy; // ivar: _destroy
@property (retain, nonatomic) SPProtoObjectMessage *getCurrentTime; // ivar: _getCurrentTime
@property (readonly, nonatomic) BOOL hasDestroy;
@property (readonly, nonatomic) BOOL hasGetCurrentTime;
@property (readonly, nonatomic) BOOL hasNotifyDidPlayToEndTime;
@property (readonly, nonatomic) BOOL hasNotifyFailedToPlayToEndTime;
@property (readonly, nonatomic) BOOL hasNotifyTimeJumped;
@property (readonly, nonatomic) BOOL hasSetItemCurrentTime;
@property (readonly, nonatomic) BOOL hasSetStatus;
@property (readonly, nonatomic) BOOL hasUpsertWithAsset;
@property (retain, nonatomic) SPProtoObjectMessage *notifyDidPlayToEndTime; // ivar: _notifyDidPlayToEndTime
@property (retain, nonatomic) SPProtoObjectMessage *notifyFailedToPlayToEndTime; // ivar: _notifyFailedToPlayToEndTime
@property (retain, nonatomic) SPProtoObjectMessage *notifyTimeJumped; // ivar: _notifyTimeJumped
@property (retain, nonatomic) SPProtoAudioFilePlayerItemSetCurrentTime *setItemCurrentTime; // ivar: _setItemCurrentTime
@property (retain, nonatomic) SPProtoAudioFilePlayerStatus *setStatus; // ivar: _setStatus
@property (retain, nonatomic) SPProtoAudioFilePlayerUpdateContainedIdentifier *upsertWithAsset; // ivar: _upsertWithAsset


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sockPuppetMessage;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif