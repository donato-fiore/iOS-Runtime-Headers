// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGEVENTARSESSIONUSAGE_H
#define GEOLOGMSGEVENTARSESSIONUSAGE_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMsgEventARSessionUsage : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_arElementDetails;
    NSMutableArray *_thermalPressures;
    NSMutableArray *_vlfLocalizationResults;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _sessionTimeMs;
    unsigned int _timeRoundedToHour;
    BOOL _didLocalize;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *arElementDetails;
@property (nonatomic) BOOL didLocalize;
@property (nonatomic) BOOL hasDidLocalize;
@property (nonatomic) BOOL hasSessionTimeMs;
@property (nonatomic) BOOL hasTimeRoundedToHour;
@property (nonatomic) unsigned int sessionTimeMs;
@property (retain, nonatomic) NSMutableArray *thermalPressures;
@property (nonatomic) unsigned int timeRoundedToHour;
@property (retain, nonatomic) NSMutableArray *vlfLocalizationResults;


+(BOOL)isValid:(id)arg0 ;
+(Class)thermalPressureType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)arElementDetailsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)thermalPressureAtIndex:(NSUInteger)arg0 ;
-(id)vlfLocalizationResultsAtIndex:(NSUInteger)arg0 ;
-(void)addArElementDetails:(id)arg0 ;
-(void)addThermalPressure:(id)arg0 ;
-(void)addVlfLocalizationResults:(id)arg0 ;
-(void)clearArElementDetails;
-(void)clearThermalPressures;
-(void)clearVlfLocalizationResults;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif