// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSETTINGSSERVICE_H
#define DNDSETTINGSSERVICE_H

@class NSHashTable, NSString;
@protocol DNDRemoteServiceConnectionEventListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DNDModeConfigurationService.h"
#import "DNDGlobalConfigurationService.h"

@interface DNDSettingsService : NSObject <DNDRemoteServiceConnectionEventListener>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_settingsUpdateListeners;
    BOOL _registeredForUpdates;
    DNDModeConfigurationService *_modeConfigurationService;
    DNDGlobalConfigurationService *_globalConfigurationService;
}


@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(BOOL)_queue_registerForSettingsUpdatesIfRequired;
-(BOOL)addSettingsUpdateListener:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeSettingsUpdateListener:(id)arg0 error:(*id)arg1 ;
-(BOOL)setBehaviorSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)setBehaviorSettings:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)setConfiguration:(id)arg0 forModeIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)setPhoneCallBypassSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPhoneCallBypassSettings:(id)arg0 returningError:(*id)arg1 ;
-(BOOL)setScheduleSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)setScheduleSettings:(id)arg0 returningError:(*id)arg1 ;
-(id)_initWithClientIdentifier:(id)arg0 ;
-(id)behaviorSettingsReturningError:(*id)arg0 ;
-(id)configurationForModeIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)phoneCallBypassSettingsReturningError:(*id)arg0 ;
-(id)scheduleSettingsReturningError:(*id)arg0 ;
-(void)addSettingsUpdateListener:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)remoteService:(id)arg0 didReceiveUpdatedBehaviorSettings:(id)arg1 ;
-(void)remoteService:(id)arg0 didReceiveUpdatedPhoneCallBypassSettings:(id)arg1 ;
-(void)remoteService:(id)arg0 didReceiveUpdatedScheduleSettings:(id)arg1 ;
-(void)removeSettingsUpdateListener:(id)arg0 ;


@end


#endif