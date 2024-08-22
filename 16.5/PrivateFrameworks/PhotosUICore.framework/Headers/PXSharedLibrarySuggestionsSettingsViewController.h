// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYSUGGESTIONSSETTINGSVIEWCONTROLLER_H
#define PXSHAREDLIBRARYSUGGESTIONSSETTINGSVIEWCONTROLLER_H

@class UIViewController, UITableView, UISwitch, UICollectionView, UICollectionViewDiffableDataSource, NSString, PHPhotoLibrary, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate, UICollectionViewDelegate, PHPickerViewControllerDelegate, PXSharedLibraryRulePeopleDataManagerDelegate;


#import "PXSharedLibraryRulePeopleDataManager.h"

@interface PXSharedLibrarySuggestionsSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UICollectionViewDelegate, PHPickerViewControllerDelegate, PXSharedLibraryRulePeopleDataManagerDelegate>

 {
    UITableView *_tableView;
    UISwitch *_suggestionsEnabledSwitch;
    UICollectionView *_peopleCollectionView;
    UICollectionViewDiffableDataSource *_peopleCollectionViewDataSource;
    PXSharedLibraryRulePeopleDataManager *_peopleDataManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_addSectionWithConfigurationHandler:(id)arg0 ;
-(void)_handleDoneAction:(id)arg0 ;
-(void)_update;
-(void)_updateCollectionViewCell:(id)arg0 forRulePerson:(id)arg1 ;
-(void)_updateSections;
-(void)addOtherPeople:(id)arg0 ;
-(void)loadView;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)removePerson:(id)arg0 ;
-(void)sharedLibraryRulePeopleControllerDidChangeCurrentSnapshot:(id)arg0 ;
-(void)suggestionsEnabledChanged:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif