// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMOUSEPOINTERMANAGER_H
#define SBMOUSEPOINTERMANAGER_H

@class PSPointerClientController, BKSMousePointerService, NSHashTable, NSString;
@protocol BKSMousePointerDeviceObserver, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBMousePointerManager : NSObject <BKSMousePointerDeviceObserver>

 {
    PSPointerClientController *_pointerClientController;
    BKSMousePointerService *_mousePointerService;
    id<BSInvalidatable> *_mousePointerDeviceObserverToken;
    NSUInteger _connectedPointingDevicesCount;
    id<BSInvalidatable> *_serviceKeepAliveAssertion;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemCursorInteractionContextID; // ivar: _systemCursorInteractionContextID


-(BOOL)isHardwarePointingDeviceAttached;
-(id)init;
-(void)_handleAssistiveTouchEnabledDidChangeNotification;
-(void)_notifyObserversPointingDeviceBecameAvailable:(BOOL)arg0 ;
-(void)_setPointerUIDWithConnectedDeviceCount:(NSUInteger)arg0 ;
-(void)_updateKeepAliveAssertion;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)mousePointerDevicesDidChange:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif