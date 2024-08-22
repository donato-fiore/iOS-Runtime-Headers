// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDRAGEVENTSAMPLE_H
#define _UIDRAGEVENTSAMPLE_H


#import <Foundation/Foundation.h>

#import "UIWindow.h"

@interface _UIDragEventSample : NSObject

@property (nonatomic) BOOL hasBeenDelivered; // ivar: _hasBeenDelivered
@property (readonly, nonatomic) BOOL isApplicationEnter; // ivar: _isApplicationEnter
@property (readonly, nonatomic) BOOL isApplicationExit; // ivar: _isApplicationExit
@property (readonly, nonatomic) BOOL isApplicationWithin; // ivar: _isApplicationWithin
@property (readonly, nonatomic) BOOL isDragEnd; // ivar: _isDragEnd
@property (readonly, nonatomic) BOOL isPolicyDriven; // ivar: _isPolicyDriven
@property (readonly, nonatomic) CAPoint3D locationInWindow; // ivar: _locationInWindow
@property (readonly, nonatomic) CAPoint3D sceneLocation; // ivar: _sceneLocation
@property (readonly, nonatomic) UIWindow *window; // ivar: _window
@property (readonly, nonatomic) unsigned int windowServerHitTestContextID; // ivar: _windowServerHitTestContextID


+(id)sampleFromHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(id)description;
-(id)hitTestWithEvent:(id)arg0 ;


@end


#endif