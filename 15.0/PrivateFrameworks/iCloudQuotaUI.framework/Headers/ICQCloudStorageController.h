// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQCLOUDSTORAGECONTROLLER_H
#define ICQCLOUDSTORAGECONTROLLER_H

@class PSListController, NSTimer;


#import "ICQCloudStorageGroupController.h"
#import "ICQUpgradeFlowManager.h"

@interface ICQCloudStorageController : PSListController {
    ICQCloudStorageGroupController *_cloudGroup;
    ICQUpgradeFlowManager *_quotaManager;
    NSTimer *_storageUpgradeOfferTimer;
}




-(id)specifiers;
-(void)_changeStoragePlan;
-(void)_storageUpgrade;
-(void)_storageUpgradeOfferNotification:(id)arg0 ;
-(void)_storageUpgradeOfferTimeout:(id)arg0 ;
-(void)dealloc;
-(void)handleURL:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif