// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBANNERMANAGER_H
#define _UIBANNERMANAGER_H

@class NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "UIScene.h"
#import "_UIBannerContainerView.h"
#import "_UIBannerWindow.h"
#import "UIWindowScene.h"

@interface _UIBannerManager : NSObject <_UISceneComponentProviding>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (retain, nonatomic) _UIBannerContainerView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIBannerWindow *window; // ivar: _window
@property (retain, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


-(id)bannerWithContent:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(void)_createWindowIfNeeded;


@end


#endif