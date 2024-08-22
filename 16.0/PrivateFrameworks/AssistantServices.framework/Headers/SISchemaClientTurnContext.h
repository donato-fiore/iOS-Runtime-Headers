// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMACLIENTTURNCONTEXT_H
#define SISCHEMACLIENTTURNCONTEXT_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface SISchemaClientTurnContext : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasTurnID;
@property (retain, nonatomic) NSData *turnID; // ivar: _turnID


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