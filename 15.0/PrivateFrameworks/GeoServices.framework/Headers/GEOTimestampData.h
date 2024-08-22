// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTIMESTAMPDATA_H
#define GEOTIMESTAMPDATA_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSTimeZone;
@protocol GEOServerFormatTokenTimeStampValue, NSCopying;



@interface GEOTimestampData : PBCodable <GEOServerFormatTokenTimeStampValue, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_formatPattern;
    NSString *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _timestampVal;
    BOOL _displayTimezone;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayTimezone;
@property (readonly, nonatomic) NSString *formatPattern;
@property (retain, nonatomic) NSString *formatPattern;
@property (nonatomic) BOOL hasDisplayTimezone;
@property (readonly, nonatomic) BOOL hasFormatPattern;
@property (nonatomic) BOOL hasTimestampVal;
@property (readonly, nonatomic) BOOL hasTimezone;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeStamp;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) unsigned int timestampVal;
@property (retain, nonatomic) NSString *timezone;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)displayTimeZone;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif