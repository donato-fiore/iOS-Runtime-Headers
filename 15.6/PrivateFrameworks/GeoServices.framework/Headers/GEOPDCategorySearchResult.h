// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDCATEGORYSEARCHRESULT_H
#define GEOPDCATEGORYSEARCHRESULT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOPDSSearchAutoRedoThreshold.h"
#import "GEOPDSCategorySearchResultSection.h"
#import "GEOPDRelatedSearchSuggestion.h"
#import "GEOMapRegion.h"
#import "GEOPDPlaceSummaryLayoutMetadata.h"
#import "GEOPDResultRefinementGroup.h"
#import "GEOPDSearchClientBehavior.h"
#import "GEOPDSearchSectionList.h"

@interface GEOPDCategorySearchResult : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDSSearchAutoRedoThreshold *_autoRedoSearchThreshold;
    NSMutableArray *_browseCategorys;
    GEOPDSCategorySearchResultSection *_categorySearchResultSection;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOMapRegion *_displayMapRegion;
    GEOPDPlaceSummaryLayoutMetadata *_placeSummaryLayoutMetadata;
    NSMutableArray *_relatedEntitySections;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    GEOPDResultRefinementGroup *_resultRefinementGroup;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    NSMutableArray *_searchTierMetadatas;
    GEOPDSearchSectionList *_sectionList;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    BOOL _disableAddingAdditionalPaddingOnViewport;
    BOOL _enablePartialClientization;
    BOOL _isChainResultSet;
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