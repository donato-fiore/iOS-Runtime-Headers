// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOUNTDOWNDATA_H
#define GEOCOUNTDOWNDATA_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString, NSDictionary, NSArray;
@protocol GEOServerFormatTokenCountdownValue, NSCopying;



@interface GEOCountdownData : PBCodable <GEOServerFormatTokenCountdownValue, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _alternateCountdownTypes;
    ? _timestampValues;
    NSMutableArray *_alternateFormatStrings;
    NSString *_separator;
    NSString *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *int alternateCountdownTypes;
@property (readonly, nonatomic) NSUInteger alternateCountdownTypesCount;
@property (retain, nonatomic) NSMutableArray *alternateFormatStrings;
@property (readonly, nonatomic) NSDictionary *alternativeFormatStringsByType;
@property (readonly, nonatomic) NSInteger countdownType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSeparator;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *separator;
@property (retain, nonatomic) NSString *separator;
@property (readonly) Class superclass;
@property (readonly, nonatomic) *unsigned int timestampValues;
@property (readonly, nonatomic) NSUInteger timestampValuesCount;
@property (readonly, nonatomic) NSArray *timestamps;
@property (retain, nonatomic) NSString *timezone;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)alternateFormatStringType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSInteger)_convertFrom:(int)arg0 ;
-(id)alternateCountdownTypesAsString:(int)arg0 ;
-(id)alternateFormatStringAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsAlternateCountdownTypes:(id)arg0 ;
-(int)alternateCountdownTypeAtIndex:(NSUInteger)arg0 ;
-(unsigned int)timestampValueAtIndex:(NSUInteger)arg0 ;
-(void)addAlternateCountdownType:(int)arg0 ;
-(void)addAlternateFormatString:(id)arg0 ;
-(void)addTimestampValue:(unsigned int)arg0 ;
-(void)clearAlternateCountdownTypes;
-(void)clearAlternateFormatStrings;
-(void)clearTimestampValues;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif