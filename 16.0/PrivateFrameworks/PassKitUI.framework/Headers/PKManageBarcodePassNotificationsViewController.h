// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMANAGEBARCODEPASSNOTIFICATIONSVIEWCONTROLLER_H
#define PKMANAGEBARCODEPASSNOTIFICATIONSVIEWCONTROLLER_H

@class PKPaymentPass, NSString;
@protocol PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate;


#import "PKDynamicTableViewController.h"
#import "PKBarcodePassDetailsNotificationSettingsSectionController.h"

@interface PKManageBarcodePassNotificationsViewController : PKDynamicTableViewController <PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate>

 {
    PKPaymentPass *_pass;
    PKBarcodePassDetailsNotificationSettingsSectionController *_notificationsSectionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canShowForPass:(id)arg0 ;
-(id)initWithPass:(id)arg0 ;
-(void)recomputeMappedSectionsAndReloadSections:(id)arg0 ;


@end


#endif