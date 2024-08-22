// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14FAMILYCIRCLEUI32FAFAMILYSETTINGSVIEWCONTROLLERV2_H
#define _TTC14FAMILYCIRCLEUI32FAFAMILYSETTINGSVIEWCONTROLLERV2_H

@protocol _TtP14FamilyCircleUI40FAFamilySettingsViewControllerV2Delegate_;


#import "FARestorableViewController.h"

@interface _TtC14FamilyCircleUI32FAFamilySettingsViewControllerV2 : FARestorableViewController {
    ? appleAccount;
    ? subscriptionsDataLoader;
    ? grandSlamSigner;
    ? pictureStore;
    ? accountManager;
    ? activityIndicatorView;
    ? activityIndicatorViewForAdd;
    ? viewModel;
    ? locationViewModel;
    ? familySettingsHelper;
    ? addMemberButton;
    ? currentStateController;
    ? peopleDiscoveryService;
    ? appleCashHandler;
}


@property (nonatomic, weak) NSObject<_TtP14FamilyCircleUI40FAFamilySettingsViewControllerV2Delegate_> *delegate; // ivar: delegate


-(id)initWithAppleAccount:(id)arg0 grandSlamSigner:(id)arg1 familyCircle:(id)arg2 subscriptionsDataLoader:(id)arg3 pictureStore:(id)arg4 accountManager:(id)arg5 peopleDiscoveryService:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)familyDidChangeWithNotification:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif