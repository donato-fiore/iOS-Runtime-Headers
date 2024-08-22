// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDTEMPLATEDATA_H
#define GEOPDTEMPLATEDATA_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOPDDataItem.h"
#import "GEOPDMapsIdentifier.h"
#import "GEOPDPhoto.h"
#import "GEOStyleAttributes.h"
#import "GEOTimezone.h"

@interface GEOPDTemplateData : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDDataItem *_footer;
    GEOPDMapsIdentifier *_mapsId;
    GEOPDPhoto *_photo;
    GEOStyleAttributes *_poiIcon;
    GEOPDDataItem *_subtitle;
    GEOTimezone *_timezone;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _areaHighlight;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(id)placeName;
-(void)writeTo:(id)arg0 ;


@end


#endif