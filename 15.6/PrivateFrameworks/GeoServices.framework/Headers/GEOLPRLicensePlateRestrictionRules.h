// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLPRLICENSEPLATERESTRICTIONRULES_H
#define GEOLPRLICENSEPLATERESTRICTIONRULES_H

@class PBCodable, PBDataReader, NSMutableArray, NSData;
@protocol NSCopying;



@interface GEOLPRLicensePlateRestrictionRules : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_licensePlateRegions;
    NSData *_version;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _createTime;
    ? _flags;
}


@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSMutableArray *licensePlateRegions;
@property (retain, nonatomic) NSData *version;


+(BOOL)isValid:(id)arg0 ;
+(Class)licensePlateRegionType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)licensePlateRegionAtIndex:(NSUInteger)arg0 ;
-(void)addLicensePlateRegion:(id)arg0 ;
-(void)clearLicensePlateRegions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif