// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIBUNDLEENROLLVIEWCONTROLLER_H
#define BKUIBUNDLEENROLLVIEWCONTROLLER_H

@protocol OS_os_log;


#import "BiometricKitUIEnrollViewController.h"

@interface BKUIBundleEnrollViewController : BiometricKitUIEnrollViewController {
    NSInteger _shortScanCount;
    NSInteger _maxShortScanCount;
    NSObject<OS_os_log> *bkui_bundle_enroll_view_controller_log;
}




-(id)bundleAlertView;
-(void)afterStatusMessage:(unsigned int)arg0 ;
-(void)statusMessage:(unsigned int)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif