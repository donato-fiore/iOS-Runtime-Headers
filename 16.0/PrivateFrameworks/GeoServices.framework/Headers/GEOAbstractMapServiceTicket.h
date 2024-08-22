// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOABSTRACTMAPSERVICETICKET_H
#define GEOABSTRACTMAPSERVICETICKET_H

@class NSArray, NSString;
@protocol GEOMapServiceTicket;


#import "GEOAbstractTicket.h"
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

@interface GEOAbstractMapServiceTicket : GEOAbstractTicket <GEOMapServiceTicket>



@property (readonly, nonatomic) NSArray *browseCategories; // ivar: _browseCategories
@property (nonatomic) NSUInteger cachePolicy;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) GEOCategorySearchResultSection *categorySearchResultSection; // ivar: _categorySearchResultSection
@property (readonly, nonatomic, getter=isChainResultSet) BOOL chainResultSet; // ivar: _chainResultSet
@property (readonly, nonatomic) GEOResolvedItem *clientResolvedResult; // ivar: _clientResolvedResult
@property (readonly, nonatomic) NSArray *collectionResults; // ivar: _collectionResults
@property (readonly, nonatomic) ? dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEORelatedSearchSuggestion *defaultRelatedSuggestion; // ivar: _defaultRelatedSuggestion
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEODirectionIntent *directionIntent; // ivar: _directionIntent
@property (readonly, nonatomic) BOOL disableAdditionalViewportPadding; // ivar: _disableAdditionalViewportPadding
@property (readonly, nonatomic) NSArray *displayHeaderSubstitutes; // ivar: _displayHeaderSubstitutes
@property (readonly, nonatomic) NSArray *dotPlaces; // ivar: _dotPlaces
@property (readonly, nonatomic) unsigned int dymSuggestionVisibleTime; // ivar: _dymSuggestionVisibleTime
@property (readonly, nonatomic) BOOL enableStructuredRAPAffordance; // ivar: _enableStructuredRAPAffordance
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEOPDMerchantLookupResult *merchantLookupResult; // ivar: _merchantLookupResult
@property (readonly, nonatomic) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata; // ivar: _placeSummaryLayoutMetadata
@property (readonly, nonatomic) NSArray *publisherResults; // ivar: _publisherResults
@property (readonly, nonatomic) NSArray *relatedEntitySections; // ivar: _relatedEntitySections
@property (readonly, nonatomic) NSArray *relatedSearchSuggestions; // ivar: _relatedSearchSuggestions
@property (readonly, nonatomic) GEOMapRegion *resultBoundingRegion; // ivar: _resultBoundingRegion
@property (readonly, nonatomic) NSString *resultDisplayHeader; // ivar: _resultDisplayHeader
@property (readonly, nonatomic) GEOResultRefinementGroup *resultRefinementGroup; // ivar: _resultRefinementGroup
@property (readonly, nonatomic) NSString *resultSectionHeader; // ivar: _resultSectionHeader
@property (readonly, nonatomic) NSArray *retainedSearchMetadata; // ivar: _retainedSearchMetadata
@property (readonly, nonatomic) GEOSearchAutoRedoThreshold *searchAutoRedoThreshold; // ivar: _searchAutoRedoThreshold
@property (readonly, nonatomic) NSArray *searchResultSections; // ivar: _searchResultSections
@property (readonly, nonatomic) int searchResultType; // ivar: _searchResultType
@property (readonly, nonatomic) int searchResultViewType; // ivar: _searchResultViewType
@property (readonly, nonatomic) GEOSearchSectionList *searchSectionList; // ivar: _searchSectionList
@property (readonly, nonatomic) BOOL shouldEnableRedoSearch; // ivar: _shouldEnableRedoSearch
@property (readonly, nonatomic) BOOL showDymSuggestionCloseButton; // ivar: _showDymSuggestionCloseButton
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(void)applyToCorrectedSearch:(id)arg0 ;
-(void)applyToPlaceInfo:(id)arg0 ;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(NSInteger)arg3  ;
// -(void)submitWithHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(NSInteger)arg3 queue:(id)arg4  ;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1  ;
// -(void)submitWithHandler:(id)arg0 networkActivity:(unk)arg1 queue:(id)arg2  ;
// -(void)submitWithHandler:(id)arg0 timeout:(unk)arg1 networkActivity:(NSInteger)arg2  ;
// -(void)submitWithHandler:(id)arg0 timeout:(unk)arg1 networkActivity:(NSInteger)arg2 queue:(id)arg3  ;
// -(void)submitWithRefinedHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(NSInteger)arg3  ;
// -(void)submitWithRefinedHandler:(id)arg0 auditToken:(unk)arg1 timeout:(id)arg2 networkActivity:(NSInteger)arg3 queue:(id)arg4  ;
// -(void)submitWithRefinedHandler:(id)arg0 networkActivity:(unk)arg1  ;
// -(void)submitWithRefinedHandler:(id)arg0 networkActivity:(unk)arg1 queue:(id)arg2  ;
// -(void)submitWithRefinedHandler:(id)arg0 timeout:(unk)arg1 networkActivity:(NSInteger)arg2  ;
// -(void)submitWithRefinedHandler:(id)arg0 timeout:(unk)arg1 networkActivity:(NSInteger)arg2 queue:(id)arg3  ;


@end


#endif