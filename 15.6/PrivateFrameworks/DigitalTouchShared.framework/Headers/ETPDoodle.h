// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ETPDOODLE_H
#define ETPDOODLE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface ETPDoodle : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *colorData; // ivar: _colorData
@property (nonatomic) unsigned int doodleCount; // ivar: _doodleCount
@property (retain, nonatomic) NSData *doodleData; // ivar: _doodleData
@property (readonly, nonatomic) BOOL hasColorData;
@property (nonatomic) BOOL hasDoodleCount;
@property (readonly, nonatomic) BOOL hasDoodleData;
@property (readonly, nonatomic) BOOL hasPointTimeDeltaData;
@property (retain, nonatomic) NSData *pointTimeDeltaData; // ivar: _pointTimeDeltaData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif