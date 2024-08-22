// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HISTORYTABLEVIEWDATASOURCE_H
#define HISTORYTABLEVIEWDATASOURCE_H

@class WBSHistorySessionController, WBSSiriIntelligenceHistorySearch, NSOrderedSet, NSString;
@protocol HistoryTableViewDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface HistoryTableViewDataSource : NSObject {
    WBSHistorySessionController *_sessionController;
    WBSSiriIntelligenceHistorySearch *_siriHistorySearch;
    NSOrderedSet *_currentSessions;
    NSOrderedSet *_currentUnfilteredSessions;
    NSString *_filterString;
    ? _needsUpdateFlags;
}


@property (weak, nonatomic) NSObject<HistoryTableViewDataSourceDelegate> *delegate; // ivar: _delegate


+(void)initialize;
-(BOOL)_historyItemTitle:(id)arg0 matchesFilterTokens:(id)arg1 ;
-(BOOL)_historyItemURL:(id)arg0 matchesFilter:(id)arg1 ;
-(BOOL)_historyItemURL:(id)arg0 matchesFilterStrings:(id)arg1 ;
-(NSUInteger)numberOfRowsInSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_browsingSessions;
-(id)_browsingSessions:(id)arg0 filteredUsingString:(id)arg1 urlStrings:(id)arg2 ;
-(id)_computeChangeSetBetweenOldHistorySession:(id)arg0 newHistorySession:(id)arg1 oldSectionIndex:(NSInteger)arg2 newSectionIndex:(NSInteger)arg3 ;
-(id)_computeChangeSetBetweenOldHistorySessions:(id)arg0 newHistorySessions:(id)arg1 ;
-(id)_historySession:(id)arg0 filteredUsingHistoryItemsPredicate:(id)arg1 ;
-(id)historyItemForRowAtIndexPath:(id)arg0 ;
-(id)historyTableViewCellModelForRowAtIndexPath:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)titleForHeaderInSection:(NSInteger)arg0 ;
-(void)_fetchURLStringsContainingTextContent:(id)arg0 completionHandler:(id)arg1 ;
-(void)_incrementallyUpdateWithNewSessions:(id)arg0 forFilterChangeOnly:(BOOL)arg1 ;
-(void)_reportChangeToDelegate:(id)arg0 ;
-(void)_setCurrentBrowsingSessions:(id)arg0 computingIndividualChanges:(BOOL)arg1 ;
-(void)_updateIfNeeded;
-(void)dealloc;
-(void)deleteHistoryItemAtIndexPath:(id)arg0 ;
-(void)filterUsingString:(id)arg0 ;
-(void)historyChanged:(id)arg0 ;


@end


#endif