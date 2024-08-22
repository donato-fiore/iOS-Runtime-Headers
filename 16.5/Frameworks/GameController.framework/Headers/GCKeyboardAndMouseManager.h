// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCKEYBOARDANDMOUSEMANAGER_H
#define GCKEYBOARDANDMOUSEMANAGER_H

@class NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GCMouse.h"
#import "GCKeyboardAndMouseEmulatedController.h"
#import "GCKeyboard.h"

@interface GCKeyboardAndMouseManager : NSObject {
    NSObject<OS_dispatch_queue> *_devicesQueue;
    NSMutableDictionary *_devicesByRegistryID;
    GCMouse *_currentMouse;
    GCKeyboardAndMouseEmulatedController *_emulatedController;
    NSSet *_keyboardHIDServices;
}


@property (readonly) GCKeyboard *coalescedKeyboard; // ivar: _coalescedKeyboard
@property (retain) GCMouse *currentMouse;
@property int emulatedControllerMapping; // ivar: _emulatedControllerMapping


-(BOOL)addDeviceWithServiceRef:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)mice;
-(void)_onqueue_refreshKeyboards;
-(void)_queue_removeDevice:(id)arg0 registryID:(id)arg1 ;
-(void)addMouse:(id)arg0 ;
-(void)ensureEmulatedControllerWithDevice:(id)arg0 added:(BOOL)arg1 ;
-(void)handleKeyboardEventAsFrontmostApp:(id)arg0 ;
-(void)handleMouseEventAsFrontmostApp:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)publishDevice:(id)arg0 withNotificationName:(id)arg1 ;
-(void)removeDevice:(id)arg0 registryID:(id)arg1 ;
-(void)removeDeviceWithServiceRef:(struct __IOHIDServiceClient *)arg0 ;
-(void)setEmulatedControllerEnabled:(int)arg0 ;
-(void)storeDevice:(id)arg0 ;
-(void)unpublishDevice:(id)arg0 withNotificationName:(id)arg1 ;
-(void)updateCurrentDevice:(id)arg0 ;
-(void)updateCurrentDeviceAfterDisconnecting:(id)arg0 ;
-(void)updateCurrentMouseAfterDisconnecting:(id)arg0 ;


@end


#endif