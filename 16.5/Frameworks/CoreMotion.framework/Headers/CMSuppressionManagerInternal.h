// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSUPPRESSIONMANAGERINTERNAL_H
#define CMSUPPRESSIONMANAGERINTERNAL_H

@class NSOperationQueue, _PMSmartPowerNap, DPCManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMSuppressionManagerInternal : NSObject {
    CMSuppressionEventStruct fCurrentSuppressionEvent;
    id *fSuppressionEventHandler;
    NSOperationQueue *fSuppressionEventQueue;
    NSObject<OS_dispatch_queue> *fInputQueue;
    CMSuppressionEventStruct fViewObstructedEvent;
    *Dispatcher fSuppressionEventDispatcher;
    CMSuppressionEventStruct fSmartPowerNapEvent;
    CMSuppressionEventStruct fDevicePresenceEvent;
    _PMSmartPowerNap *fSmartPowerNap;
    DPCManager *fDevicePresence;
    *void fConnection;
    NSObject<OS_dispatch_queue> *fConnectionQueue;
    BOOL fServiceEnabled;
    BOOL fViewObstructedDebugEnabled;
    id *fViewObstructedStateHandler;
    ViewObstructedState fViewObstructedState;
    *Dispatcher fViewObstructedStateDispatcher;
}




-(id)init;
-(void)dealloc;
-(void)teardownPrivate;


@end


#endif