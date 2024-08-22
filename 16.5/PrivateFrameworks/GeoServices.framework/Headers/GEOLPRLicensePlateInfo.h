// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLPRLICENSEPLATEINFO_H
#define GEOLPRLICENSEPLATEINFO_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOLPRLicensePlateStructure.h"

@interface GEOLPRLicensePlateInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOLPRLicensePlateStructure *_licensePlateStructure;
    NSMutableArray *_powerTypeKeys;
    NSMutableArray *_vehicleTypeKeys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasLicensePlateStructure;
@property (retain, nonatomic) GEOLPRLicensePlateStructure *licensePlateStructure;
@property (retain, nonatomic) NSMutableArray *powerTypeKeys;
@property (retain, nonatomic) NSMutableArray *vehicleTypeKeys;


+(BOOL)isValid:(id)arg0 ;
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
-(id)powerTypeKeysAtIndex:(NSUInteger)arg0 ;
-(id)vehicleTypeKeysAtIndex:(NSUInteger)arg0 ;
-(void)addPowerTypeKeys:(id)arg0 ;
-(void)addVehicleTypeKeys:(id)arg0 ;
-(void)clearPowerTypeKeys;
-(void)clearVehicleTypeKeys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif