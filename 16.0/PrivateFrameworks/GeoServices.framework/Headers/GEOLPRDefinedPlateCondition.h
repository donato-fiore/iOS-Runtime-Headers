// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLPRDEFINEDPLATECONDITION_H
#define GEOLPRDEFINEDPLATECONDITION_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;



@interface GEOLPRDefinedPlateCondition : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_plateMatchConditions;
    NSMutableArray *_powerTypeKeys;
    NSMutableArray *_vehicleTypeKeys;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *plateMatchConditions;
@property (retain, nonatomic) NSMutableArray *powerTypeKeys;
@property (retain, nonatomic) NSMutableArray *vehicleTypeKeys;


+(BOOL)isValid:(id)arg0 ;
+(Class)plateMatchConditionType;
+(Class)powerTypeKeyType;
+(Class)vehicleTypeKeyType;
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
-(id)plateMatchConditionAtIndex:(NSUInteger)arg0 ;
-(id)powerTypeKeyAtIndex:(NSUInteger)arg0 ;
-(id)vehicleTypeKeyAtIndex:(NSUInteger)arg0 ;
-(void)addPlateMatchCondition:(id)arg0 ;
-(void)addPowerTypeKey:(id)arg0 ;
-(void)addVehicleTypeKey:(id)arg0 ;
-(void)clearPlateMatchConditions;
-(void)clearPowerTypeKeys;
-(void)clearVehicleTypeKeys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif