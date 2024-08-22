// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKHEALTHMANAGESTORAGEVIEWCONTROLLER_H
#define HKHEALTHMANAGESTORAGEVIEWCONTROLLER_H

@class PSListController, UIProgressHUD, HKCloudSyncControl, HKHealthStore;



@interface HKHealthManageStorageViewController : PSListController {
    NSInteger _status;
    UIProgressHUD *_spinnerView;
    HKCloudSyncControl *_cloudSyncControl;
}


@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore


-(id)init;
-(id)specifiers;
-(void)_disableAndDelete:(id)arg0 ;
-(void)_loadCloudSyncStorageStatus;
-(void)confirmDisable:(id)arg0 ;
-(void)hideSpinner;
-(void)showSpinnerMessage:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif