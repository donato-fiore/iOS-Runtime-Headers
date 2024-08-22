// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASOOVERLAYMANAGER_H
#define ASOOVERLAYMANAGER_H

@class UIScene, NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "ASOOverlayViewController.h"
#import "ASOOverlayWindow.h"

@interface ASOOverlayManager : NSObject <_UISceneComponentProviding>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) ASOOverlayViewController *viewController; // ivar: _viewController
@property (readonly, retain, nonatomic) ASOOverlayWindow *window; // ivar: _window


-(id)initWithScene:(id)arg0 ;
-(id)initWithWindowScene:(id)arg0 ;
-(id)makeViewControllerIfNeeded;
-(void)didFinishDismissingOverlay;
-(void)dismissOverlay;
-(void)presentOverlay:(id)arg0 ;
-(void)willStartPresentingOverlay;


@end


#endif