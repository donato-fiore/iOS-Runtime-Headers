// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDSAMPLELISTSTATISTICSDATAPROVIDER_H
#define WDSAMPLELISTSTATISTICSDATAPROVIDER_H

@class NSMutableArray, NSMutableSet, NSString, NSPredicate, HKDisplayType, HKUnitPreferenceController;
@protocol WDDataListViewControllerDataProvider;

#import <Foundation/Foundation.h>

#import "WDProfile.h"

@interface WDSampleListStatisticsDataProvider : NSObject <WDDataListViewControllerDataProvider>



@property (retain, nonatomic) NSMutableArray *activeDataQueries; // ivar: _activeDataQueries
@property (retain, nonatomic) NSMutableSet *activeQueryTypes; // ivar: _activeQueryTypes
@property (readonly) BOOL calendarDateSelectorVisible;
@property (readonly, nonatomic) NSInteger cellStyle;
@property (readonly, nonatomic) CGFloat customCellHeight;
@property (readonly, nonatomic) CGFloat customEstimatedCellHeight;
@property (retain) NSMutableArray *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSPredicate *defaultQueryPredicate; // ivar: defaultQueryPredicate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKDisplayType *displayType; // ivar: _displayType
@property BOOL hasCompleteDataSet; // ivar: _hasCompleteDataSet
@property (nonatomic) BOOL hasDetailViewController; // ivar: _hasDetailViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger numberOfSections;
@property (readonly, nonatomic) WDProfile *profile; // ivar: _profile
@property (copy, nonatomic) NSString *profileName; // ivar: _profileName
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL textAdjustsFontSizeToFitWidth;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


-(NSUInteger)_statisticsOptionsForSampleType:(id)arg0 ;
-(NSUInteger)numberOfObjectsForSection:(NSUInteger)arg0 ;
-(id)_predicateForTheLastMonth;
-(id)_statisticsAtIndexPath:(id)arg0 ;
-(id)customCellForObject:(id)arg0 indexPath:(id)arg1 tableView:(id)arg2 ;
-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 forSection:(NSUInteger)arg1 ;
-(id)sampleTypes;
-(id)secondaryTextForObject:(id)arg0 ;
-(id)textForObject:(id)arg0 ;
-(id)titleForSection:(NSUInteger)arg0 ;
-(id)viewControllerForItemAtIndexPath:(id)arg0 ;
-(void)_handleResultsCollection:(id)arg0 fromQuery:(id)arg1 sampleType:(id)arg2 areComplete:(BOOL)arg3 withError:(id)arg4 updateHandler:(id)arg5 ;
-(void)_startCompleteDataStatisticsCollectionQueryForSampleType:(id)arg0 updateHandler:(id)arg1 ;
-(void)_startPartialDataStatisticsCollectionQueryForSampleType:(id)arg0 updateHandler:(id)arg1 ;
-(void)customizeTableView:(id)arg0 ;
-(void)deleteAllData;
-(void)deleteObjectsAtIndexPath:(id)arg0 healthStore:(id)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 forSection:(NSUInteger)arg1 sectionRemoved:(*BOOL)arg2 ;
-(void)startCollectingDataWithUpdateHandler:(id)arg0 ;
-(void)stopCollectingData;
-(void)viewControllerIsNearEndOfScreen;


@end


#endif