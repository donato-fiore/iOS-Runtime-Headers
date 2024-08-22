// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDELECTROCARDIOGRAMLISTDATAPROVIDER_H
#define WDELECTROCARDIOGRAMLISTDATAPROVIDER_H



#import "WDSampleListDataProvider.h"

@interface WDElectrocardiogramListDataProvider : WDSampleListDataProvider

@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) NSUInteger recentSampleLimit; // ivar: _recentSampleLimit
@property (nonatomic) BOOL shouldConsiderRequeryDueToDeletedObjects; // ivar: _shouldConsiderRequeryDueToDeletedObjects


-(BOOL)calendarDateSelectorVisible;
-(BOOL)canEditRowAtIndexPath:(id)arg0 ;
-(CGFloat)customCellHeight;
-(CGFloat)customEstimatedCellHeight;
-(NSInteger)cellStyle;
-(NSUInteger)numberOfObjectsForSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_cellForSample:(id)arg0 indexPath:(id)arg1 tableView:(id)arg2 activeAlgorithmVersion:(NSInteger)arg3 ;
-(id)_compactCellForSample:(id)arg0 indexPath:(id)arg1 tableView:(id)arg2 activeAlgorithmVersion:(NSInteger)arg3 ;
-(id)_waveCellForSample:(id)arg0 indexPath:(id)arg1 tableView:(id)arg2 activeAlgorithmVersion:(NSInteger)arg3 ;
-(id)activeECGAlgorithmVersion;
-(id)createQueryForSampleType:(id)arg0 predicate:(id)arg1 limit:(NSInteger)arg2 sortDescriptors:(id)arg3 resultsHandler:(id)arg4 ;
-(id)customCellForObject:(id)arg0 indexPath:(id)arg1 tableView:(id)arg2 ;
-(id)customLoadingCellForRowAtIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 ;
-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 mode:(NSInteger)arg2 ;
-(id)placeholderCellAtIndexPath:(id)arg0 tableView:(id)arg1 ;
-(id)queryDateForSelectedDate:(id)arg0 ;
-(id)sampleTypes;
-(id)textForObject:(id)arg0 ;
-(id)titleForSection:(NSUInteger)arg0 ;
-(id)viewControllerForItemAtIndexPath:(id)arg0 ;
-(void)customizeTableView:(id)arg0 ;
-(void)refineSamplesWithCompletion:(id)arg0 ;
-(void)updateController:(id)arg0 didReceiveUpdateForType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3 recoveringFromError:(BOOL)arg4 ;


@end


#endif