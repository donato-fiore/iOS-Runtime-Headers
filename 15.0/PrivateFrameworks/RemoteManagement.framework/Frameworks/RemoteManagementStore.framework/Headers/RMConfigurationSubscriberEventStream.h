// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMCONFIGURATIONSUBSCRIBEREVENTSTREAM_H
#define RMCONFIGURATIONSUBSCRIBEREVENTSTREAM_H

@class NSArray;
@protocol RMConfigurationSubscriberEventStreamDelegate;

#import <Foundation/Foundation.h>

#import "RMConfigurationSubscriberClient.h"

@interface RMConfigurationSubscriberEventStream : RMConfigurationSubscriberClient {
    NSObject *_delegationLock;
}


@property (readonly, nonatomic) NSArray *configurationTypes; // ivar: _configurationTypes
@property (weak, nonatomic) NSObject<RMConfigurationSubscriberEventStreamDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) id *eventStreamObserver; // ivar: _eventStreamObserver


+(id)_eventDescriptorByNameForEventStreamNamed:(id)arg0 ;
+(id)configuredConfigurationTypes;
+(void)_setupEventHandler;
-(id)init;
-(void)_delegateDidFailToFetchConfigurationsWithTypes:(id)arg0 error:(id)arg1 ;
-(void)_delegateDidFetchConfigurationsByType:(id)arg0 ;
-(void)_fetchConfigurationsAndNotifyDelegateIfNeeded:(id)arg0 ;
-(void)_handleEvent:(id)arg0 ;
-(void)_setupEventHandler;
-(void)dealloc;
-(void)start;


@end


#endif