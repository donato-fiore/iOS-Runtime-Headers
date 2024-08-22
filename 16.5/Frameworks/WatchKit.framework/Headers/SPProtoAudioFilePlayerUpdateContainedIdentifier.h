// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPPROTOAUDIOFILEPLAYERUPDATECONTAINEDIDENTIFIER_H
#define SPPROTOAUDIOFILEPLAYERUPDATECONTAINEDIDENTIFIER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SPProtoAudioFilePlayerUpdateContainedIdentifier : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *containedIdentifier; // ivar: _containedIdentifier
@property (readonly, nonatomic) BOOL hasContainedIdentifier;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sockPuppetMessageForPlayerItemUpsertWithAsset;
-(id)sockPuppetMessageForQueuePlayerAppendItem;
-(id)sockPuppetMessageForQueuePlayerRemoveItem;
-(id)sockPuppetMessageForQueuePlayerReplaceCurrentItem;
-(id)sockPuppetMessageForQueuePlayerSetCurrentItem;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif