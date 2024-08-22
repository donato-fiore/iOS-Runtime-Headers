// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOPLACESEARCHREQUESTTICKET_H
#define _GEOPLACESEARCHREQUESTTICKET_H

@class GEOPlaceRequestTicket, NSArray, NSString, NSDictionary;
@protocol GEOMapServiceSearchTicket;


#import "GEOCategorySearchResultSection.h"
#import "GEOResolvedItem.h"
#import "GEORelatedSearchSuggestion.h"
#import "GEODirectionIntent.h"
#import "GEOPDMerchantLookupResult.h"
#import "GEOPDPlaceSummaryLayoutMetadata.h"
#import "GEOMapRegion.h"
#import "GEOResultRefinementGroup.h"
#import "GEOSearchAutoRedoThreshold.h"
#import "GEOSearchSectionList.h"
#import "GEOMapServiceTraits.h"

@interface _GEOPlaceSearchRequestTicket : GEOPlaceRequestTicket <GEOMapServiceSearchTicket>



@property (readonly, nonatomic) NSArray *browseCategories;
@property (nonatomic) NSUInteger cachePolicy;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) GEOCategorySearchResultSection *categorySearchResultSection;
@property (readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet;
@property (readonly, nonatomic) GEOResolvedItem *clientResolvedResult;
@property (readonly, nonatomic) NSArray *collectionResults;
@property (readonly, nonatomic) ? dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEODirectionIntent *directionIntent;
@property (readonly, nonatomic) BOOL disableAdditionalViewportPadding;
@property (readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property (readonly, nonatomic) NSArray *dotPlaces;
@property (readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult;
@property (readonly, nonatomic) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata;
@property (readonly, nonatomic) NSArray *publisherResults;
@property (readonly, nonatomic) NSArray *relatedEntitySections;
@property (readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly, nonatomic) GEOMapRegion *resultBoundingRegion;
@property (readonly, nonatomic) NSString *resultDisplayHeader;
@property (readonly, nonatomic) GEOResultRefinementGroup *resultRefinementGroup;
@property (readonly, nonatomic) NSString *resultSectionHeader;
@property (readonly, nonatomic) NSArray *retainedSearchMetadata;
@property (readonly, nonatomic) GEOSearchAutoRedoThreshold *searchAutoRedoThreshold;
@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) NSArray *searchResultSections;
@property (readonly, nonatomic) int searchResultType;
@property (readonly, nonatomic) GEOSearchSectionList *searchSectionList;
@property (readonly, nonatomic) BOOL shouldEnableRedoSearch;
@property (readonly, nonatomic) BOOL showDymSuggestionCloseButton;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;




@end


#endif