// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBICLOUDPASSCODEREQUIREMENTLOCKOUTCONTROLLER_H
#define SBICLOUDPASSCODEREQUIREMENTLOCKOUTCONTROLLER_H

@class SBFMobileKeyBag, NSString;
@protocol SBSoftLockoutControllerDelegate;

#import <Foundation/Foundation.h>

#import "SBSoftLockoutController.h"

@interface SBiCloudPasscodeRequirementLockoutController : NSObject <SBSoftLockoutControllerDelegate>

 {
    SBSoftLockoutController *_lockOutController;
    SBFMobileKeyBag *_mobileKeybag;
    BOOL _providedPasscode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL desiresPasscode;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_deviceHasComplexPasscode;
-(BOOL)requiresLockout;
-(id)initWithLockScreenManager:(id)arg0 mobileKeyBag:(id)arg1 ;
-(void)dealloc;
-(void)noteAuthenticationSucceededWithPasscode:(id)arg0 ;


@end


#endif