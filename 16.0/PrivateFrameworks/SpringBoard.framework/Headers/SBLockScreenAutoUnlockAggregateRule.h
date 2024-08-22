// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKSCREENAUTOUNLOCKAGGREGATERULE_H
#define SBLOCKSCREENAUTOUNLOCKAGGREGATERULE_H

@class SBFUserAuthenticationController;


#import "SBAutoUnlockComposableRule.h"
#import "SBSyncController.h"

@interface SBLockScreenAutoUnlockAggregateRule : SBAutoUnlockComposableRule

@property (retain, nonatomic, getter=_syncController, setter=_setSyncController:) SBSyncController *syncController; // ivar: _syncController
@property (readonly, nonatomic) SBFUserAuthenticationController *userAuthenticationController; // ivar: _userAuthenticationController


-(BOOL)shouldAutoUnlockForSource:(int)arg0 ;
-(id)_initWithUserAuthenticationController:(id)arg0 syncController:(id)arg1 ;
-(id)initWithUserAuthenticationController:(id)arg0 ;


@end


#endif