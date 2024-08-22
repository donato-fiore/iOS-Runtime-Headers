// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFGEOLOCATIONPERMISSIONMANAGER_H
#define _SFGEOLOCATIONPERMISSIONMANAGER_H

@class WBSGeolocationPreferenceManager, UIWebGeolocationPolicyDecider, CLLocationManager;



@interface _SFGeolocationPermissionManager : WBSGeolocationPreferenceManager {
    UIWebGeolocationPolicyDecider *_policyDecider;
    CLLocationManager *_locationManager;
}




+(id)sharedManager;
-(BOOL)hasPreciseLocationPermission;
-(void)_showDialogRequestingPermissionForURL:(id)arg0 frame:(id)arg1 dialogPresenter:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestPermissionForURL:(id)arg0 frame:(id)arg1 dialogPresenter:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif