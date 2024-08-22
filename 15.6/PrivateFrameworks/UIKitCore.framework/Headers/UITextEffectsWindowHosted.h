// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTEFFECTSWINDOWHOSTED_H
#define UITEXTEFFECTSWINDOWHOSTED_H



#import "UITextEffectsWindow.h"

@interface UITextEffectsWindowHosted : UITextEffectsWindow



-(BOOL)_isFullscreen;
-(BOOL)_isTextEffectsWindowHosting;
-(BOOL)_isTextEffectsWindowNotificationOwner;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_usesWindowServerHitTesting;
-(NSInteger)_orientationForRootTransform;
-(NSInteger)_orientationForSceneTransform;
-(NSInteger)_orientationForViewTransform;
-(struct CGRect )actualSceneBounds;
-(struct CGRect )actualSceneBoundsForLandscape:(BOOL)arg0 ;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)_sceneBoundsDidChange;


@end


#endif