// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOCKSCREENTEMPERATUREWARNINGVIEWCONTROLLER_H
#define SBLOCKSCREENTEMPERATUREWARNINGVIEWCONTROLLER_H

@class NSString;


#import "SBLockOverlayViewController.h"
#import "SBLockScreenTemperatureWarningView.h"

@interface SBLockScreenTemperatureWarningViewController : SBLockOverlayViewController {
    SBLockScreenTemperatureWarningView *_warningView;
}


@property (readonly, weak, nonatomic) NSString *slideToUnlockText;


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;


@end


#endif