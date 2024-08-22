// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDDISPLAYTYPEDATASOURCESTABLEVIEWCONTROLLER_H
#define WDDISPLAYTYPEDATASOURCESTABLEVIEWCONTROLLER_H

@class HKTableViewController, HKDisplayCategory, HKDisplayType, HKHealthStore, HKProfileStore, HKAuthorizationStore, NSMutableSet, NSArray, NSMutableDictionary, HKTitledIconHeaderView, NSSet, NSDictionary, NSMutableArray, HKSourceListDataSource;
@protocol HKSwitchTableViewCellDelegate, HKSourceListDataSourceObserver;


#import "WDProfile.h"
#import "WDSourceOrderController.h"

@interface WDDisplayTypeDataSourcesTableViewController : HKTableViewController <HKSwitchTableViewCellDelegate, HKSourceListDataSourceObserver>

 {
    BOOL _isLoaded;
    HKDisplayCategory *_displayCategory;
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKHealthStore *_healthStore;
    HKProfileStore *_profileStore;
    HKAuthorizationStore *_authorizationStore;
    WDSourceOrderController *_sourceOrderController;
    NSMutableSet *_dataSources;
    NSArray *_preEditSourcesOrdered;
    NSArray *_readerAppSources;
    NSArray *_readerResearchStudySources;
    NSMutableDictionary *_authorizationRecordsBySource;
    HKTitledIconHeaderView *_headerView;
    NSMutableSet *_sourcesPendingToggleOff;
    NSMutableSet *_sourcesPendingToggleOn;
    NSArray *_sectionIdentifiers;
}


@property (copy, nonatomic) NSSet *loadedAllDataSources; // ivar: _loadedAllDataSources
@property (copy, nonatomic) NSDictionary *loadedAuthorizationRecordsBySource; // ivar: _loadedAuthorizationRecordsBySource
@property (copy, nonatomic) NSArray *loadedOrderedDataSources; // ivar: _loadedOrderedDataSources
@property (retain, nonatomic) NSMutableArray *orderedDataSources; // ivar: _orderedDataSources
@property (nonatomic) BOOL shouldInsetSectionContentForDataSourceDataList; // ivar: _shouldInsetSectionContentForDataSourceDataList
@property (retain, nonatomic) HKSourceListDataSource *sourceListDataSource; // ivar: _sourceListDataSource


-(BOOL)_canEditDataSources;
-(BOOL)_isPrimaryProfile;
-(BOOL)_objectTypeRequiresPerObjectAuthorization;
-(BOOL)_sourceIsEnabled:(id)arg0 ;
-(BOOL)showDataSourcesSectionOnly;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)sectionForSectionIdentifier:(NSInteger)arg0 ;
-(NSInteger)sectionIdentifierForSection:(NSInteger)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_createIndexPathsWithSection:(NSInteger)arg0 startingRow:(NSInteger)arg1 numIndices:(NSInteger)arg2 ;
-(id)_dataSourceCellForTableView:(id)arg0 row:(NSUInteger)arg1 ;
-(id)_makeDataListViewControllerForSource:(id)arg0 ;
-(id)_noneTableViewCell;
-(id)_readerSourceCellForTableView:(id)arg0 sourceArray:(id)arg1 row:(NSUInteger)arg2 ;
-(id)createSectionIdentifiers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayType:(id)arg0 displayCategory:(id)arg1 sourceOrderController:(id)arg2 profile:(id)arg3 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_addDataSources:(id)arg0 ;
-(void)_fetchAuthorizationRecordsBySourceForType:(id)arg0 completion:(id)arg1 ;
-(void)_fetchDataSourcesForSampleType:(id)arg0 completion:(id)arg1 ;
-(void)_fetchOrderedSourcesForType:(id)arg0 completion:(id)arg1 ;
-(void)_gatherDataFromDataSource:(id)arg0 ;
-(void)_handleReturnedImage:(id)arg0 forSource:(id)arg1 cell:(id)arg2 tableView:(id)arg3 fetchError:(id)arg4 ;
-(void)_loadDataSource;
-(void)_refreshUI;
-(void)_sortDataSources;
-(void)_sourceIsEnabledDidChange:(id)arg0 ;
-(void)_updateOrderedSources;
-(void)_willDisableSource:(id)arg0 ;
-(void)_willEnableSource:(id)arg0 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)sourceListDataSourceDidUpdate:(id)arg0 ;
-(void)switchCellValueChanged:(id)arg0 value:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif