// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDDATAITEM_H
#define GEOPDDATAITEM_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDBusinessHoursData.h"
#import "GEOPDCategoryData.h"
#import "GEOPDFactoidData.h"
#import "GEOPDLocationData.h"
#import "GEOPDRatingData.h"

@interface GEOPDDataItem : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDBusinessHoursData *_businessHoursData;
    GEOPDCategoryData *_categoryData;
    GEOPDFactoidData *_factoidData;
    GEOPDLocationData *_locationData;
    GEOPDRatingData *_ratingData;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _type;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categoryName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(id)locationName;
-(void)writeTo:(id)arg0 ;


@end


#endif