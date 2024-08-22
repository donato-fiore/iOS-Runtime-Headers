// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBUSERNOTIFICATIONDERIVEDDATA_H
#define ATXPBUSERNOTIFICATIONDERIVEDDATA_H

@class PBCodable, NSMutableArray;
@protocol ATXJSONSerializableProtocol, NSCopying;



@interface ATXPBUserNotificationDerivedData : PBCodable <ATXJSONSerializableProtocol, NSCopying>



@property (retain, nonatomic) NSMutableArray *scores; // ivar: _scores


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)scoresAtIndex:(NSUInteger)arg0 ;
-(void)addScores:(id)arg0 ;
-(void)clearScores;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif