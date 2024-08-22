// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDBUSINESSHOURS_H
#define GEOPDBUSINESSHOURS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOPDHoursThreshold.h"
#import "GEOLocalizedString.h"

@interface GEOPDBusinessHours : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSUInteger _end;
    GEOPDHoursThreshold *_hoursThreshold;
    GEOLocalizedString *_message;
    GEOLocalizedString *_shortMessage;
    NSUInteger _start;
    NSMutableArray *_weeklyHours;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _hoursType;
    ? _flags;
}




+(id)businessHoursForPlaceData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif