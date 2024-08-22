// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHICONLIBRARYSPOTLIGHTQUERYENGINE_H
#define SBHICONLIBRARYSPOTLIGHTQUERYENGINE_H



#import "SBHIconLibraryAbstractQueryEngine.h"
#import "SBHIconLibraryQueryContext.h"

@interface SBHIconLibrarySpotlightQueryEngine : SBHIconLibraryAbstractQueryEngine {
    SBHIconLibraryQueryContext *_currentlyRunningQueryContext;
}




-(BOOL)_processingQueue_isBundleIdentifierValid:(id)arg0 iconLibraryQueryContext:(id)arg1 ;
-(id)_processingQueue_sortComperatorForQueryContext:(SEL)arg0 ;
-(id)_relevancyQueryForLibraryQuery:(id)arg0 ;
-(id)_searchQueryForIconLibraryQuery:(id)arg0 ;
-(void)_processingQueue_markBundleIdentifiers:(id)arg0 iconLibraryQueryContext:(id)arg1 ;
-(void)_processingQueue_noteQueryResultsWereUpdated:(id)arg0 iconLibraryQueryContext:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)_processingQueue_teardownQueryContext:(id)arg0 ;
-(void)_processingQueue_unmarkBundleIdentifiers:(id)arg0 iconLibraryQueryContext:(id)arg1 ;
-(void)_processingQueue_updateQueryRelevancyScores:(id)arg0 iconLibraryQueryContext:(id)arg1 ;
-(void)_teardownCSSearchQuery:(id)arg0 ;
-(void)dealloc;
-(void)executeQuery:(id)arg0 ;


@end


#endif