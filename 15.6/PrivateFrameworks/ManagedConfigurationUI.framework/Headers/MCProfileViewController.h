// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCPROFILEVIEWCONTROLLER_H
#define MCPROFILEVIEWCONTROLLER_H

@class RMConfigurationsSpecifierProvider, NSArray;
@protocol MCProfileViewControllerDelegate;


#import "MCUITableViewController.h"
#import "MCUIProfile.h"

@interface MCProfileViewController : MCUITableViewController

@property (readonly, nonatomic) MCUIProfile *UIProfile; // ivar: _UIProfile
@property (nonatomic) BOOL installComplete; // ivar: _installComplete
@property (nonatomic) NSUInteger installProfileSource; // ivar: _installProfileSource
@property (nonatomic) BOOL profileOffersReenroll; // ivar: _profileOffersReenroll
@property (nonatomic) BOOL profileRemovable; // ivar: _profileRemovable
@property (weak, nonatomic) NSObject<MCProfileViewControllerDelegate> *profileViewControllerDelegate; // ivar: _profileViewControllerDelegate
@property (nonatomic) NSInteger profileViewMode; // ivar: _profileViewMode
@property (retain, nonatomic) RMConfigurationsSpecifierProvider *rmSpecifierProvider; // ivar: _rmSpecifierProvider
@property (retain, nonatomic) NSArray *rmTableCells; // ivar: _rmTableCells


-(BOOL)_delegateCanPoll;
-(BOOL)_delegateCanRemove;
-(BOOL)_delegateCanUpdate;
-(BOOL)_delegateDisplayPoll;
-(BOOL)_isSectionPopulated:(NSInteger)arg0 ;
-(BOOL)_shouldShowPollButton;
-(BOOL)_shouldShowRemoveButton;
-(BOOL)_shouldShowUpdateButton;
-(BOOL)_showManagedPayloads;
-(CGFloat)_heightForHeaderFooterInSection:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_emptyViewForHeaderFooter;
-(id)_tableView:(id)arg0 buttonForRowAtIndexPath:(id)arg1 text:(id)arg2 color:(id)arg3 ;
-(id)_tableView:(id)arg0 elevatedPayloadCellForRowAtIndexPath:(id)arg1 ;
-(id)_tableView:(id)arg0 profileCellForRowAtIndexPath:(id)arg1 ;
-(id)_tableView:(id)arg0 profileMoreDetailsCellForRowAtIndexPath:(id)arg1 ;
-(id)_tableView:(id)arg0 removeButtonForRowAtIndexPath:(id)arg1 ;
-(id)initWithMDMProfileForRMAccount;
-(id)initWithProfile:(id)arg0 viewMode:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 profile:(id)arg1 profileViewMode:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(int)_profileDetailsModeForElevatedPayloadAtIndexPath:(id)arg0 ;
-(void)_poll;
-(void)_removeProfile;
-(void)_rmConfigsChanged:(id)arg0 ;
-(void)_setup;
-(void)_tableChanged:(id)arg0 ;
-(void)_updateProfile;
-(void)setProfile:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif