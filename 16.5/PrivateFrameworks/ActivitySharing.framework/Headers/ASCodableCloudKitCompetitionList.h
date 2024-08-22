// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCODABLECLOUDKITCOMPETITIONLIST_H
#define ASCODABLECLOUDKITCOMPETITIONLIST_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;



@interface ASCodableCloudKitCompetitionList : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *competitions; // ivar: _competitions
@property (retain, nonatomic) NSData *friendUUID; // ivar: _friendUUID
@property (readonly, nonatomic) BOOL hasFriendUUID;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)competitionsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCompetitions:(id)arg0 ;
-(void)clearCompetitions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif