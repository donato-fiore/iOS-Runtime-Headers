// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXENGAGEMENTRECORDMANAGER_H
#define ATXENGAGEMENTRECORDMANAGER_H

@class NSString;
@protocol ATXEngagementRecordManagerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXExecutableReferenceManager.h"
#import "ATXBiomeERMStream.h"

@interface ATXEngagementRecordManager : NSObject <ATXEngagementRecordManagerProtocol>

 {
    ATXExecutableReferenceManager *_referenceManager;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    ATXBiomeERMStream *_eventStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minDurationForTrackedReferencesToStayAround; // ivar: _minDurationForTrackedReferencesToStayAround
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_writeData:(id)arg0 ;
-(BOOL)hasEngagedWithSuggestion:(id)arg0 engagedExecutables:(id)arg1 ;
-(BOOL)hasEngagedWithSuggestion:(id)arg0 engagementRecordType:(NSUInteger)arg1 ;
-(id)_engagedEntriesNoSync;
-(id)_engagedEntriesNoSyncOfType:(NSUInteger)arg0 queryOptions:(NSUInteger)arg1 ;
-(id)_identifiersFromEntries:(id)arg0 ;
-(id)_readData;
-(id)engagedExecutablesOfType:(NSUInteger)arg0 queryOptions:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCacheDirectory:(id)arg0 ;
-(id)jsonDict;
-(void)_addEngagedSuggestionNoSync:(id)arg0 type:(NSUInteger)arg1 ;
-(void)_addHiddenSuggestionNoSync:(id)arg0 duration:(CGFloat)arg1 engagementRecordType:(NSUInteger)arg2 ;
-(void)_filterOutExplicitEngagementsThatShouldNotClearOnEngagement:(id)arg0 ;
-(void)_logDidAddEntryToBiomeStream:(id)arg0 ;
-(void)_removeEngagedSuggestionsIfPossibleNoSync;
-(void)_removeEngagementsOnQueuePassingTest:(id)arg0 ;
-(void)_serializeAndWriteNoSyncSet:(id)arg0 ;
-(void)addEngagedSuggestion:(id)arg0 engagementRecordType:(NSUInteger)arg1 ;
-(void)addHiddenSuggestion:(id)arg0 duration:(CGFloat)arg1 engagementRecordType:(NSUInteger)arg2 ;
-(void)fetchEngagedEntriesWithCompletionHandler:(id)arg0 ;
-(void)removeAllEngagementsForSuggestion:(id)arg0 ;
-(void)removeAllEngagementsOfRecordType:(NSUInteger)arg0 ;
-(void)removeAllEngagementsWithCompletion:(id)arg0 ;
-(void)removeEngagementForExecutableIdentifier:(id)arg0 recordType:(NSUInteger)arg1 abortingRemovalIfEngagementDateIsLaterThanDate:(id)arg2 ;
-(void)removeEngagementForSuggestion:(id)arg0 recordType:(NSUInteger)arg1 ;
-(void)updateForClientModelCacheUpdate:(id)arg0 clientModelId:(id)arg1 ;


@end


#endif