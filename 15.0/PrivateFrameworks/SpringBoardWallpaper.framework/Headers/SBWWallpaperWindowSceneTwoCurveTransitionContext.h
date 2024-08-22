// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWWALLPAPERWINDOWSCENETWOCURVETRANSITIONCONTEXT_H
#define SBWWALLPAPERWINDOWSCENETWOCURVETRANSITIONCONTEXT_H

@class UIApplicationSceneTransitionContext, BSAnimationSettings;



@interface SBWWallpaperWindowSceneTwoCurveTransitionContext : UIApplicationSceneTransitionContext

@property (copy, nonatomic) BSAnimationSettings *inAnimationSettings;
@property (copy, nonatomic) BSAnimationSettings *outAnimationSettings;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;


@end


#endif