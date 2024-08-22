// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTAUTHORIZATIONSERVICECOMPACTNAVIGATIONCONTAINERCONTROLLER_H
#define PKPAYMENTAUTHORIZATIONSERVICECOMPACTNAVIGATIONCONTAINERCONTROLLER_H

@class LAUIHorizontalArrowView, LAUIPhysicalButtonView;


#import "PKCompactNavigationContainerController.h"

@interface PKPaymentAuthorizationServiceCompactNavigationContainerController : PKCompactNavigationContainerController {
    unsigned char _rotationCount;
    BOOL _attemptedSecondaryViewCreation;
    BOOL _cameraOrientationSupported;
    LAUIHorizontalArrowView *_cameraArrowView;
    LAUIPhysicalButtonView *_physicalButtonView;
}


@property (readonly, nonatomic) LAUIPhysicalButtonView *physicalButtonView;
@property (nonatomic) BOOL showCameraIndicator; // ivar: _showCameraIndicator
@property (nonatomic) BOOL showPhysicalButtonIndicator; // ivar: _showPhysicalButtonIndicator


-(BOOL)_canShowWhileLocked;
-(BOOL)_effectiveShowCameraIndicator;
-(BOOL)_effectiveShowPhysicalButtonIndicator;
-(void)_createSecondaryViewsIfNecessary;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif