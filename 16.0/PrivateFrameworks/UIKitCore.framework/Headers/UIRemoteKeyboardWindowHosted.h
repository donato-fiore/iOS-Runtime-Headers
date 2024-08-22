// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIREMOTEKEYBOARDWINDOWHOSTED_H
#define UIREMOTEKEYBOARDWINDOWHOSTED_H



#import "UIRemoteKeyboardWindow.h"

@interface UIRemoteKeyboardWindowHosted : UIRemoteKeyboardWindow



+(BOOL)_isHostedInAnotherProcess;
+(BOOL)_isSecure;
-(BOOL)_isTextEffectsWindowHosting;
-(CGFloat)_adjustedWindowLevelFromLevel:(CGFloat)arg0 ;
-(CGFloat)keyboardWidthForCurrentDevice;
-(NSInteger)_orientationForRootTransform;
-(NSInteger)_orientationForSceneTransform;
-(NSInteger)_orientationForViewTransform;
-(struct CGSize )keyboardScreenReferenceSize;
-(struct UIEdgeInsets )safeAreaInsets;


@end


#endif