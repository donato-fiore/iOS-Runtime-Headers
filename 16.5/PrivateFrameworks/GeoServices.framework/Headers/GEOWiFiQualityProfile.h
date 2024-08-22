// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOWIFIQUALITYPROFILE_H
#define GEOWIFIQUALITYPROFILE_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOWiFiQualityHours.h"

@interface GEOWiFiQualityProfile : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOWiFiQualityHours *_hours;
    NSMutableArray *_qualities;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasHours;
@property (retain, nonatomic) GEOWiFiQualityHours *hours;
@property (retain, nonatomic) NSMutableArray *qualities;


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
-(id)qualitiesAtIndex:(NSUInteger)arg0 ;
-(void)addQualities:(id)arg0 ;
-(void)clearQualities;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif