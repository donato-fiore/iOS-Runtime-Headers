// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFINDNAVIGATORSCENECOMPONENT_H
#define _UIFINDNAVIGATORSCENECOMPONENT_H

@class NSString;
@protocol _UIFindNavigatorViewControllerDelegate, _UIViewSubtreeMonitor, _UISceneComponentProviding, _UIFindNavigatorHosting;

#import <Foundation/Foundation.h>

#import "UIScene.h"
#import "_UIFindNavigatorResponder.h"
#import "_UIFindNavigatorViewController.h"

@interface _UIFindNavigatorSceneComponent : NSObject <_UIFindNavigatorViewControllerDelegate, _UIViewSubtreeMonitor, _UISceneComponentProviding, _UIFindNavigatorHosting>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIFindNavigatorResponder *findNavigatorResponder; // ivar: _findNavigatorResponder
@property (retain, nonatomic) _UIFindNavigatorViewController *findNavigatorViewController; // ivar: _findNavigatorViewController
@property (readonly, nonatomic, getter=isFindNavigatorVisible) BOOL findNavigatorVisible;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sceneComponentForView:(id)arg0 ;
-(BOOL)_monitorsView:(id)arg0 ;
-(id)_searchableView;
-(id)initWithScene:(id)arg0 ;
-(void)_monitoredView:(id)arg0 didMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)_monitoredView:(id)arg0 willMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)dismissFindNavigator;
-(void)findNavigatorViewControllerDidRequestDismissal:(id)arg0 ;
-(void)findNavigatorViewControllerViewDidChangeIntrinsicContentSize:(id)arg0 ;
-(void)presentFindNavigatorWithFindSession:(id)arg0 showingReplace:(BOOL)arg1 ;


@end


#endif