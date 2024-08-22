// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDMODESELECTIONSERVICE_H
#define DNDMODESELECTIONSERVICE_H

@class NSHashTable, NSString;
@protocol DNDRemoteServiceConnectionEventListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DNDModeConfigurationService.h"

@interface DNDModeSelectionService : NSObject <DNDRemoteServiceConnectionEventListener>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_listeners;
    BOOL _registeredForUpdates;
    DNDModeConfigurationService *_modeConfigurationService;
}


@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(BOOL)_queue_registerForUpdatesIfRequired;
-(BOOL)activateModeWithDetails:(id)arg0 error:(*id)arg1 ;
-(BOOL)invalidateModeAssertionWithUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)promotePlaceholderWithModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)_initWithClientIdentifier:(id)arg0 ;
-(id)activeModeAssertionWithError:(*id)arg0 ;
-(id)allModesWithError:(*id)arg0 ;
-(id)availableModesWithError:(*id)arg0 ;
-(id)modeConfigurationForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)promotedPlaceholderWithModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)addListener:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)remoteService:(id)arg0 didReceiveUpdatedActiveModeAssertion:(id)arg1 stateUpdate:(id)arg2 ;
-(void)remoteService:(id)arg0 didReceiveUpdatedAvailableModes:(id)arg1 ;
-(void)remoteService:(id)arg0 didReceiveUpdatedModes:(id)arg1 ;
-(void)removeListener:(id)arg0 ;


@end


#endif