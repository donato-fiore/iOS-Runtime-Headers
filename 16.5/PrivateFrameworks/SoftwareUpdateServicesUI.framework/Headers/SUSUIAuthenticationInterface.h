// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSUIAUTHENTICATIONINTERFACE_H
#define SUSUIAUTHENTICATIONINTERFACE_H

@class NSUserDefaults, SUKeybagInterface, NSString;
@protocol SUKeybagInterfaceObserver;

#import <Foundation/Foundation.h>


@interface SUSUIAuthenticationInterface : NSObject <SUKeybagInterfaceObserver>

 {
    NSUserDefaults *_defaults;
    SUKeybagInterface *_keybag;
    BOOL _isPasscodeLocked;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBlocked;
@property (nonatomic) BOOL isController; // ivar: _isController
@property (nonatomic, getter=_numberOfFailedAuthenticationAttempts, setter=_setNumberOfFailedAuthenticationAttempts:) NSUInteger numberOfFailedAuthenticationAttempts;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)attemptAuthentication:(id)arg0 outBlocked:(*BOOL)arg1 ;
-(NSUInteger)_currentFailedAttemptsCount;
-(id)init;
-(id)initWithKeybag:(id)arg0 ;
-(void)_incrementFailedAttemptsCount;
-(void)_setPasscodeLocked:(BOOL)arg0 ;
-(void)keybagInterface:(id)arg0 passcodeLockedStateDidChange:(BOOL)arg1 ;
-(void)resetAttempts;


@end


#endif