// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOURLCENTERSPAN_H
#define GEOURLCENTERSPAN_H

@class PBCodable;
@protocol NSCopying;



@interface GEOURLCenterSpan : PBCodable <NSCopying>

 {
    CGFloat _latitudeDelta;
    CGFloat _latitude;
    CGFloat _longitudeDelta;
    CGFloat _longitude;
    ? _flags;
}


@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLatitudeDelta;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasLongitudeDelta;
@property (nonatomic) CGFloat latitude;
@property (nonatomic) CGFloat latitudeDelta;
@property (nonatomic) CGFloat longitude;
@property (nonatomic) CGFloat longitudeDelta;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif