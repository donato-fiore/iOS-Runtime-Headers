// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFMUTABLELOCKSCREENACTIONCONTEXT_H
#define SBFMUTABLELOCKSCREENACTIONCONTEXT_H

@class NSString;


#import "SBFLockScreenActionContext.h"

@interface SBFMutableLockScreenActionContext : SBFLockScreenActionContext

@property (copy, nonatomic) id *action;
@property (nonatomic) BOOL canBypassPinLock;
@property (nonatomic) BOOL confirmedNotInPocket;
@property (nonatomic) BOOL deactivateAwayController;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) int intent;
@property (retain, nonatomic) NSString *lockLabel;
@property (nonatomic) BOOL requiresAuthentication;
@property (nonatomic) BOOL requiresUIUnlock;
@property (retain, nonatomic) NSString *shortLockLabel;
@property (nonatomic) int source;
@property (copy, nonatomic) NSString *unlockDestination;
@property (nonatomic) BOOL wantsBiometricPresentation;




@end


#endif