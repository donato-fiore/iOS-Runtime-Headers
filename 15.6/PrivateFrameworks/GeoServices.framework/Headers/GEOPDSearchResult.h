// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPDSEARCHRESULT_H
#define GEOPDSEARCHRESULT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOPDSSearchAutoRedoThreshold.h"
#import "GEOPDResolvedItem.h"
#import "GEOPDRelatedSearchSuggestion.h"
#import "GEOPDDirectionIntent.h"
#import "GEOMapRegion.h"
#import "GEOPDPlaceSummaryLayoutMetadata.h"
#import "GEOPDResultRefinementGroup.h"
#import "GEOPDSearchClientBehavior.h"
#import "GEOPDSearchSectionList.h"

@interface GEOPDSearchResult : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDSSearchAutoRedoThreshold *_autoRedoSearchThreshold;
    GEOPDResolvedItem *_clientResolvedResult;
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;
    GEOPDDirectionIntent *_directionIntent;
    NSMutableArray *_disambiguationLabels;
    NSMutableArray *_displayHeaderSubstitutes;
    GEOMapRegion *_displayMapRegion;
    GEOPDPlaceSummaryLayoutMetadata *_placeSummaryLayoutMetadata;
    NSMutableArray *_relatedEntitySections;
    NSMutableArray *_relatedSearchSuggestions;
    NSMutableArray *_resultDetourInfos;
    NSString *_resultDisplayHeader;
    GEOPDResultRefinementGroup *_resultRefinementGroup;
    NSMutableArray *_retainSearchs;
    GEOPDSearchClientBehavior *_searchClientBehavior;
    NSMutableArray *_searchResultSections;
    NSMutableArray *_searchTierMetadatas;
    GEOPDSearchSectionList *_sectionList;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _dymSuggestionVisibleTime;
    unsigned int _retainSearchTime;
    int _searchResultType;
    BOOL _disableAddingAdditionalPaddingOnViewport;
    BOOL _enablePartialClientization;
    BOOL _isChainResultSet;
    BOOL _showDymSuggestionCloseButton;
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