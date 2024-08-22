// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALRECORDDISPLAYITEMPROVIDER_H
#define WDMEDICALRECORDDISPLAYITEMPROVIDER_H

@class NSPredicate, NSDictionary, HKConcept, NSMutableArray, HKMultiTypeSampleIterator, NSArray, NSUUID, HKMedicalUserDomainConcept;
@protocol WDMedicalRecordDaySummaryDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WDMedicalRecordPagingContext.h"
#import "HRProfile.h"

@interface WDMedicalRecordDisplayItemProvider : NSObject <WDMedicalRecordDaySummaryDelegate>



@property (retain, nonatomic) NSPredicate *accountsPredicate; // ivar: _accountsPredicate
@property (readonly, copy, nonatomic) NSDictionary *additionalPredicates; // ivar: _additionalPredicates
@property (retain, nonatomic) HKConcept *concept; // ivar: _concept
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueryQueue; // ivar: _dataQueryQueue
@property (retain, nonatomic) NSMutableArray *dateLessGroups; // ivar: _dateLessGroups
@property (nonatomic) NSInteger displayItemOptions; // ivar: _displayItemOptions
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (retain, nonatomic) NSPredicate *filter; // ivar: _filter
@property (copy, nonatomic) NSDictionary *filterPredicatesByType; // ivar: _filterPredicatesByType
@property (retain, nonatomic) HKMultiTypeSampleIterator *iterator; // ivar: _iterator
@property (retain, nonatomic) NSMutableArray *medicalRecordGroups; // ivar: _medicalRecordGroups
@property (nonatomic) NSInteger numOfRemovedRecords; // ivar: _numOfRemovedRecords
@property (retain, nonatomic) WDMedicalRecordPagingContext *pagingContext; // ivar: _pagingContext
@property (retain, nonatomic) NSArray *pendingDateLessGroups; // ivar: _pendingDateLessGroups
@property (retain, nonatomic) NSArray *pendingMedicalRecordGroups; // ivar: _pendingMedicalRecordGroups
@property (copy, nonatomic) NSArray *preloadedRecords; // ivar: _preloadedRecords
@property (retain, nonatomic) HRProfile *profile; // ivar: _profile
@property (copy, nonatomic) NSArray *sampleTypes; // ivar: _sampleTypes
@property (nonatomic) BOOL shouldCancelDataCollection; // ivar: _shouldCancelDataCollection
@property (nonatomic) BOOL shouldClearPagingCacheOnNextReload; // ivar: _shouldClearPagingCacheOnNextReload
@property (retain, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (copy, nonatomic) NSUUID *targetUUID; // ivar: _targetUUID
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler
@property (retain, nonatomic) HKMedicalUserDomainConcept *userDomainConcept; // ivar: _userDomainConcept


+(id)allSupportedRecordCategories;
+(id)allSupportedSampleTypes;
+(id)supportedRecordCategoriesByCategoryType;
+(id)unknownRecordCategory;
-(NSInteger)numberOfDisplayItemsForGroupAtIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfGroups;
-(id)_displayItemGroupAtIndex:(NSInteger)arg0 ;
-(id)_queue_synthesizedPredicatesForMedicalType:(id)arg0 ;
-(id)_sortedDisplayItemGroupWithDateDisplay:(id)arg0 sourceDaySummaryMapping:(id)arg1 ;
-(id)displayItemForIndexPath:(id)arg0 ;
-(id)indexPathForRecordId:(id)arg0 ;
-(id)initWithProfile:(id)arg0 concept:(id)arg1 preloadedRecords:(id)arg2 displayItemOptions:(NSInteger)arg3 sampleTypes:(id)arg4 filter:(id)arg5 additionalPredicates:(id)arg6 sortDescriptors:(id)arg7 ;
-(id)initWithProfile:(id)arg0 displayItemOptions:(NSInteger)arg1 sampleTypes:(id)arg2 filter:(id)arg3 additionalPredicates:(id)arg4 sortDescriptors:(id)arg5 ;
-(id)initWithProfile:(id)arg0 userDomainConcept:(id)arg1 preloadedRecords:(id)arg2 displayItemOptions:(NSInteger)arg3 sampleTypes:(id)arg4 filter:(id)arg5 additionalPredicates:(id)arg6 sortDescriptors:(id)arg7 ;
-(id)removedRecords;
-(id)subtitleForGroupAtIndex:(NSInteger)arg0 ;
-(id)titleForGroupAtIndex:(NSInteger)arg0 ;
-(void)_commitPendingGroupsAndCallUpdateHandlerBypassGroupChangeDetermination:(BOOL)arg0 ;
-(void)_displayItemGroupsForSummaryOfRecords:(id)arg0 displayRemovedRecords:(BOOL)arg1 style:(NSInteger)arg2 completion:(id)arg3 ;
-(void)_queue_processAccumulatedRecordsForPage:(id)arg0 ;
-(void)_queue_queryForNextBatchOfData;
-(void)_queue_reload;
-(void)_queue_resetPagingCache;
-(void)_queue_resetPagingInformation;
-(void)_queue_setupIterator;
-(void)daySummaryHasDisplayItemUpdate:(id)arg0 ;
-(void)reload;
-(void)requestDataOfNextPage;
-(void)startCollectingDataUntilRecordWithUUID:(id)arg0 withUpdateHandler:(id)arg1 ;
-(void)stopCollectingData;


@end


#endif