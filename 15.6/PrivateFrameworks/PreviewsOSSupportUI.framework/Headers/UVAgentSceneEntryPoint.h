// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UVAGENTSCENEENTRYPOINT_H
#define UVAGENTSCENEENTRYPOINT_H

@class UIScene, NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>


@interface UVAgentSceneEntryPoint : NSObject <_UISceneComponentProviding>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithScene:(id)arg0 ;
-(void)_forceApplicationLaunchCompletion;


@end


#endif