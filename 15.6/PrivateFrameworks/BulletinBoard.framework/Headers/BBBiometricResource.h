// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBBIOMETRICRESOURCE_H
#define BBBIOMETRICRESOURCE_H

@class BKDevice;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BBBiometricResource : NSObject {
    BOOL _isPasscodeSet;
    BOOL _isBiometricUnlockAllowed;
    BOOL _hasEnrolledPearlIdentities;
    BKDevice *_pearlDevice;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) BOOL hasPearlCapability;
@property (readonly, nonatomic) BOOL isPearlEnabledAndEnrolled;


-(id)initWithQueue:(id)arg0 ;
-(void)_registerForBKEnrollmentChange;
-(void)_registerForBiometricUnlockAllowedChange;
-(void)_registerForPasscodeChange;
-(void)_unregisterForBKEnrollmentChange;
-(void)_unregisterForBiometricUnlockAllowedChange;
-(void)_updateHasEnrolledPearlIdentities;
-(void)_updateIsBiometricUnlockAllowed;
-(void)_updateIsPasscodeSet;
-(void)dealloc;


@end


#endif