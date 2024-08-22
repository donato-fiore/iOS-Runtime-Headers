// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOVLFDEVICEORIENTATION_H
#define GEOVLFDEVICEORIENTATION_H

@class PBCodable;
@protocol NSCopying;



@interface GEOVLFDeviceOrientation : PBCodable <NSCopying>

 {
    int _orientation;
    unsigned int _relativeTimestampMs;
    ? _flags;
}


@property (nonatomic) BOOL hasOrientation;
@property (nonatomic) BOOL hasRelativeTimestampMs;
@property (nonatomic) int orientation;
@property (nonatomic) unsigned int relativeTimestampMs;


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
-(id)orientationAsString:(int)arg0 ;
-(int)StringAsOrientation:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif