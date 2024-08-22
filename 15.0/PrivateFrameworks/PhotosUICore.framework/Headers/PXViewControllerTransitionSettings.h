// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXVIEWCONTROLLERTRANSITIONSETTINGS_H
#define PXVIEWCONTROLLERTRANSITIONSETTINGS_H



#import "PXSettings.h"
#import "PXViewControllerPinchTransitionSettings.h"
#import "PXViewControllerSwipeDownTransitionSettings.h"
#import "PXViewControllerZoomTransitionSettings.h"

@interface PXViewControllerTransitionSettings : PXSettings

@property (retain, nonatomic) PXViewControllerPinchTransitionSettings *pinchTransitionSettings; // ivar: _pinchTransitionSettings
@property (retain, nonatomic) PXViewControllerSwipeDownTransitionSettings *swipeDownTransitionSettings; // ivar: _swipeDownTransitionSettings
@property (retain, nonatomic) PXViewControllerZoomTransitionSettings *zoomTransitionSettings; // ivar: _zoomTransitionSettings


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)createChildren;


@end


#endif