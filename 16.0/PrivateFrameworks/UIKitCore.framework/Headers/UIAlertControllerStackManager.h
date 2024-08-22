// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIALERTCONTROLLERSTACKMANAGER_H
#define UIALERTCONTROLLERSTACKMANAGER_H

@class NSMutableArray, NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "UIScene.h"

@interface UIAlertControllerStackManager : NSObject <_UISceneComponentProviding>

 {
    NSMutableArray *_alertControllerStack;
    NSMutableArray *_hiddenAlertControllers;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_alertControllerShouldBeTrackedInStack:(id)arg0 ;
-(NSInteger)_alertControllerStackCount;
-(id)_topAlertControllerInStack;
-(id)initWithScene:(id)arg0 ;
-(void)_addAlertControllerToStack:(id)arg0 ;
-(void)_alertControllerDidAppear:(id)arg0 ;
-(void)_alertControllerDidDisappear:(id)arg0 ;
-(void)_alertControllerWillAppear:(id)arg0 ;
-(void)_alertControllerWillDisappear:(id)arg0 ;
-(void)_didHideAlertController:(id)arg0 ;
-(void)_hideStackedAlertControllers;
-(void)_removeAlertControllerFromStack:(id)arg0 ;
-(void)_showHiddenStackedAlertControllers;
-(void)_willHideAlertController:(id)arg0 ;
-(void)_willShowAlertController:(id)arg0 ;


@end


#endif