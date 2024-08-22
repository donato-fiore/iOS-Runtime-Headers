// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLSHAREABLECONTENTSCENECOMPONENT_H
#define SLSHAREABLECONTENTSCENECOMPONENT_H

@class UIScene, NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>


@interface SLShareableContentSceneComponent : NSObject <_UISceneComponentProviding>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_actionHandlersForScene:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;


@end


#endif