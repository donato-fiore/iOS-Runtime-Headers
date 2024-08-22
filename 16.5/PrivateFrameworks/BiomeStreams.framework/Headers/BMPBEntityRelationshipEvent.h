// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBENTITYRELATIONSHIPEVENT_H
#define BMPBENTITYRELATIONSHIPEVENT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "BMPBEntity.h"

@interface BMPBEntityRelationshipEvent : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *attributes; // ivar: _attributes
@property (retain, nonatomic) NSString *clientId; // ivar: _clientId
@property (readonly, nonatomic) BOOL hasClientId;
@property (readonly, nonatomic) BOOL hasRelationship;
@property (readonly, nonatomic) BOOL hasSourceEntity;
@property (readonly, nonatomic) BOOL hasSourceId;
@property (readonly, nonatomic) BOOL hasTargetEntity;
@property (retain, nonatomic) NSString *relationship; // ivar: _relationship
@property (retain, nonatomic) BMPBEntity *sourceEntity; // ivar: _sourceEntity
@property (retain, nonatomic) NSString *sourceId; // ivar: _sourceId
@property (retain, nonatomic) BMPBEntity *targetEntity; // ivar: _targetEntity


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAttributes:(id)arg0 ;
-(void)clearAttributes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif