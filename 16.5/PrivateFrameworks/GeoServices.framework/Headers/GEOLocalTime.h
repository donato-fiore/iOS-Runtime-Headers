// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOCALTIME_H
#define GEOLOCALTIME_H

@class PBCodable, PBUnknownFields, NSString;
@protocol NSCopying;



@interface GEOLocalTime : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSString *_humanReadable;
    NSUInteger _timeRoundedToHour;
    float _timezoneOffsetFromGmtInHours;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasHumanReadable;
@property (nonatomic) BOOL hasTimeRoundedToHour;
@property (nonatomic) BOOL hasTimezoneOffsetFromGmtInHours;
@property (retain, nonatomic) NSString *humanReadable;
@property (nonatomic) NSUInteger timeRoundedToHour;
@property (nonatomic) float timezoneOffsetFromGmtInHours;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCFAbsoluteTime:(CGFloat)arg0 ;
-(id)initWithDate:(id)arg0 ;
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