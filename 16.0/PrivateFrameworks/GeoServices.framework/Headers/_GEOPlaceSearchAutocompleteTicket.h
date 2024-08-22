// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOPLACESEARCHAUTOCOMPLETETICKET_H
#define _GEOPLACESEARCHAUTOCOMPLETETICKET_H

@class NSString;
@protocol GEOMapServiceCompletionTicket;


#import "GEOAbstractRequestResponseTicket.h"
#import "GEOAutocompleteSessionData.h"
#import "GEOMapServiceTraits.h"

@interface _GEOPlaceSearchAutocompleteTicket : GEOAbstractRequestResponseTicket <GEOMapServiceCompletionTicket>

 {
    GEOAutocompleteSessionData *_sessionData;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) ? dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=_searchQuery) NSString *searchQuery; // ivar: _searchQuery
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(BOOL)autocompleteTopSectionIsQuerySuggestions;
-(BOOL)enableStructuredRAPAffordance;
-(BOOL)hasShouldDisplayNoResults;
-(BOOL)hasShouldEnableGrayscaleHighlighting;
-(BOOL)matchesFragment:(id)arg0 ;
-(BOOL)shouldDisplayNoResults;
-(BOOL)shouldEnableGrayscaleHighlighting;
-(BOOL)shouldUseDistanceFeatureServerResults;
-(BOOL)showAutocompleteClientSource;
-(CGFloat)retainSearchTime;
-(NSInteger)highlightType;
-(id)clientRankingModel;
-(id)initWithRequest:(id)arg0 traits:(id)arg1 searchQuery:(id)arg2 sessionData:(id)arg3 ;
-(id)placeSummaryLayoutMetadata;
-(id)sortPriorityMapping;
-(void)applyToSuggestionEntry:(id)arg0 withAutocompleteSearchResultIdentifier:(id)arg1 ;
-(void)applyToSuggestionList:(id)arg0 ;
// -(void)submitWithAutoCompletionHandler:(id)arg0 auditToken:(unk)arg1 networkActivity:(id)arg2  ;
// -(void)submitWithAutoCompletionHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif