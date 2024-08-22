// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMPBNUMDEVICESPERTECHNOLOGY_H
#define BMPBNUMDEVICESPERTECHNOLOGY_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBNumDevicesPerTechnology : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNumber;
@property (readonly, nonatomic) BOOL hasTechnologyString;
@property (nonatomic) int number; // ivar: _number
@property (retain, nonatomic) NSString *technologyString; // ivar: _technologyString


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