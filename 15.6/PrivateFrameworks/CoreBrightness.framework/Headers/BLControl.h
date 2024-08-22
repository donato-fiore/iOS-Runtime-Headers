// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLCONTROL_H
#define BLCONTROL_H

@class NSMutableDictionary, NSMutableArray, HIDManager;
@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "NightModeControl.h"

@interface BLControl : NSObject {
    *__IOHIDEventSystemClient _hidSystemClient;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _ignoreBrightnessKey;
    BOOL _overrideIgnoreBrightness;
    BOOL _ignoreALSEvents;
    id *_callback;
    *void _callbackContext;
    BOOL _monitorALSOnly;
    BOOL _useMultiCurves;
    int _ecoModeNotificationToken;
    id *_ecoModeNotificationHandler;
    int _ecoModePreferencesUpdateNotificationToken;
    id *_ecoModePreferencesUpdateNotificationHandler;
    NSMutableDictionary *_clientDisplayMap;
    NSMutableArray *_displayContainers;
    NSMutableArray *_hidServiceClients;
    NSObject<OS_os_log> *_logHandle;
    NSUInteger _builtInDisplayCount;
    NightModeControl *_nightModeControl;
    NSMutableDictionary *_keyboardContainers;
    HIDManager *_keyboardBacklightHIDManager;
    NSUInteger _userActiveNotificationHandle;
}




-(BOOL)findBacklight;
-(BOOL)findDisplays;
-(BOOL)initKeyboardBacklightHIDManager;
-(BOOL)setBLControlPropertyWithKey:(id)arg0 property:(id)arg1 ;
-(BOOL)setPropertyInternalWithKey:(id)arg0 property:(id)arg1 client:(id)arg2 ;
-(BOOL)setPropertyWithKey:(id)arg0 property:(id)arg1 client:(id)arg2 ;
-(BOOL)start;
-(BOOL)startHIDSystemClient;
-(BOOL)useSyncBrightnessTransactionForDisplay:(id)arg0 ;
-(id)copyBLControlPropertyWithkey:(id)arg0 ;
-(id)copyDisplayInfo;
-(id)copyDisplayList;
-(id)copyPropertyInternalWithKey:(id)arg0 forClient:(id)arg1 ;
-(id)copyPropertyWithKey:(id)arg0 client:(id)arg1 ;
-(id)copyStatusInfo;
-(id)init;
-(id)newDevicePariMatchingDictionaryWithPage:(unsigned int)arg0 andUsage:(unsigned int)arg1 ;
-(void)addDisplayContainer:(id)arg0 ;
-(void)cancelHIDSystemClient;
-(void)dealloc;
-(void)handleCADisplay:(id)arg0 ;
-(void)handleCADisplayArrival:(id)arg0 ;
-(void)handleCADisplayRemoval:(id)arg0 ;
-(void)handleCAWindowServerDisplay:(id)arg0 ;
-(void)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(void)handleNotificationInternalForKey:(id)arg0 withValue:(id)arg1 ;
-(void)handleUserIsActiveStateChange:(BOOL)arg0 ;
-(void)hidServiceArrival:(struct __IOHIDServiceClient *)arg0 ;
-(void)keyboardBacklightHIDDeviceArrived:(id)arg0 ;
-(void)keyboardBacklightHIDDeviceRemoved:(id)arg0 ;
-(void)keyboardBacklightHIDDeviceRemovedInternal:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerNotificationBlock:(id)arg0 ;
-(void)removeDisplayContainer:(id)arg0 ;
-(void)removeHIDService:(struct __IOHIDServiceClient *)arg0 ;
-(void)sendNotificationFor:(id)arg0 withValue:(id)arg1 ;
-(void)sendNotificationWithKeyboardIDs;
-(void)stop;
-(void)stopDisplayLookup;
-(void)waitForALSArrival;


@end


#endif