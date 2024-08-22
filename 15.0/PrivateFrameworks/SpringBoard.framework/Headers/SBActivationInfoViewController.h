// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBACTIVATIONINFOVIEWCONTROLLER_H
#define SBACTIVATIONINFOVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, UIView, UITableView, NSLayoutConstraint, _UILegibilitySettings, UIButton;
@protocol STTelephonyStateObserver, UITableViewDataSource, UITableViewDelegate;



@interface SBActivationInfoViewController : UIViewController <STTelephonyStateObserver, UITableViewDataSource, UITableViewDelegate>

 {
    NSString *_meid;
    NSString *_serial;
    NSArray *_mobileSubscriptionInfo;
    UIView *_containerView;
    UITableView *_activationInfoTableView;
    NSLayoutConstraint *_activationInfoTableViewHeight;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) NSArray *mobileEquipmentInfo; // ivar: _mobileEquipmentInfo
@property (readonly, nonatomic) UIButton *regulatoryInfoButton; // ivar: _regulatoryInfoButton
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_activationInfoCell;
-(id)_backgroundViewForHeaderView:(id)arg0 ;
-(id)_formattedCSN:(id)arg0 ;
-(id)_formattedICCID:(id)arg0 ;
-(id)_formattedIMEI:(id)arg0 ;
-(id)_formattedString:(id)arg0 withSpaceAfterDigits:(NSUInteger)arg1 ;
-(id)_processDeviceInfo;
-(id)_processMobileEquipmentInfo:(id)arg0 ;
-(id)_processMobileSubscriptionInfo;
-(id)_titleForHeaderInSection:(NSInteger)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_telephonyStateChanged;
-(void)_updateMobileEquipmentInfo;
-(void)dealloc;
-(void)loadView;
-(void)mobileEquipmentInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;
-(void)subscriptionInfoDidChangeForStateProvider:(id)arg0 slot:(NSInteger)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif