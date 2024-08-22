// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSCOMPLETEDCONTROLLER_H
#define DSCOMPLETEDCONTROLLER_H

@class CLFindMyAccessoryManager, NSString, FAFamilyMember, NSLayoutConstraint, UIActivityIndicatorView;
@protocol CLFindMyAccessoryManagerDelegate, DSController, DSNavigationDelegate, OS_dispatch_group;


#import "DSOBWelcomeController.h"

@interface DSCompletedController : DSOBWelcomeController <CLFindMyAccessoryManagerDelegate, DSController>



@property (nonatomic) BOOL UTAlertsEnabled; // ivar: _UTAlertsEnabled
@property (retain, nonatomic) CLFindMyAccessoryManager *accessoryManager; // ivar: _accessoryManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) FAFamilyMember *familyMember; // ivar: _familyMember
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchingGroup; // ivar: _fetchingGroup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (readonly) Class superclass;
@property (nonatomic) BOOL walletSharing; // ivar: _walletSharing


+(void)initialize;
-(id)init;
-(void)addFamilyBullet;
-(void)addHomeBullet;
-(void)addUTAlerts;
-(void)addWalletBullet;
-(void)fetchAdditionalSharingWithCompletion:(id)arg0 ;
-(void)fetchCompleted;
-(void)findMyAccessoryManager:(id)arg0 didFailWithError:(id)arg1 forDevice:(id)arg2 ;
-(void)findMyAccessoryManager:(id)arg0 didFetchStatusOfUTEnablementRequirementsWithStatus:(id)arg1 withError:(id)arg2 ;
-(void)learnMorePressed;
-(void)startContentSpinner;
-(void)stopContentSpinner;
-(void)viewDidLoad;


@end


#endif