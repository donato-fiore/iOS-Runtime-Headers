// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTINVITATIONCHOOSEMEMBERVIEWCONTROLLER_H
#define PKACCOUNTINVITATIONCHOOSEMEMBERVIEWCONTROLLER_H

@class UIViewController, NSDictionary, NSPersonNameComponentsFormatter, NSNumberFormatter, UITableView, NSIndexPath, NSArray, PKOSVersionRequirementRange, FACircleStateController, NSString;
@protocol UITableViewDelegate, UITableViewDelegatePrivate, PKDeviceSharingCapabilitiesManagerObserver, PKAccountInvitationControllerObserver, _PKUIKVisibilityBackdropViewDelegate, PKViewControllerPreflightable;


#import "PKAccountInvitationController.h"
#import "PKTableHeaderView.h"
#import "PKTableViewDiffableDataSource.h"
#import "PKPaymentSetupDockView.h"
#import "_PKUIKVisibilityBackdropView.h"

@interface PKAccountInvitationChooseMemberViewController : UIViewController <UITableViewDelegate, UITableViewDelegatePrivate, PKDeviceSharingCapabilitiesManagerObserver, PKAccountInvitationControllerObserver, _PKUIKVisibilityBackdropViewDelegate, PKViewControllerPreflightable>

 {
    PKAccountInvitationController *_controller;
    NSDictionary *_familyMemberPhotosByAltDSID;
    NSDictionary *_pendingFamilyMemberImagesByEmail;
    NSPersonNameComponentsFormatter *_nameFormatter;
    NSNumberFormatter *_ageFormatter;
    PKTableHeaderView *_headerView;
    UITableView *_tableView;
    CGFloat _previousHeaderHeight;
    NSIndexPath *_loadingInvitationIndexPath;
    NSArray *_totalFamilyMembers;
    NSArray *_pendingFamilyMembers;
    PKOSVersionRequirementRange *_requiredOSVersionRange;
    NSInteger _minimumParticipantAge;
    NSNumberFormatter *_maximumAccountUsersFormatter;
    PKTableViewDiffableDataSource *_diffableDataSource;
    FACircleStateController *_stateController;
    PKPaymentSetupDockView *_dockView;
    _PKUIKVisibilityBackdropView *_backdropView;
    CGFloat _backdropWeight;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)visibilityBackdropView:(id)arg0 preferredStyleForTraitCollection:(id)arg1 ;
-(id)initWithController:(id)arg0 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_filterAvailableFamilyMembersFromMembers:(id)arg0 ;
-(void)_handleAddPersonTapped;
-(void)_openFamilyMemberSettings;
-(void)_reloadFamilyCollectionWithForceReload:(BOOL)arg0 completion:(id)arg1 ;
-(void)_reportAnalyticsViewDidAppear:(BOOL)arg0 ;
-(void)_setLoadingIndexPath:(id)arg0 ;
-(void)_updateHeaderFooterText;
-(void)_updateSnapshotAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)deviceSharingCapabilitiesUpdated:(id)arg0 maximumPossibleDevices:(NSInteger)arg1 forAppleID:(id)arg2 ;
-(void)deviceSharingCapabilitiesUpdated:(id)arg0 newSharingCapabilties:(id)arg1 forAppleID:(id)arg2 ;
-(void)didUpdateInvitationControllerFamilyCircle;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableViewDidFinishReload:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif