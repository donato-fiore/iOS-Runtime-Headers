// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCNOTIFICATIONMANAGEMENTALERTCONTROLLER_H
#define NCNOTIFICATIONMANAGEMENTALERTCONTROLLER_H

@class UIAlertController, NSString, NCNotificationRequest;
@protocol NCNotificationManagementController, NCNotificationManagementControllerSettingsDelegate;



@interface NCNotificationManagementAlertController : UIAlertController <NCNotificationManagementController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationRequest *request; // ivar: _request
@property (weak, nonatomic) NSObject<NCNotificationManagementControllerSettingsDelegate> *settingsDelegate; // ivar: _settingsDelegate
@property (readonly) Class superclass;


-(BOOL)shouldAutorotate;
-(id)initWithRequest:(id)arg0 withPresentingView:(id)arg1 settingsDelegate:(id)arg2 ;
-(void)_configureView;
-(void)viewDidLoad;


@end


#endif