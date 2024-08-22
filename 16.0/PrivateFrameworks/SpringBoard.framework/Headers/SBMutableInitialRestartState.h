// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMUTABLEINITIALRESTARTSTATE_H
#define SBMUTABLEINITIALRESTARTSTATE_H

@class SBBootDefaults;


#import "SBInitialRestartState.h"

@interface SBMutableInitialRestartState : SBInitialRestartState

@property (nonatomic, getter=isAuthenticated) BOOL authenticated;
@property (nonatomic, getter=isBlocked) BOOL blocked;
@property (retain, nonatomic) SBBootDefaults *bootDefaults;
@property (nonatomic, getter=isForSimulator) BOOL forSimulator;
@property (nonatomic) BOOL hasPasscodeSet;
@property (nonatomic, getter=homeButtonType) NSInteger homeButtonType;
@property (nonatomic, getter=isInLostMode) BOOL inLostMode;
@property (nonatomic, getter=isLoginSession) BOOL loginSession;
@property (nonatomic) BOOL requiresSetup;
@property (nonatomic) BOOL shouldNeverLock;




@end


#endif