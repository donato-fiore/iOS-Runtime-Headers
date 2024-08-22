// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLOCALSEARCHCOMPLETER_H
#define MKLOCALSEARCHCOMPLETER_H

@class NSArray, NSTimer, NSMutableArray, GEOAutocompleteSessionData, GEOSearchCategory, GEOClientRankingModel, CLLocation, NSString, GEOPDPlaceSummaryLayoutMetadata, GEORetainedSearchMetadata, GEOSortPriorityMapping, GEOMapServiceTraits;
@protocol MKLocationManagerOperation, MKAutocompleteAnalyticsProvider, MKLocalSearchCompleterDelegate;

#import <Foundation/Foundation.h>

#import "MKPointOfInterestFilter.h"
#import "MKLocalSearchCompletion.h"

@interface MKLocalSearchCompleter : NSObject {
    NSArray *_filters;
    CGFloat _lastRequestTime;
    BOOL _dirty;
    BOOL _resultsAreCurrent;
    NSArray *_results;
    NSTimer *_timer;
    int _source;
    id<MKLocationManagerOperation> *_singleLocationUpdate;
    NSUInteger _maxNumberOfConcurrentRequests;
    NSMutableArray *_inFlightTickets;
    NSMutableArray *_pendingTickets;
    BOOL _statefulQueriesEnabled;
    GEOAutocompleteSessionData *_autocompleteSessionData;
}


@property (retain, nonatomic) NSObject<MKAutocompleteAnalyticsProvider> *analyticsProvider; // ivar: _analyticsProvider
@property (readonly, nonatomic, getter=_autocompleteTopSectionIsQuerySuggestions) BOOL autocompleteTopSectionIsQuerySuggestions; // ivar: _autocompleteTopSectionIsQuerySuggestions
@property (nonatomic) ? boundingRegion;
@property (retain, nonatomic) GEOSearchCategory *categoryFilter; // ivar: _categoryFilter
@property (readonly, nonatomic, getter=_clientRankingModel) GEOClientRankingModel *clientRankingModel; // ivar: _clientRankingModel
@property (weak, nonatomic) id *context; // ivar: _context
@property (weak, nonatomic) NSObject<MKLocalSearchCompleterDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CLLocation *deviceLocation; // ivar: _deviceLocation
@property (readonly, nonatomic, getter=_enableStructuredRAPAffordance) BOOL enableStructuredRAPAffordance; // ivar: _enableStructuredRAPAffordance
@property (nonatomic) NSInteger entriesType;
@property (nonatomic) NSInteger filterType; // ivar: _filterType
@property (copy, nonatomic) NSString *fragment;
@property (readonly, nonatomic, getter=_highlightType) NSInteger highlightType; // ivar: _highlightType
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger listType; // ivar: _listType
@property (nonatomic) NSUInteger mapType; // ivar: _mapType
@property (readonly, nonatomic, getter=_placeSummaryLayoutMetadata) GEOPDPlaceSummaryLayoutMetadata *placeSummaryLayoutMetadata; // ivar: _placeSummaryLayoutMetadata
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter; // ivar: _pointOfInterestFilter
@property (nonatomic, getter=_privateFilterType, setter=_setPrivateFilterType:) NSInteger privateFilterType; // ivar: _privateFilterType
@property (copy, nonatomic) NSString *queryFragment; // ivar: _queryFragment
@property (nonatomic) ? region; // ivar: _region
@property (nonatomic) NSUInteger resultTypes; // ivar: _resultTypes
@property (readonly, nonatomic) NSArray *results;
@property (retain, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata; // ivar: _retainedSearchMetadata
@property (readonly, nonatomic, getter=isSearching) BOOL searching;
@property (readonly, nonatomic, getter=_sections) NSArray *sections; // ivar: _sections
@property (readonly, nonatomic, getter=_shouldDisplayNoResults) BOOL shouldDisplayNoResults; // ivar: _shouldDisplayNoResults
@property (readonly, nonatomic, getter=_shouldEnableGrayscaleHighlighting) BOOL shouldEnableGrayscaleHighlighting; // ivar: _shouldEnableGrayscaleHighlighting
@property (readonly, nonatomic, getter=_shouldEnableRAPForNoResults) BOOL shouldEnableRAPForNoResults; // ivar: _shouldEnableRAPForNoResults
@property (nonatomic, getter=_shouldPreloadTransitInfo, setter=_setShouldPreloadTransitInfo:) BOOL shouldPreloadTransitInfo; // ivar: _shouldPreloadTransitInfo
@property (readonly, nonatomic, getter=_shouldUseDistanceFeatureServerResults) BOOL shouldUseDistanceFeatureServerResults; // ivar: _shouldUseDistanceFeatureServerResults
@property (readonly, nonatomic, getter=_showAutocompleteClientSource) BOOL showAutocompleteClientSource; // ivar: _showAutocompleteClientSource
@property (readonly, nonatomic, getter=_sortPriorityMapping) GEOSortPriorityMapping *sortPriorityMapping; // ivar: _sortPriorityMapping
@property (nonatomic) BOOL statefulQueriesEnabled;
@property (retain, nonatomic, getter=_tappedQuerySuggestionCompletion, setter=_setTappedQuerySuggestionCompletion:) MKLocalSearchCompletion *tappedQuerySuggestionCompletion; // ivar: _tappedQuerySuggestionCompletion
@property (nonatomic) CGFloat timeSinceLastInBoundingRegion; // ivar: _timeSinceLastInBoundingRegion
@property (retain, nonatomic) GEOMapServiceTraits *traits; // ivar: _traits


-(CGFloat)timeToNextRequest;
-(id)_completionTicketForFilterTypeWithTraits:(id)arg0 ;
-(id)_completionTicketForPrivateFilterType:(NSInteger)arg0 traits:(id)arg1 ;
-(id)init;
-(int)source;
-(void)_cancelTimer;
-(void)_fireRequest;
-(void)_handleCompletion:(id)arg0 shouldDisplayNoResults:(BOOL)arg1 shouldEnableRAPForNoResults:(BOOL)arg2 forTicket:(id)arg3 ;
-(void)_handleError:(id)arg0 forTicket:(id)arg1 ;
-(void)_markDirty;
-(void)_markDirtyAndScheduleRequestWithTimeToNextRequest:(CGFloat)arg0 ;
-(void)_notifyDelegatesWithResults:(id)arg0 sections:(id)arg1 shouldDisplayNoResults:(BOOL)arg2 shouldEnableRAPForNoResults:(BOOL)arg3 ticket:(id)arg4 ;
-(void)_schedulePendingRequest;
-(void)_scheduleRequestWithTimeToNextRequest:(CGFloat)arg0 ;
-(void)_updateFilters;
-(void)cancel;
-(void)clearQueryState;
-(void)dealloc;
-(void)retry;
-(void)setSource:(int)arg0 ;


@end


#endif