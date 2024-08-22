// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCSYNTHETICDEVICEMANAGER_H
#define GCSYNTHETICDEVICEMANAGER_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_GCControllerManagerServer.h"

@interface GCSyntheticDeviceManager : NSObject {
    _GCControllerManagerServer *_server;
    NSObject<OS_dispatch_queue> *_queue;
    *IONotificationPort _notifyPort;
    unsigned int _service;
    unsigned int _connect;
    NSUInteger _kernelClientGeneration;
    *__CFDictionary _3pSyntheticControllerMatchingCriteria;
    unsigned int _3pSyntheticControllerPublishedNotification;
    unsigned int _3pSyntheticControllerTerminatedNotification;
    NSUInteger _3pSyntheticControllerCount;
    NSMapTable *_deviceSyntheticDescriptions;
}




-(id)init;
-(id)initWithServer:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif