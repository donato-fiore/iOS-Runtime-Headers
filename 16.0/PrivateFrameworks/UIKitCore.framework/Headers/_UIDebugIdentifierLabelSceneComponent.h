// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDEBUGIDENTIFIERLABELSCENECOMPONENT_H
#define _UIDEBUGIDENTIFIERLABELSCENECOMPONENT_H

@class NSString;
@protocol _UISceneComponentProviding;

#import <Foundation/Foundation.h>

#import "_UIDebugIdentifierWindow.h"
#import "UIScene.h"

@interface _UIDebugIdentifierLabelSceneComponent : NSObject <_UISceneComponentProviding>

 {
    _UIDebugIdentifierWindow *_debugWindow;
}


@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isEnabled;
-(id)initWithScene:(id)arg0 ;
-(void)_scene:(id)arg0 willTransitionToActivationState:(NSInteger)arg1 withReasonsMask:(NSUInteger)arg2 ;


@end


#endif