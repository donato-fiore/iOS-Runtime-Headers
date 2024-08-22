// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOVLFUSAGETILEID_H
#define GEOVLFUSAGETILEID_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEOVLFUsageTileID : PBCodable <NSCopying>

 {
    NSString *_buildId;
    CGFloat _uncertainty;
    CGFloat _xCoordinate;
    CGFloat _yCoordinate;
    ? _flags;
}


@property (retain, nonatomic) NSString *buildId;
@property (readonly, nonatomic) BOOL hasBuildId;
@property (nonatomic) BOOL hasUncertainty;
@property (nonatomic) BOOL hasXCoordinate;
@property (nonatomic) BOOL hasYCoordinate;
@property (nonatomic) CGFloat uncertainty;
@property (nonatomic) CGFloat xCoordinate;
@property (nonatomic) CGFloat yCoordinate;


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