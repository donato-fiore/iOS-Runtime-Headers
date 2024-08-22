// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISYSTEMAPPEARANCEMANAGER_H
#define _UISYSTEMAPPEARANCEMANAGER_H

@class NSString, NSArray;
@protocol _UISceneComponentProviding, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "UIScene.h"
#import "UIWindow.h"
#import "UIWindowScene.h"

@interface _UISystemAppearanceManager : NSObject <_UISceneComponentProviding>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL homeIndicatorAutoHidden; // ivar: _homeIndicatorAutoHidden
@property (readonly, nonatomic) NSArray *multitaskingDragExclusionRects; // ivar: _multitaskingDragExclusionRects
@property (readonly, nonatomic) NSInteger preferredInterfaceOrientation; // ivar: _preferredInterfaceOrientation
@property (weak, nonatomic) UIWindow *previousWindowDrivingSystemAppearance; // ivar: _previousWindowDrivingSystemAppearance
@property (readonly, nonatomic) NSUInteger screenEdgesDeferringSystemGestures; // ivar: _screenEdgesDeferringSystemGestures
@property (retain, nonatomic) NSObject<BSInvalidatable> *stateCaptureToken; // ivar: _stateCaptureToken
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedInterfaceOrientations; // ivar: _supportedInterfaceOrientations
@property (readonly, nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (readonly, nonatomic) NSInteger whitePointAdaptivityStyle; // ivar: _whitePointAdaptivityStyle
@property (retain, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


-(id)_findWindowDrivingSystemAppearance;
-(id)initWithScene:(id)arg0 ;
-(void)_handleWindowVisibilityNotification:(id)arg0 ;
-(void)_logOrientationPreferencesChangeWithOldSupportedOrientations:(NSUInteger)arg0 newSupportedOrientations:(NSUInteger)arg1 oldPreferredOrientation:(NSInteger)arg2 newPreferredOrientation:(NSInteger)arg3 animationSettings:(id)arg4 fenced:(BOOL)arg5 ;
-(void)_windowDrivingSystemAppearanceDidChange:(id)arg0 ;
-(void)dealloc;
-(void)updateHomeIndicatorAutoHidden;
-(void)updateMultitaskingDragExclusionRects;
-(void)updateScreenEdgesDeferringSystemGestures;
-(void)updateUserInterfaceStyle;
-(void)updateWhitePointAdaptivityStyle;
-(void)window:(id)arg0 didUpdateSupportedOrientations:(NSUInteger)arg1 preferredOrientation:(NSInteger)arg2 prefersAnimation:(BOOL)arg3 ;


@end


#endif