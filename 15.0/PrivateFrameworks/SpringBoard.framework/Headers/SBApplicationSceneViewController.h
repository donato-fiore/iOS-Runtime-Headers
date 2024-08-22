// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLICATIONSCENEVIEWCONTROLLER_H
#define SBAPPLICATIONSCENEVIEWCONTROLLER_H

@class UIView, NSString;
@protocol SBApplicationSceneViewControlling, SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;


#import "SBSceneViewController.h"
#import "SBAppStatusBarSettings.h"
#import "SBApplicationSceneHandle.h"
#import "SBApplicationSceneView.h"

@interface SBApplicationSceneViewController : SBSceneViewController <SBApplicationSceneViewControlling>



@property (readonly, nonatomic, getter=_isApplicationStatusBarHidden) BOOL _applicationStatusBarHidden; // ivar: __applicationStatusBarHidden
@property (weak, nonatomic) NSObject<SBApplicationSceneViewControllingStatusBarDelegate> *applicationSceneStatusBarDelegate; // ivar: _applicationSceneStatusBarDelegate
@property (readonly, nonatomic) NSInteger contentInterfaceOrientation;
@property (readonly, nonatomic) CGSize contentReferenceSize;
@property (retain, nonatomic) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayMode;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_overrideStatusBarSettings, setter=_setOverrideStatusBarSettings:) SBAppStatusBarSettings *overrideStatusBarSettings; // ivar: _overrideStatusBarSettings
@property (readonly, nonatomic) NSInteger overrideStatusBarStyle;
@property (retain, nonatomic) NSObject<SBScenePlaceholderContentContext> *placeholderContentContext;
@property (readonly, nonatomic) SBApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic, getter=_sceneView) SBApplicationSceneView *sceneView;
@property (readonly, nonatomic) CGFloat statusBarAlpha;
@property (readonly) Class superclass;


-(CGFloat)_applicationStatusBarAlpha;
-(id)initWithSceneHandle:(id)arg0 ;


@end


#endif