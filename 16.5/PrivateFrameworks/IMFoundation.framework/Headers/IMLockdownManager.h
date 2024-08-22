// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMLOCKDOWNMANAGER_H
#define IMLOCKDOWNMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMLockdownManager : NSObject

@property (nonatomic) BOOL _hasShownMismatchedSIM; // ivar: _hasShownMismatchedSIM
@property (nonatomic) BOOL _hasShownWaitingAlertThisSession; // ivar: _hasShownWaitingAlertThisSession
@property (nonatomic) BOOL _isCarrierInstall; // ivar: _isCarrierInstall
@property (nonatomic) BOOL _isInternalInstall; // ivar: _isInternalInstall
@property (nonatomic) BOOL _isNonUIInstall; // ivar: _isNonUIInstall
@property (nonatomic) BOOL _isVendorInstall; // ivar: _isVendorInstall
@property (nonatomic) BOOL _settingUpActivationState; // ivar: _settingUpActivationState
@property (nonatomic, setter=_setState:) NSUInteger _state; // ivar: _state
@property (readonly, nonatomic) BOOL isActivated;
@property (readonly, nonatomic) BOOL isCarrierInstall;
@property (readonly, nonatomic) BOOL isExpired;
@property (readonly, nonatomic) BOOL isInternalInstall;
@property (readonly, nonatomic) BOOL isNonUIInstall;
@property (readonly, nonatomic) BOOL isVendorInstall;
@property (readonly, nonatomic) NSString *uniqueDeviceIdentifier;


+(id)sharedInstance;
-(NSInteger)lockdownState;
-(id)description;
-(id)init;
-(void)_calculateInstallType;
-(void)_checkLockdown;
-(void)_checkMobileActivation;
-(void)_resetActivationState;
-(void)_setupActivationState;
-(void)dealloc;


@end


#endif