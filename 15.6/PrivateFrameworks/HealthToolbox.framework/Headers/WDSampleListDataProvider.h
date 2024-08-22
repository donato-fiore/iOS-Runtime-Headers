// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDSAMPLELISTDATAPROVIDER_H
#define WDSAMPLELISTDATAPROVIDER_H

@class NSDictionary, HKSampleListDataProviderFilter, NSString, NSPredicate, HKDisplayType, HKHealthStore, HKSortedSampleArray;
@protocol HKSampleTypeUpdateControllerObserver, WDDataListViewControllerDataProvider, HKDataMetadataViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "WDProfile.h"

@interface WDSampleListDataProvider : NSObject <HKSampleTypeUpdateControllerObserver, WDDataListViewControllerDataProvider, HKDataMetadataViewControllerDelegate>

 {
    NSDictionary *_pagingContexts;
    HKSampleListDataProviderFilter *_defaultQueryPredicateFilter;
    id *_updateCallback;
    BOOL _didFetchInitialData;
}


@property (readonly) BOOL calendarDateSelectorVisible;
@property (readonly, nonatomic) NSInteger cellStyle;
@property (readonly, nonatomic) CGFloat customCellHeight;
@property (readonly, nonatomic) CGFloat customEstimatedCellHeight;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSPredicate *defaultQueryPredicate; // ivar: _defaultQueryPredicate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property (readonly) BOOL hasCompleteDataSet;
@property (nonatomic) BOOL hasDetailViewController; // ivar: _hasDetailViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) NSUInteger numberOfSections;
@property (readonly, weak, nonatomic) WDProfile *profile; // ivar: _profile
@property (copy, nonatomic) NSString *profileName; // ivar: _profileName
@property (readonly, nonatomic) HKSortedSampleArray *samples; // ivar: _samples
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL textAdjustsFontSizeToFitWidth;


-(BOOL)_handleObjectsRemoved:(id)arg0 ;
-(BOOL)canEditRowAtIndexPath:(id)arg0 ;
-(BOOL)shareDocumentUsingSample:(id)arg0 ;
-(NSUInteger)numberOfObjectsForSection:(NSUInteger)arg0 ;
-(id)_UUIDsForSamplesWithEndDate:(id)arg0 ;
-(id)_defaultPredicateWithPredicateForType:(id)arg0 ;
-(id)_pagingContextForSampleType:(id)arg0 ;
-(id)accessViewControllerForSample:(id)arg0 healthStore:(id)arg1 ;
-(id)createDataFetcherForSampleType:(id)arg0 predicate:(id)arg1 limit:(NSInteger)arg2 sortDescriptors:(id)arg3 resultsHandler:(id)arg4 ;
-(id)createQueryForSampleType:(id)arg0 predicate:(id)arg1 limit:(NSInteger)arg2 sortDescriptors:(id)arg3 resultsHandler:(id)arg4 ;
-(id)customCellForObject:(id)arg0 indexPath:(id)arg1 tableView:(id)arg2 ;
-(id)defaultPredicateForSampleType:(id)arg0 ;
-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 forSection:(NSUInteger)arg1 ;
-(id)predicateForType:(id)arg0 ;
-(id)queryDateForSelectedDate:(id)arg0 ;
-(id)sampleTypes;
-(id)secondaryTextForObject:(id)arg0 ;
-(id)textForObject:(id)arg0 ;
-(id)titleForSection:(NSUInteger)arg0 ;
-(id)unitController;
-(id)viewControllerForItemAtIndexPath:(id)arg0 ;
-(id)viewControllerForSampleType:(id)arg0 subSamplePredicate:(id)arg1 title:(id)arg2 ;
-(void)_callUpdateHandler;
-(void)_handleQueryResultsForSampleType:(id)arg0 results:(id)arg1 ;
-(void)_requestNextPageOfData;
-(void)_requestNextPageOfDataForSampleType:(id)arg0 ;
-(void)_resetAllData;
-(void)_stopAllQueries;
-(void)customizeTableView:(id)arg0 ;
-(void)deleteAllData;
-(void)deleteObjectsAtIndexPath:(id)arg0 healthStore:(id)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)refineSamplesWithCompletion:(id)arg0 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 forSection:(NSUInteger)arg1 sectionRemoved:(*BOOL)arg2 ;
-(void)startCollectingDataWithUpdateHandler:(id)arg0 ;
-(void)stopCollectingData;
-(void)updateController:(id)arg0 didReceiveHighFrequencyUpdateForType:(id)arg1 ;
-(void)updateController:(id)arg0 didReceiveUpdateForType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3 recoveringFromError:(BOOL)arg4 ;
-(void)viewControllerIsNearEndOfScreen;
-(void)viewControllerWantsDataIncludingDate:(id)arg0 ;


@end


#endif