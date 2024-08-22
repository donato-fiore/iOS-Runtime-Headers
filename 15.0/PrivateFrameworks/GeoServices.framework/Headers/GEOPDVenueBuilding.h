// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDVENUEBUILDING_H
#define GEOPDVENUEBUILDING_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDVenueLabel.h"

@interface GEOPDVenueBuilding : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _directoryGroupingIds;
    ? _levelIds;
    NSUInteger _buildingId;
    GEOPDVenueLabel *_label;
    NSUInteger _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
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
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif