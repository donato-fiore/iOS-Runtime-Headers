// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCCONTROLLERMANAGER_H
#define _GCCONTROLLERMANAGER_H

@class NSMapTable, NSXPCConnection, NSThread, NSMutableArray, NSMutableDictionary, NSTimer, NSString;
@protocol _GCImplicitIPCObject, _GCIPCObjectRegistry, _GCIPCServiceRegistry, _GCIPCObjectMaterializationContext, GameControllerClientProtocol, _GCHIDEventSource, OS_dispatch_queue, GCRemoteDaemonProxy, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_GCHIDEventSubject.h"
#import "GCController.h"
#import "GCMicroGamepad.h"
#import "GCExtendedGamepad.h"
#import "GCKeyboardAndMouseManager.h"
#import "GCMouse.h"

@interface _GCControllerManager : NSObject <_GCImplicitIPCObject, _GCIPCObjectRegistry, _GCIPCServiceRegistry, _GCIPCObjectMaterializationContext, GameControllerClientProtocol, _GCHIDEventSource>

 {
    NSObject<OS_dispatch_queue> *_hidSystemClientQueue;
    os_unfair_lock_s _ipcRegistryLock;
    NSMapTable *_ipcObjectRegistry;
    *__IOHIDEventSystemClient _hidSystemClient;
    _GCHIDEventSubject *_hidEventSource;
    GCController *_currentController;
    GCMicroGamepad *_currentMicroGamepad;
    GCExtendedGamepad *_currentExtendedGamepad;
    NSXPCConnection *_connection;
    NSXPCConnection *_daemonConnection;
    NSObject<GCRemoteDaemonProxy> *_remote;
    NSThread *_hidInputThread;
    *__CFRunLoop _hidInputThreadRunLoop;
    *__CFRunLoopSource _hidThreadRunLoopSource;
    NSMutableArray *_hidThreadExecutionBlocks;
    *__IOHIDManager _hidManager;
    *IONotificationPort _usbNotify;
    unsigned int _usbAddedIterator;
    unsigned int _usbRemovedIterator;
    id *_hidEventObservation;
    BOOL _shouldKeepRunning;
    id *_requestConnectedHostsCallback;
    NSMutableDictionary *_controllersByUDID;
    NSMutableDictionary *_controllersByRegistryID;
    GCController *_firstMicroGamepad;
    NSTimer *_idleWatchTimer;
    BOOL _gameControllerActive;
    BOOL _isAppInBackground;
    NSInteger _currentMediaRemoteInputMode;
    GCKeyboardAndMouseManager *_keyboardAndMouseManager;
    GCController *__controller_genericBTRemote;
}


