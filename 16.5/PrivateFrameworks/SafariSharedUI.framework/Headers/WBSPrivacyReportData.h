// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPRIVACYREPORTDATA_H
#define WBSPRIVACYREPORTDATA_H

@class NSMutableArray, NSSet, NSDate, NSString, WBSHistory, NSArray;
@protocol WBSPrivacyReportDataProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WBSKnownTrackerFilter.h"
#import "WBSKnownTrackingThirdParty.h"

@interface WBSPrivacyReportData : NSObject <WBSPrivacyReportDataProvider>

 {
    NSObject<OS_dispatch_queue> *_dataPrefetchQueue;
    NSInteger _prefetchState;
    NSMutableArray *_prefetchCompletionHandlers;
    WBSKnownTrackerFilter *_knownTrackerFilter;
    NSSet *_firstPartiesFromHistory;
    NSDate *_dataWindowStartDate;
    NSDate *_dataWindowEndDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasData;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WBSHistory *history; // ivar: _history
@property (readonly, nonatomic) NSArray *knownTrackers; // ivar: _knownTrackers
@property (copy, nonatomic) NSArray *knownTrackersSortDescriptors; // ivar: _knownTrackersSortDescriptors
@property (readonly, nonatomic) WBSKnownTrackingThirdParty *mostSeenKnownTracker; // ivar: _mostSeenKnownTracker
@property (readonly, nonatomic) CGFloat ratioOfTrackedFirstPartiesToAllVisited; // ivar: _ratioOfTrackedFirstPartiesToAllVisited
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *trackedFirstParties; // ivar: _trackedFirstParties
@property (copy, nonatomic) NSArray *trackedFirstPartiesSortDescriptors; // ivar: _trackedFirstPartiesSortDescriptors
@property (readonly, nonatomic) NSSet *trackerOwnerNames; // ivar: _trackerOwnerNames


+(id)cachedNumberOfTrackersOnStartPage;
+(void)clearCachedData;
+(void)getKnownTrackingDomainsForWebView:(id)arg0 after:(id)arg1 before:(id)arg2 completionHandler:(id)arg3 ;
+(void)setCachedNumberOfTrackersOnStartPage:(id)arg0 ;
-(id)_dataWindowStartWithBlockedThirdParties:(id)arg0 boundBy:(id)arg1 ;
-(id)_dataWindowStartWithLoadedThirdParties:(id)arg0 boundBy:(id)arg1 earliestFirstParty:(*id)arg2 ;
-(id)getRecentFirstPartiesFromThirdParty:(id)arg0 ;
-(id)initWithHistory:(id)arg0 ;
-(void)_addPrefetchCompletionHandler:(id)arg0 ;
-(void)_computeStatistics;
-(void)_discardPrefetchedData;
-(void)_executePrefetchCompletionHandlers;
-(void)_ingestPreventedThirdParties:(id)arg0 completionHandler:(id)arg1 ;
-(void)_loadDataForWebViewWithCompletionHandler:(id)arg0 ;
-(void)_loadDataWithCompletionHandler:(id)arg0 ;
-(void)_prefetchData;
-(void)_sortKnownTrackers;
-(void)_sortTrackedFirstParties;
-(void)discardPrefetchedData;
-(void)loadDataFromStartDate:(id)arg0 toEndDate:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)loadDataWithCompletionHandler:(id)arg0 ;
-(void)prefetchData;


@end


#endif