// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISYSTEMAPPEARANCEMANAGER_H
#define _UISYSTEMAPPEARANCEMANAGER_H

@class NSString, NSArray;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "UIScene.h"
#import "UIWindowScene.h"

@interface _UISystemAppearanceManager : NSObject <_UISceneComponentProviding>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL homeIndicatorAutoHidden; // ivar: _homeIndicatorAutoHidden
@property (readonly, nonatomic) NSArray *multitaskingDragExclusionRects; // ivar: _multitaskingDragExclusionRects
@property (readonly, nonatomic) NSUInteger screenEdgesDeferringSystemGestures; // ivar: _screenEdgesDeferringSystemGestures
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedInterfaceOrientations; // ivar: _supportedInterfaceOrientations
@property (readonly, nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (readonly, nonatomic) NSInteger whitePointAdaptivityStyle; // ivar: _whitePointAdaptivityStyle
@property (retain, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


-(id)initWithScene:(id)arg0 ;
-(void)_updateSupportedInterfaceOrientations;
-(void)updateHomeIndicatorAutoHidden;
-(void)updateMultitaskingDragExclusionRects;
-(void)updateScreenEdgesDeferringSystemGestures;
-(void)updateSupportedInterfaceOrientations;
-(void)updateUserInterfaceStyle;
-(void)updateWhitePointAdaptivityStyle;


@end


#endif