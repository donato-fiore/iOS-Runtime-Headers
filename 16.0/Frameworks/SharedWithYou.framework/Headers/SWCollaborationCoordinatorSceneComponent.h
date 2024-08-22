// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWCOLLABORATIONCOORDINATORSCENECOMPONENT_H
#define SWCOLLABORATIONCOORDINATORSCENECOMPONENT_H

@class UIScene, NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>


@interface SWCollaborationCoordinatorSceneComponent : NSObject <_UISceneComponentProviding>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)_registerWithUIKit;
+(void)load;
-(id)_actionHandlersForScene:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;


@end


#endif