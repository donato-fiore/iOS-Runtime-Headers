// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMOUSEPOINTERMANAGER_H
#define SBMOUSEPOINTERMANAGER_H

@class PSPointerClientController, BKSMousePointerService, PSPointerSystemClientController, NSHashTable, NSMapTable, NSString;
@protocol BKSMousePointerDeviceObserver, PSPointerSystemClientControllerDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBMousePointerManager : NSObject <BKSMousePointerDeviceObserver, PSPointerSystemClientControllerDelegate>

 {
    PSPointerClientController *_pointerClientController;
    BKSMousePointerService *_mousePointerService;
    NSUInteger _connectedPointingDevicesCount;
    PSPointerSystemClientController *_systemClientController;
    NSHashTable *_observers;
    id<BSInvalidatable> *_mousePointerDeviceObserverToken;
    id<BSInvalidatable> *_serviceKeepAliveAssertion;
    NSMapTable *_springBoardScenesToPointerAssertions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isHardwarePointingDeviceAttached;
-(id)init;
-(id)requestPointerActivationForScene:(id)arg0 ;
-(id)setSystemPointerInteractionContextID:(unsigned int)arg0 displayWithHardwareIdentifier:(id)arg1 ;
-(void)_handleAssistiveTouchEnabledDidChangeNotification;
-(void)_notifyObserversPointingDeviceBecameAvailable:(BOOL)arg0 ;
-(void)_setPointerUIDWithConnectedDeviceCount:(NSUInteger)arg0 ;
-(void)_updatePointerAssertionsAndScenes;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)mousePointerDevicesDidChange:(id)arg0 ;
-(void)pointerClientController:(id)arg0 didAddScene:(id)arg1 ;
-(void)pointerClientController:(id)arg0 sceneDidActivate:(id)arg1 ;
-(void)pointerClientController:(id)arg0 sceneWillDeactivate:(id)arg1 ;
-(void)pointerClientController:(id)arg0 willRemoveScene:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif