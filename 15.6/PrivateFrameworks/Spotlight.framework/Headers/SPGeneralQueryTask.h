// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPGENERALQUERYTASK_H
#define SPGENERALQUERYTASK_H

@class SPDaemonQueryToken, NSString, NSMutableArray, SPSearchQueryContext, SPSearchQuery;
@protocol SPDaemonQueryDelegate;


#import "SPQueryTask.h"
#import "SPClientSession.h"

@interface SPGeneralQueryTask : SPQueryTask <SPDaemonQueryDelegate>

 {
    SPClientSession *_session;
    SPDaemonQueryToken *_token;
    BOOL _started;
    BOOL _newQuery;
    BOOL _didReceiveCompleteCallback;
    NSString *_mutableSessionEntityString;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableArray *mutableSections; // ivar: _mutableSections
@property (retain) SPSearchQueryContext *previousQueryContext; // ivar: _previousQueryContext
@property (readonly) SPSearchQuery *query; // ivar: _query
@property (readonly) Class superclass;


+(id)contactEntityFromQueryContext:(id)arg0 ;
+(id)searchInAppButtonItemWithCommand:(id)arg0 ;
-(id)buildCollectionResultWithSection:(id)arg0 queryContext:(id)arg1 ;
-(id)buildFooterContactSectionWithResultBuilder:(id)arg0 ;
-(id)buildHeaderContactSectionWithResultBuilder:(id)arg0 ;
-(id)buildResultsInSections:(id)arg0 ;
-(id)buildResultsInSections:(id)arg0 isUniversalSearchEnabled:(BOOL)arg1 ;
-(id)buildSectionWithResult:(id)arg0 sectionBundleId:(id)arg1 sectionTitleKey:(id)arg2 ;
-(id)buildSocialMediaContactSectionWithResultBuilder:(id)arg0 ;
-(id)defaultSearchThroughSection;
-(id)initForSession:(id)arg0 withQuery:(id)arg1 ;
-(id)resultWithIdentifier:(id)arg0 title:(id)arg1 url:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)searchString;
-(id)searchStringWithEntityFallback;
-(id)searchThroughSection;
-(id)unsafeSections;
-(id)unsafeSessionEntityString;
-(void)addSections:(id)arg0 delayedTopHit:(BOOL)arg1 ;
-(void)cancel;
-(void)clear;
-(void)clearInternal:(int)arg0 invalidate:(BOOL)arg1 ;
-(void)handleOptionsForNewSections:(id)arg0 ;
-(void)mergeSections;
-(void)searchDaemonQuery:(id)arg0 encounteredError:(id)arg1 ;
-(void)searchDaemonQuery:(id)arg0 gotResultSet:(id)arg1 replace:(BOOL)arg2 partiallyComplete:(BOOL)arg3 update:(BOOL)arg4 complete:(BOOL)arg5 delayedTopHit:(BOOL)arg6 unchanged:(BOOL)arg7 forceStable:(BOOL)arg8 blendingDuration:(CGFloat)arg9 geoEntityString:(id)arg10 supportedAppScopes:(id)arg11 showMoreInAppInfo:(id)arg12 ;
-(void)searchDaemonRankingLog:(id)arg0 ;
-(void)start;
-(void)truncateSuggestionsSectionToFit:(id)arg0 ;
-(void)updateResultsWithContactHeader;


@end


#endif