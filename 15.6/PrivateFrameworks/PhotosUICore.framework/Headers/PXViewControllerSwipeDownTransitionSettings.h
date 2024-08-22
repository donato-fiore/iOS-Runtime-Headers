// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXVIEWCONTROLLERSWIPEDOWNTRANSITIONSETTINGS_H
#define PXVIEWCONTROLLERSWIPEDOWNTRANSITIONSETTINGS_H



#import "PXSettings.h"
#import "PXSwipeDownSettings.h"

@interface PXViewControllerSwipeDownTransitionSettings : PXSettings

@property (nonatomic) BOOL allowSwipeDown; // ivar: _allowSwipeDown
@property (nonatomic) CGFloat minimumDimmingOpacity; // ivar: _minimumDimmingOpacity
@property (retain, nonatomic) PXSwipeDownSettings *swipeDownSettings; // ivar: _swipeDownSettings


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)createChildren;
-(void)setDefaultValues;


@end


#endif