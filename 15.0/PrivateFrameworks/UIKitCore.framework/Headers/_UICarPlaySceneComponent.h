// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICARPLAYSCENECOMPONENT_H
#define _UICARPLAYSCENECOMPONENT_H

@class NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "UIScene.h"
#import "UICarPlayApplicationSceneSettings.h"

@interface _UICarPlaySceneComponent : NSObject <_UISceneComponentProviding>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (retain, nonatomic) UICarPlayApplicationSceneSettings *carPlaySceneSettings; // ivar: _carPlaySceneSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableFiveRowKeyboards;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithScene:(id)arg0 ;


@end


#endif