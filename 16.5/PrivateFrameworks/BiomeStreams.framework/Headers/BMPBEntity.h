// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBENTITY_H
#define BMPBENTITY_H

@class PBCodable;
@protocol NSCopying;


#import "BMPBPersonEntity.h"
#import "BMPBTopicEntity.h"

@interface BMPBEntity : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int entityType; // ivar: _entityType
@property (nonatomic) BOOL hasEntityType;
@property (readonly, nonatomic) BOOL hasPersonEntity;
@property (readonly, nonatomic) BOOL hasTopicEntity;
@property (retain, nonatomic) BMPBPersonEntity *personEntity; // ivar: _personEntity
@property (retain, nonatomic) BMPBTopicEntity *topicEntity; // ivar: _topicEntity


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entityTypeAsString:(int)arg0 ;
-(int)StringAsEntityType:(id)arg0 ;
-(void)clearOneofValuesForEntityType;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif