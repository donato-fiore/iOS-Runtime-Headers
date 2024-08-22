// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PROFILECHARACTERISTICTYPEPERMISSIONSVIEWCONTROLLER_H
#define PROFILECHARACTERISTICTYPEPERMISSIONSVIEWCONTROLLER_H

@class UITableViewController, HKHealthStore, HKDisplayTypeController, NSString, HKAuthorizationStore, HKCharacteristicType, NSDictionary, WDDisplayTypeDescriptionTableFooterView, HKDisplayType, NSArray, HKSourceListDataSource;
@protocol HKSwitchTableViewCellDelegate, HKSourceListDataSourceObserver;



@interface ProfileCharacteristicTypePermissionsViewController : UITableViewController <HKSwitchTableViewCellDelegate, HKSourceListDataSourceObserver>

 {
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    NSString *_firstName;
    HKAuthorizationStore *_authorizationStore;
    HKCharacteristicType *_characteristicType;
    NSDictionary *_characteristicAuthorizationRecordsBySource;
    WDDisplayTypeDescriptionTableFooterView *_footerView;
    HKDisplayType *_displayType;
    BOOL _isLoaded;
    NSArray *_orderedSectionIdentifiers;
}


@property (retain, nonatomic) HKSourceListDataSource *sourceListDataSource; // ivar: _sourceListDataSource
@property (copy, nonatomic) NSDictionary *sourceToAuthRecord; // ivar: _sourceToAuthRecord


+(id)orderedSectionIdentifiersForProfile:(NSInteger)arg0 ;
-(BOOL)_shouldDisplayNameInFooters;
-(NSInteger)_profileSectionIdentifierForIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_sourceForIndexPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 characteristicType:(id)arg1 firstName:(id)arg2 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_adjustFooterHeight;
-(void)_fetchAuthorizationRecordsBySourceForCharacteristic:(id)arg0 ;
-(void)_gatherDataAndRefreshUI;
-(void)_handleReturnedImage:(id)arg0 forSource:(id)arg1 cell:(id)arg2 tableView:(id)arg3 fetchError:(id)arg4 ;
-(void)sourceListDataSourceDidUpdate:(id)arg0 ;
-(void)switchCellValueChanged:(id)arg0 value:(BOOL)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif