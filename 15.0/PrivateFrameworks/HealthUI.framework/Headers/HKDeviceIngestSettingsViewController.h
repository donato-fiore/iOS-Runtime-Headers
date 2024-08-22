// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDEVICEINGESTSETTINGSVIEWCONTROLLER_H
#define HKDEVICEINGESTSETTINGSVIEWCONTROLLER_H

@class HKIngestSettingsViewController, HKDevice;



@interface HKDeviceIngestSettingsViewController : HKIngestSettingsViewController {
    HKDevice *_device;
}




-(id)initWithHealthStore:(id)arg0 displayTypeController:(id)arg1 device:(id)arg2 useInsetStyling:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif