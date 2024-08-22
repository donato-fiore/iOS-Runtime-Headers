// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOBATCHREVERSEGEOCODEREQUESTTICKET_H
#define _GEOBATCHREVERSEGEOCODEREQUESTTICKET_H

@class GEOPlaceRequestTicket, geo_isolater, NSArray, NSString, NSDictionary;
@protocol GEOMapServiceTicket;


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

@interface _GEOBatchReverseGeocodeRequestTicket : GEOPlaceRequestTicket <GEOMapServiceTicket>

 {
    id *_locationShifter;
    geo_isolater *_shiftIsolation;
}


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
@property (readonly, nonatomic) NSArray *searchResultSections;
@property (readonly, nonatomic) int searchResultType;
@property (readonly, nonatomic) GEOSearchSectionList *searchSectionList;
@property (readonly, nonatomic) BOOL shouldEnableRedoSearch;
@property (readonly, nonatomic) BOOL showDymSuggestionCloseButton;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


// -(id)initWithRequest:(id)arg0 locationShifter:(id)arg1 traits:(unk)arg2  ;
-(void)_handleResponse:(id)arg0 completion:(id)arg1 ;
// -(void)_processRequest:(id)arg0 auditToken:(id)arg1 timeout:(CGFloat)arg2 withHandler:(id)arg3 refinedHandler:(unk)arg4 networkActivity:(id)arg5  ;
// -(void)_submitRequest:(id)arg0 auditToken:(id)arg1 timeout:(CGFloat)arg2 withHandler:(id)arg3 networkActivity:(unk)arg4  ;


@end


#endif