// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDCHILDACTION_H
#define GEOPDCHILDACTION_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDChildActionDirections.h"
#import "GEOPDChildActionFlyover.h"
#import "GEOPDChildActionGuides.h"
#import "GEOPDChildActionSearch.h"

@interface GEOPDChildAction : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDChildActionDirections *_childActionDirections;
    GEOPDChildActionFlyover *_childActionFlyover;
    GEOPDChildActionGuides *_childActionGuides;
    GEOPDChildActionSearch *_childActionSearch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _childActionType;
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