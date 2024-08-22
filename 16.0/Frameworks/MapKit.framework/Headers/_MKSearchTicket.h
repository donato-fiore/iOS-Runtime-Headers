// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKSEARCHTICKET_H
#define _MKSEARCHTICKET_H

@class MKTicket, GEOMapRegion, NSArray, GEOCategorySearchResultSection, GEOResolvedItem, NSString, GEORelatedSearchSuggestion, GEODirectionIntent, NSError, GEOPDPlaceSummaryLayoutMetadata, GEOResultRefinementGroup, GEOSearchAutoRedoThreshold, GEOSearchSectionList, GEOMapServiceTraits;
@protocol MKMapServiceSearchTicket;



@interface _MKSearchTicket : MKTicket <MKMapServiceSearchTicket>



@property (readonly, nonatomic) GEOMapRegion *boundingRegion;
@property (readonly, nonatomic) NSArray *browseCategories;
@property (readonly, nonatomic) GEOCategorySearchResultSection *categorySearchResultSection;
@property (readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet;
@property (readonly, nonatomic) GEOResolvedItem *clientResolvedResult;
@property (readonly, nonatomic) NSArray *collectionResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEODirectionIntent *directionIntent;
@property (readonly, nonatomic) BOOL disableAdditionalViewportPadding;
@property (readonly, nonatomic) NSArray *displayHeaderSubstitutes;
@property (readonly, nonatomic) NSArray *dotPlaces;
@property (readonly, nonatomic) unsigned int dymSuggestionVisibleTime;
@property (readonly, nonatomic) BOOL enableStructuredRAPAffordance;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *exactMapItems;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata;
@property (readonly, nonatomic) NSArray *publisherResults;
@property (readonly, nonatomic) NSArray *refinedMapItems;
@property (readonly, nonatomic) NSArray *relatedEntitySections;
@property (readonly, nonatomic) NSArray *relatedSearchSuggestions;
@property (readonly, nonatomic) NSString *resultDisplayHeader;
@property (readonly, nonatomic) GEOResultRefinementGroup *resultRefinementGroup;
@property (readonly, nonatomic) NSArray *retainedSearchMetadata;
@property (readonly, nonatomic) GEOSearchAutoRedoThreshold *searchAutoRedoThreshold;
@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) NSArray *searchResultSections;
@property (readonly, nonatomic) int searchResultType;
@property (readonly, nonatomic) int searchResultViewType;
@property (readonly, nonatomic) GEOSearchSectionList *searchSectionList;
@property (readonly, nonatomic) NSString *sectionHeader;
@property (readonly, nonatomic) BOOL shouldEnableRedoSearch;
@property (readonly, nonatomic) BOOL showDymSuggestionCloseButton;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(id)initWithSearchTicket:(id)arg0 ;


@end


#endif