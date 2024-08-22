// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPPROTOAUDIOFILEPLAYERASSET_H
#define SPPROTOAUDIOFILEPLAYERASSET_H

@class PBCodable;
@protocol NSCopying;


#import "SPProtoObjectMessage.h"
#import "SPProtoAudioFilePlayerAssetUpdateMetaData.h"

@interface SPProtoAudioFilePlayerAsset : PBCodable <NSCopying>



@property (retain, nonatomic) SPProtoObjectMessage *destroy; // ivar: _destroy
@property (readonly, nonatomic) BOOL hasDestroy;
@property (readonly, nonatomic) BOOL hasUpsertWithMetaData;
@property (retain, nonatomic) SPProtoAudioFilePlayerAssetUpdateMetaData *upsertWithMetaData; // ivar: _upsertWithMetaData


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