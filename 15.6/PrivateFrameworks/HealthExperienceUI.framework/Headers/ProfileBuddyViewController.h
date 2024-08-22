// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PROFILEBUDDYVIEWCONTROLLER_H
#define PROFILEBUDDYVIEWCONTROLLER_H

@class HKTableViewController, HKTitledContactBuddyHeaderView, WDBuddyFlowContinueFooterView, WDBuddyFlowUserInfo, NSArray, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, HKSimpleDataEntryItemToolbarDelegate, ProfileBuddyViewControllerDelegate;



@interface ProfileBuddyViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, HKSimpleDataEntryItemToolbarDelegate>

 {
    HKTitledContactBuddyHeaderView *_headerView;
    WDBuddyFlowContinueFooterView *_footerView;
    WDBuddyFlowUserInfo *_userInfo;
    BOOL _hasSetUpHeaderAndFooterViews;
}


@property (readonly, nonatomic) WDBuddyFlowUserInfo *buddyFlowUserInfo;
@property (retain, nonatomic) NSArray *dataEntryItems; // ivar: _dataEntryItems
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ProfileBuddyViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_createTableFooterView;
-(id)_createTableHeaderView;
-(id)init;
-(id)initWithBuddyFlowUserInfo:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_configureHeaderView:(id)arg0 ;
-(void)_localeDidChange:(id)arg0 ;
-(void)_setupObservers;
-(void)_updateForCurrentSizeCategory;
-(void)continueButtonTapped:(id)arg0 ;
-(void)dataEntryItemDonePressed:(id)arg0 ;
-(void)dataEntryItemNextPressed:(id)arg0 ;
-(void)dataEntryItemPrevPressed:(id)arg0 ;
-(void)dealloc;
-(void)focusItemAtIndex:(NSInteger)arg0 ;
-(void)setUpHeaderAndFooterViewsIfNeeded;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif