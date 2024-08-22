// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKMANAGEPAYMENTPASSNOTIFICATIONSVIEWCONTROLLER_H
#define PKMANAGEPAYMENTPASSNOTIFICATIONSVIEWCONTROLLER_H

@class PKPaymentPass, PKPaymentDefaultDataProvider, NSString;
@protocol PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate;


#import "PKDynamicTableViewController.h"
#import "PKPaymentPassDetailsNotificationSettingsSectionController.h"

@interface PKManagePaymentPassNotificationsViewController : PKDynamicTableViewController <PKPaymentPassDetailsNotificationSettingsSectionControllerDelegate>

 {
    PKPaymentPass *_pass;
    PKPaymentPassDetailsNotificationSettingsSectionController *_notificationsSectionController;
    PKPaymentDefaultDataProvider *_defaultDataProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canShowForPass:(id)arg0 dataProvider:(id)arg1 peerPaymentAccount:(id)arg2 account:(id)arg3 ;
-(id)initWithPass:(id)arg0 dataProvider:(id)arg1 peerPaymentAccount:(id)arg2 account:(id)arg3 transactionSourceCollection:(id)arg4 ;
-(void)didSelectEditNotificationSettings:(id)arg0 ;
-(void)recomputeMappedSectionsAndReloadSections:(id)arg0 ;


@end


#endif