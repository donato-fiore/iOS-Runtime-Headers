// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI34NOTIFICATIONSETTINGSVIEWCONTROLLER_H
#define _TTC9SEYMOURUI34NOTIFICATIONSETTINGSVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9SeymourUI34NotificationSettingsViewController : UIViewController {
    ? accountProvider;
    ? browsingStringBuilder;
    ? contentAvailabilityClient;
    ? eventHub;
    ? fitnessModeObserver;
    ? networkEvaluator;
    ? notificationSettingsProvider;
    ? storefrontLocalizer;
    ? subscriptionToken;
    ? syncManager;
    ? tableView;
    ? platform;
    ? contentUnavailableView;
    ? loadingView;
    ? spinnerView;
    ? fitnessPlusSettingsResult;
    ? notifyToken;
    ? _fitnessPlusNotificationSettingsEnabled;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)switchTappedWithCellSwitch:(id)arg0 ;
-(void)updateSettings;
-(void)viewDidLoad;


@end


#endif