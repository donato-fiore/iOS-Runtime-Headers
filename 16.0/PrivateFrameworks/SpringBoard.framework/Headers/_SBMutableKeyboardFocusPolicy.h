// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBMUTABLEKEYBOARDFOCUSPOLICY_H
#define _SBMUTABLEKEYBOARDFOCUSPOLICY_H

@class SBKeyboardFocusPolicy, BKSHIDEventDeferringTarget, FBSSceneIdentityToken;


#import "SBWindowScene.h"
#import "_SBRecentlyUsedSceneIdentityCache.h"

@interface _SBMutableKeyboardFocusPolicy : SBKeyboardFocusPolicy

@property (nonatomic) NSInteger advicePolicy;
@property (nonatomic) BOOL cameraIsHosted;
@property (retain, nonatomic) BKSHIDEventDeferringTarget *keyboardFocusTarget;
@property (retain, nonatomic) FBSSceneIdentityToken *overrideSceneIdentityToken;
@property (weak, nonatomic) SBWindowScene *preferredSBFocusWindowScene;
@property (copy, nonatomic) _SBRecentlyUsedSceneIdentityCache *recentlyUsedScenes;
@property (nonatomic) BOOL shouldSuppressRemoteDeferring;




@end


#endif