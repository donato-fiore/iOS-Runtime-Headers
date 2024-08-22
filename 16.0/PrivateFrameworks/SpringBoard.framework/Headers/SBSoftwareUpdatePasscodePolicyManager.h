// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSOFTWAREUPDATEPASSCODEPOLICYMANAGER_H
#define SBSOFTWAREUPDATEPASSCODEPOLICYMANAGER_H

@class SBFMobileKeyBag, NSString;
@protocol SBSoftLockoutControllerDelegate;

#import <Foundation/Foundation.h>

#import "SBSoftLockoutController.h"

@interface SBSoftwareUpdatePasscodePolicyManager : NSObject <SBSoftLockoutControllerDelegate>

 {
    NSInteger _softwareUpdatePasscodePolicy;
    SBSoftLockoutController *_softLockoutController;
    SBFMobileKeyBag *_mobileKeyBag;
    BOOL _passcodeAuthenticationSuccessPending;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger softwareUpdatePasscodePolicy;
@property (readonly) Class superclass;


-(BOOL)consumePendingUnlock;
-(BOOL)requiresLockout;
-(NSInteger)_effectiveSoftwareUpdatePasscodePolicy;
-(id)init;
-(id)initWithLockScreenManager:(id)arg0 mobileKeyBag:(id)arg1 ;
-(void)_authRequestCompleted:(id)arg0 ;
-(void)dealloc;
-(void)noteAuthenticationSucceededWithPasscode:(id)arg0 ;


@end


#endif