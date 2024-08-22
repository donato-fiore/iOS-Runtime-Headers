// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXSTACKSTATETRACKER_H
#define ATXSTACKSTATETRACKER_H

@class _PASSimpleCoalescingTimer, _PASLock, NSString, NSDictionary;
@protocol OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXStackStateTracker : NSObject {
    NSObject<OS_os_transaction> *_transaction;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedPersistInternalStateOperation;
    _PASLock *_internalStateLock;
    NSString *_path;
}


@property (retain, nonatomic) NSDictionary *currentAppPredictionPanelLayouts; // ivar: _currentAppPredictionPanelLayouts
@property (retain, nonatomic) NSDictionary *currentSuggestionsWidgetLayouts; // ivar: _currentSuggestionsWidgetLayouts


+(id)sharedInstance;
-(BOOL)lastStackRotationWasALongTimeAgoForStackId:(id)arg0 ;
-(BOOL)lastStalenessRotationWasALongTimeAgoForStackId:(id)arg0 ;
-(BOOL)lastUserScrollWasALongTimeAgoForStackId:(id)arg0 ;
-(BOOL)loadInternalState;
-(BOOL)mostRecentRotationOfStackIsSystemInitiated:(id)arg0 ;
-(BOOL)persistInternalState;
-(BOOL)stackIsStale:(id)arg0 ;
-(BOOL)stackWasCreatedALongTimeAgo:(id)arg0 ;
-(id)_blendingCacheIdToStackIdMap:(id)arg0 ;
-(id)dataFromDisk;
-(id)init;
-(id)initTrackerInDirectory:(id)arg0 ;
-(id)jsonRepresentation;
-(id)lastStackRotationEvent:(id)arg0 ;
-(id)lastStackShownEvent:(id)arg0 ;
-(id)lastThreeUserVisitDatesOfPage:(NSUInteger)arg0 ;
-(id)lastUserScrollStackRotationEvent:(id)arg0 ;
-(id)layoutForLastStalenessRotation:(id)arg0 ;
-(id)stackCreationEvent:(id)arg0 ;
-(id)stackStateForStackId:(id)arg0 ;
-(id)topWidgetUniqueIdOfStack:(id)arg0 ;
-(void)cleanupOldDataWithHomeScreenPages:(id)arg0 ;
-(void)coalescedPersistInternalState;
-(void)setLayoutForLastStalenessRotation:(id)arg0 stackId:(id)arg1 date:(id)arg2 ;
-(void)updateStackRotationEvents;
-(void)updateStackRotationEventsByQueryingBiome;


@end


#endif