// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPKITCOUNT_H
#define GEOMAPKITCOUNT_H

@class PBCodable;
@protocol NSCopying;



@interface GEOMapKitCount : PBCodable <NSCopying>

 {
    unsigned int _appCount;
    int _appType;
    int _countType;
    unsigned int _useCount;
    ? _flags;
}


@property (nonatomic) unsigned int appCount;
@property (nonatomic) int appType;
@property (nonatomic) int countType;
@property (nonatomic) BOOL hasAppCount;
@property (nonatomic) BOOL hasAppType;
@property (nonatomic) BOOL hasCountType;
@property (nonatomic) BOOL hasUseCount;
@property (nonatomic) unsigned int useCount;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)countTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsAppType:(id)arg0 ;
-(int)StringAsCountType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif