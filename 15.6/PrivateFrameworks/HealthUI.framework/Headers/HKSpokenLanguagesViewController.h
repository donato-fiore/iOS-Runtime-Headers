// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPOKENLANGUAGESVIEWCONTROLLER_H
#define HKSPOKENLANGUAGESVIEWCONTROLLER_H

@class UITableViewController, NSArray, NSString, UISearchController;
@protocol UISearchResultsUpdating, HKSpokenLanguagesViewControllerDelegate;


#import "HKSpokenLanguage.h"
#import "HKSpokenLanguageDiffableDataSource.h"

@interface HKSpokenLanguagesViewController : UITableViewController <UISearchResultsUpdating>



@property (retain, nonatomic) NSArray *allSpokenLanguages; // ivar: _allSpokenLanguages
@property (retain, nonatomic) HKSpokenLanguage *currentLanguage; // ivar: _currentLanguage
@property (retain, nonatomic) HKSpokenLanguageDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *mostLikelyLanguages; // ivar: _mostLikelyLanguages
@property (weak, nonatomic) NSObject<HKSpokenLanguagesViewControllerDelegate> *pickerDelegate; // ivar: _pickerDelegate
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (readonly) Class superclass;


+(id)defaultCheckmarkImage;
-(id)initWithCurrentLanguage:(id)arg0 preferredLanguages:(id)arg1 andAllSpokenLanguages:(id)arg2 ;
-(id)snapshotForCurrentState;
-(id)snapshotForSearchResults:(id)arg0 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)cancelAction;
-(void)configureCancelButton;
-(void)configureDataSource;
-(void)configureSearchController;
-(void)doneAction;
-(void)handleSearchSelection;
-(void)setConfirmButtonEnabledIfNeeded;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif