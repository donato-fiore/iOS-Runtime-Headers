// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOFAILEDCOMPLETIONTICKET_H
#define _GEOFAILEDCOMPLETIONTICKET_H

@class GEOFailedTicket, NSString, NSDictionary;
@protocol GEOMapServiceCompletionTicket;


#import "GEOMapServiceTraits.h"

@interface _GEOFailedCompletionTicket : GEOFailedTicket <GEOMapServiceCompletionTicket>

 {
    NSString *searchQuery;
}


@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) ? dataRequestKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly, nonatomic, getter=_searchQuery) NSString *searchQuery; // ivar: _searchQuery
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEOMapServiceTraits *traits;


-(BOOL)autocompleteTopSectionIsQuerySuggestions;
-(BOOL)hasShouldDisplayNoResults;
-(BOOL)hasShouldEnableGrayscaleHighlighting;
-(BOOL)isRapEnabled;
-(BOOL)matchesFragment:(id)arg0 ;
-(BOOL)shouldDisplayNoResults;
-(BOOL)shouldEnableGrayscaleHighlighting;
-(BOOL)shouldUseDistanceFeatureServerResults;
-(BOOL)showAutocompleteClientSource;
-(CGFloat)retainSearchTime;
-(NSInteger)highlightType;
-(id)clientRankingModel;
-(id)initWithError:(id)arg0 searchQuery:(id)arg1 traits:(id)arg2 ;
-(id)placeSummaryLayoutMetadata;
-(id)sortPriorityMapping;
-(void)applyToCorrectedSearch:(id)arg0 ;
-(void)applyToPlaceInfo:(id)arg0 ;
-(void)applyToSuggestionEntry:(id)arg0 withAutocompleteSearchResultIdentifier:(id)arg1 ;
-(void)applyToSuggestionList:(id)arg0 ;
// -(void)submitWithAutoCompletionHandler:(id)arg0 networkActivity:(unk)arg1  ;


@end


#endif