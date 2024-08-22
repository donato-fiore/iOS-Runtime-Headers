// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKVIBRATIONRECORDERVIEWCONTROLLER_H
#define TKVIBRATIONRECORDERVIEWCONTROLLER_H

@class UINavigationController, NSString;
@protocol PSStateRestoration, TKVibrationRecorderViewControllerDelegate;


#import "TKVibrationRecorderContentViewController.h"

@interface TKVibrationRecorderViewController : UINavigationController <PSStateRestoration>

 {
    TKVibrationRecorderContentViewController *_vibrationRecorderContentViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<TKVibrationRecorderViewControllerDelegate> *vibrationRecorderViewControllerDelegate;


-(BOOL)_canShowWhileLocked;
-(BOOL)canBeShownFromSuspendedState;
-(id)initWithVibratorController:(id)arg0 ;
-(void)dealloc;


@end


#endif