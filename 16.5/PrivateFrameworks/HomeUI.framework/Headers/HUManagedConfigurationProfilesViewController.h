// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMANAGEDCONFIGURATIONPROFILESVIEWCONTROLLER_H
#define HUMANAGEDCONFIGURATIONPROFILESVIEWCONTROLLER_H

@class UITableViewController, HMAccessory, NSString, NAFuture, NSArray, UITableViewDiffableDataSource;
@protocol MCProfileViewControllerDelegate, HUPresentationDelegateHost, HUPresentationDelegate;



@interface HUManagedConfigurationProfilesViewController : UITableViewController <MCProfileViewControllerDelegate, HUPresentationDelegateHost>



@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NAFuture *fetchDataFuture; // ivar: _fetchDataFuture
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: presentationDelegate
@property (retain, nonatomic) NSArray *profiles; // ivar: _profiles
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource; // ivar: _tableViewDataSource


-(BOOL)profileViewControllerIsProfileInstalled;
-(id)_confirmProfileDeletion:(id)arg0 ;
-(id)_newCellForProfile:(id)arg0 ;
-(id)_profileForIdentifier:(id)arg0 ;
-(id)_removeProfileForIdentifier:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(void)_fetchDataAndReloadTable;
-(void)_reloadTableViewWithExistingData;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif