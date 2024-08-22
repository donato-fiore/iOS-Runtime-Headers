// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEVICEPINSETUPCONTROLLER_H
#define DEVICEPINSETUPCONTROLLER_H



#import "PSSetupController.h"

@interface DevicePINSetupController : PSSetupController

@property (nonatomic) BOOL allowOptionsButton; // ivar: _allowOptionsButton
@property BOOL success; // ivar: _success


-(BOOL)canBeShownFromSuspendedState;
-(BOOL)popupStyleIsModal;
-(BOOL)usePopupStyle;
-(id)init;
-(struct CGSize )preferredContentSize;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;


@end


#endif