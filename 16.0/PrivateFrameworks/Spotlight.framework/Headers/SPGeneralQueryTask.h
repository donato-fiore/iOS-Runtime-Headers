// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPGENERALQUERYTASK_H
#define SPGENERALQUERYTASK_H

@class NSString, NSArray;
@protocol SPDaemonQueryDelegate;


#import "SPQueryTask.h"
#import "SPClientSession.h"

@interface SPGeneralQueryTask : SPQueryTask <SPDaemonQueryDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didReceiveCompleteCallback; // ivar: _didReceiveCompleteCallback
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *mutableSessionEntityString; // ivar: _mutableSessionEntityString
@property BOOL newQuery; // ivar: _newQuery
@property (weak) SPClientSession *session; // ivar: _session
@property (retain, nonatomic) NSArray *showMoreInAppInfo; // ivar: _showMoreInAppInfo
@property BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (retain) NSArray *supportedAppScopes; // ivar: _supportedAppScopes


+(id)contactEntityFromQueryContext:(id)arg0 ;
+(id)searchInAppButtonItemWithCommand:(id)arg0 ;
-(BOOL)readyToUpdate;
-(id)buildCollectionResultWithSection:(id)arg0 queryContext:(id)arg1 ;
-(id)buildFooterContactSectionWithResultBuilder:(id)arg0 ;
-(id)buildHeaderContactSectionWithResultBuilder:(id)arg0 ;
-(id)buildResultsInSections:(id)arg0 ;
-(id)buildSectionWithResult:(id)arg0 sectionBundleId:(id)arg1 sectionTitleKey:(id)arg2 ;
-(id)buildSocialMediaContactSectionWithResultBuilder:(id)arg0 ;
-(id)bundleIdentifiersForHiddenSections;
-(id)displayedText;
-(id)initForSession:(id)arg0 withQuery:(id)arg1 ;
-(id)makeSearchThroughSuggestions;
-(id)searchString;
-(id)searchStringWithEntityFallback;
-(id)showMoreButtonResultSection;
-(id)unsafeSections;
-(id)unsafeSessionEntityString;
-(void)addAsYouTypeRelatedSearchResultToSections:(id)arg0 withRelatedSearchSection:(id)arg1 ;
-(void)addSections:(id)arg0 delayedTopHit:(BOOL)arg1 ;
-(void)cancel;
-(void)clear;
-(void)handleOptionsForNewSections:(id)arg0 ;
-(void)mergeSections;
-(void)processAppResults:(id)arg0 maxAppResults:(NSUInteger)arg1 section:(id)arg2 topHitsIndex:(*NSUInteger)arg3 ;
-(void)searchDaemonQuery:(id)arg0 encounteredError:(id)arg1 ;
-(void)searchDaemonQuery:(id)arg0 gotResultSet:(id)arg1 replace:(BOOL)arg2 partiallyComplete:(BOOL)arg3 update:(BOOL)arg4 complete:(BOOL)arg5 delayedTopHit:(BOOL)arg6 unchanged:(BOOL)arg7 forceStable:(BOOL)arg8 blendingDuration:(CGFloat)arg9 geoEntityString:(id)arg10 supportedAppScopes:(id)arg11 showMoreInAppInfo:(id)arg12 ;
-(void)searchDaemonRankingLog:(id)arg0 ;
-(void)start;
-(void)truncateSuggestionsSectionToFit:(id)arg0 ;
-(void)updateResultsWithContactHeader;


@end


#endif