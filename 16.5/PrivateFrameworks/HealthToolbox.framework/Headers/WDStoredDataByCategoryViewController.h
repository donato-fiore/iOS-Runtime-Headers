// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDSTOREDDATABYCATEGORYVIEWCONTROLLER_H
#define WDSTOREDDATABYCATEGORYVIEWCONTROLLER_H

@class HKTableViewController, UIFont, NSArray, NSString, NSPredicate;


#import "WDProfile.h"

@interface WDStoredDataByCategoryViewController : HKTableViewController

@property (retain, nonatomic) UIFont *bodyFont; // ivar: _bodyFont
@property (retain, nonatomic) NSArray *capturedSampleTypes; // ivar: _capturedSampleTypes
@property (retain, nonatomic) WDProfile *profile; // ivar: _profile
@property (nonatomic) BOOL queryReturned; // ivar: _queryReturned
@property (retain) NSArray *savedCategories; // ivar: _savedCategories
@property (readonly, nonatomic) BOOL shouldShowDeleteAllDataButton;
@property (readonly, nonatomic) NSString *storedDataDisplayName;
@property (readonly, nonatomic) NSPredicate *storedDataPredicate;


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_makeDataListViewControllerForDisplayType:(id)arg0 ;
-(id)init;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)reduceCategoriesForCapturedSampleTypes:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_displayTypeStringsChanged:(id)arg0 ;
-(void)deleteAllStoredData;
-(void)handleSamplesQueryResults:(id)arg0 ;
-(void)presentDeleteConfirmation;
-(void)selectSourceStoredDataTableViewCell:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif