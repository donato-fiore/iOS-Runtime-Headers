// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEONONTILEDINFO_H
#define GEONONTILEDINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface GEONonTiledInfo : PBCodable <NSCopying>

 {
    NSUInteger _muid;
    NSString *_name;
    ? _flags;
}


@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) NSUInteger muid;
@property (retain, nonatomic) NSString *name;


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