@property (readonly) NSObject<_GCIPCObjectRegistry> *IPCObjectRegistry;
@property (readonly) NSObject<_GCIPCServiceRegistry> *IPCServiceRegistry;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *controllersQueue; // ivar: _controllersQueue
@property (retain) GCController *currentController;
@property (retain) GCExtendedGamepad *currentExtendedGamepad;
@property (retain) GCMicroGamepad *currentMicroGamepad;
@property (retain) GCMouse *currentMouse;
@property (retain, nonatomic) NSXPCConnection *daemonConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) GCController *firstMicroGamepad;
@property (nonatomic) BOOL gameControllerActive;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSThread *hidInputThread;
@property (readonly, nonatomic) *__CFRunLoop hidInputThreadRunLoop;
@property (nonatomic) *__IOHIDManager hidManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *hidSystemPropertyQueue; // ivar: _hidSystemPropertyQueue
@property (readonly, nonatomic) NSMutableArray *hidThreadExecutionBlocks;
@property (readonly, nonatomic) *__CFRunLoopSource hidThreadRunLoopSource;
@property (readonly) NSObject<NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly, nonatomic) BOOL isAppInBackground;
@property (retain, nonatomic) NSObject<GCRemoteDaemonProxy> *remote;
@property (nonatomic) BOOL shouldMonitorBackgroundEvents; // ivar: _shouldMonitorBackgroundEvents
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)initialize;
-(BOOL)combineSiriRemoteHIDDevicesWithNewController:(id)arg0 existingController:(id)arg1 ;
-(BOOL)isExistingController:(id)arg0 ;
-(id)HIDDeviceMatchingAttributes;
-(id)IPCObjectWithIdentifier:(id)arg0 ;
-(id)_legacy_coalescedKeyboard;
-(id)_legacy_controllers;
-(id)_legacy_makeHIDEventSource:(struct __IOHIDEventSystemClient *)arg0 ;
-(id)_legacy_mice;
-(id)coalescedKeyboard;
-(id)controllers;
-(id)init;
-(id)makeHIDEventSource:(struct __IOHIDEventSystemClient *)arg0 ;
-(id)mice;
-(id)observeHIDEvents:(id)arg0 ;
// -(id)observeHIDEvents:(id)arg0 forService:(unk)arg1  ;
-(id)serviceClientForIPCService:(id)arg0 ;
-(int)connectedATVRemoteCount;
-(void)CBApplicationDidBecomeActive;
-(void)CBApplicationWillResignActive;
-(void)_legacy_addControllerWithServiceRef:(struct __IOHIDServiceClient *)arg0 ;
-(void)_legacy_dealloc;
-(void)_legacy_init;
-(void)_legacy_publishController:(id)arg0 ;
-(void)_legacy_removeControllerWithServiceRef:(struct __IOHIDServiceClient *)arg0 ;
-(void)_legacy_startHIDDeviceMonitor;
-(void)_legacy_startHIDEventMonitor;
-(void)_legacy_stopHIDDeviceMonitor;
-(void)_legacy_stopHIDEventMonitor;
-(void)_legacy_unpublishController:(id)arg0 ;
-(void)_legacy_updateControllerWithEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_queue_removeController:(id)arg0 registryID:(id)arg1 ;
-(void)addController:(id)arg0 ;
-(void)addControllerForAppStoreRemote:(id)arg0 ;
-(void)async_HIDBlock:(id)arg0 ;
-(void)controller:(id)arg0 setValue:(float)arg1 forElement:(int)arg2 ;
-(void)controllerWithUDID:(NSUInteger)arg0 setData:(id)arg1 ;
-(void)controllerWithUDID:(NSUInteger)arg0 setValue0:(float)arg1 setValue1:(float)arg2 setValue2:(float)arg3 setValue3:(float)arg4 forElement:(int)arg5 ;
-(void)controllerWithUDID:(NSUInteger)arg0 setValue:(float)arg1 forElement:(int)arg2 ;
-(void)dealloc;
-(void)enableKeyboardAndMouseSupport;
-(void)launchHIDInputThread;
-(void)microControllerWithDigitizerX:(float)arg0 withY:(float)arg1 withTimeStamp:(NSUInteger)arg2 touchDown:(BOOL)arg3 ;
-(void)microControllerWithUDID:(NSUInteger)arg0 setDigitizerX:(float)arg1 digitizerY:(float)arg2 withTimeStamp:(NSUInteger)arg3 touchDown:(BOOL)arg4 ;
-(void)onHIDDeviceAdded:(struct __IOHIDServiceClient *)arg0 ;
-(void)onHIDDeviceRemoved:(struct __IOHIDServiceClient *)arg0 ;
-(void)onScreenshotTriggeredWithController:(id)arg0 ;
-(void)onVideoRecordingToggledWithController:(id)arg0 ;
-(void)onVideoRecordingToggledWithController:(id)arg0 mode:(NSInteger)arg1 ;
-(void)open;
-(void)registerIPCObject:(id)arg0 ;
-(void)removeCoalescedControllerComponent:(id)arg0 ;
-(void)removeController:(id)arg0 ;
-(void)removeController:(id)arg0 registryID:(id)arg1 ;
-(void)setupHIDMonitor:(BOOL)arg0 ;
-(void)startIdleWatchTimer;
-(void)startVideoRecordingBuffering;
-(void)stopVideoRecordingBuffering;
-(void)storeController:(id)arg0 ;
-(void)teardownHIDMonitor:(BOOL)arg0 ;
-(void)threadHIDInputOffMain:(id)arg0 ;
-(void)threadHIDInputOnMain:(id)arg0 ;
-(void)updateCurrentControllerAndProfileForUnpublishedController:(id)arg0 ;
-(void)updateIdleTimer:(id)arg0 ;


@end


#endif