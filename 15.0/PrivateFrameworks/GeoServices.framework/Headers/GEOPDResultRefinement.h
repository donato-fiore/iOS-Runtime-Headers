// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDRESULTREFINEMENT_H
#define GEOPDRESULTREFINEMENT_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDResultRefinementGuidesHome.h"
#import "GEOPDResultRefinementMultiSelect.h"
#import "GEOPDResultRefinementRange.h"
#import "GEOPDResultRefinementSort.h"
#import "GEOPDResultRefinementToggle.h"

@interface GEOPDResultRefinement : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDResultRefinementGuidesHome *_guidesHome;
    GEOPDResultRefinementMultiSelect *_multiSelect;
    GEOPDResultRefinementRange *_range;
    GEOPDResultRefinementSort *_sort;
    GEOPDResultRefinementToggle *_toggle;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _resultRefinementType;
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
-(void)writeTo:(id)arg0 ;


@end


#endif