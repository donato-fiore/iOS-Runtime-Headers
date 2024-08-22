// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCENEEVENTREGISTRY_H
#define _UISCENEEVENTREGISTRY_H


#import <Foundation/Foundation.h>

#import "UIMoveEvent.h"
#import "UITouchesEvent.h"
#import "UIPressesEvent.h"
#import "UIWheelEvent.h"
#import "_UIGameControllerEvent.h"
#import "UIPhysicalKeyboardEvent.h"
#import "UIPencilEvent.h"
#import "UIScrollEvent.h"
#import "UIHoverEvent.h"
#import "UITransformEvent.h"

@interface _UISceneEventRegistry : NSObject {
    UIMoveEvent *_moveEvent;
    UITouchesEvent *_touchesEvent;
    UIPressesEvent *_pressesEvent;
    UIWheelEvent *_wheelEvent;
    _UIGameControllerEvent *_gameControllerEvent;
    UIPhysicalKeyboardEvent *_physicalKeyboardEvent;
    UIPencilEvent *_pencilEvent;
    UIScrollEvent *_scrollEvent;
    UIHoverEvent *_hoverEvent;
    UITransformEvent *_transformEvent;
}






@end


#endif