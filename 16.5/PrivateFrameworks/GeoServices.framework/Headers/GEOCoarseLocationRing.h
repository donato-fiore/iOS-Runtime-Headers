// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOARSELOCATIONRING_H
#define GEOCOARSELOCATIONRING_H

@class PBCodable;
@protocol NSCopying;



@interface GEOCoarseLocationRing : PBCodable <NSCopying>

 {
    *GEOCoarseLocationPoint _points;
    NSUInteger _pointsCount;
    NSUInteger _pointsSpace;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif