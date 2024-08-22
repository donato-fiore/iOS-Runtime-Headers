// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDGLOBALCONFIGURATIONSERVICE_H
#define DNDGLOBALCONFIGURATIONSERVICE_H

@class NSHashTable, NSString;
@protocol DNDRemoteServiceConnectionEventListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDGlobalConfigurationService : NSObject <DNDRemoteServiceConnectionEventListener>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_listeners;
    BOOL _registeredForUpdates;
}


@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(BOOL)_queue_registerForUpdatesIfRequired;
-(BOOL)getPreventAutoReplyReturningError:(*id)arg0 ;
-(BOOL)isAutoReplyPrevented;
-(BOOL)isCloudSyncActive;
-(BOOL)setCloudSyncPreferenceEnabled:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPairSyncPreferenceEnabled:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPhoneCallBypassSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPreventAutoReply:(BOOL)arg0 error:(*id)arg1 ;
-(NSUInteger)getCloudSyncStateReturningError:(*id)arg0 ;
-(NSUInteger)getPairSyncStateReturningError:(*id)arg0 ;
-(id)_initWithClientIdentifier:(id)arg0 ;
-(id)getPhoneCallBypassSettingsReturningError:(*id)arg0 ;
-(id)getStateDumpReturningError:(*id)arg0 ;
-(void)addListener:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)didChangeFocusStatusSharingSettingForApplicationIdentifier:(id)arg0 ;
-(void)remoteService:(id)arg0 didReceiveUpdatedPairSyncState:(NSUInteger)arg1 ;
-(void)remoteService:(id)arg0 didReceiveUpdatedPhoneCallBypassSettings:(id)arg1 ;
-(void)remoteService:(id)arg0 didReceiveUpdatedPreventAutoReplySetting:(BOOL)arg1 ;
-(void)removeListener:(id)arg0 ;


@end


#endif