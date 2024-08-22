// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSQRPROTOPLUGINCONTROLINDICATION_H
#define IDSQRPROTOPLUGINCONTROLINDICATION_H

@class PBCodable;
@protocol NSCopying;



@interface IDSQRProtoPluginControlIndication : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned int pluginOperation; // ivar: _pluginOperation
@property (nonatomic) NSUInteger pluginParticipantId; // ivar: _pluginParticipantId
@property (nonatomic) NSUInteger txnId; // ivar: _txnId


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