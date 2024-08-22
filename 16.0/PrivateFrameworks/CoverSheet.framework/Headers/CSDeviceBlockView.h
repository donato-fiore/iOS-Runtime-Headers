// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSDEVICEBLOCKVIEW_H
#define CSDEVICEBLOCKVIEW_H

@class UIButton, UIView;
@protocol CSDeviceBlockViewDelegate;


#import "CSModalView.h"

@interface CSDeviceBlockView : CSModalView {
    UIButton *_eraseDeviceButton;
    UIButton *_emergencyButton;
}


@property (retain, nonatomic) UIView *authenticationView; // ivar: _authenticationView
@property (readonly, nonatomic) CGFloat buttonsBottomSpacing;
@property (weak, nonatomic) NSObject<CSDeviceBlockViewDelegate> *deviceBlockDelegate; // ivar: _deviceBlockDelegate
@property (retain, nonatomic) UIView *eraseDeviceView; // ivar: _eraseDeviceView
@property (readonly, nonatomic) BOOL isShowingAuthenticationView;


-(void)_activateConstraints;
-(void)_handleEmergencyButtonAction;
-(void)_handleEraseButtonAction;
-(void)addDeviceEraseButtons;
-(void)removeDeviceEraseButtons;
-(void)updateViewForEraseDeviceView;


@end


#endif