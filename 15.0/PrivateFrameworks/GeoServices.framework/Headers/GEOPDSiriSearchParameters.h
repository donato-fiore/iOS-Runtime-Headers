// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDSIRISEARCHPARAMETERS_H
#define GEOPDSIRISEARCHPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOAddress.h"
#import "GEOPDIndexQueryNode.h"
#import "GEOPDRecentRouteInfo.h"
#import "GEOPDViewportInfo.h"

@interface GEOPDSiriSearchParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOAddress *_address;
    NSMutableArray *_businessCategoryFilters;
    GEOPDIndexQueryNode *_indexFilter;
    GEOPDRecentRouteInfo *_recentRouteInfo;
    NSString *_searchString;
    NSMutableArray *_searchSubstringDescriptors;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _maxResultCount;
    int _sortOrder;
    BOOL _isStrictMapRegion;
    BOOL _structuredSearch;
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