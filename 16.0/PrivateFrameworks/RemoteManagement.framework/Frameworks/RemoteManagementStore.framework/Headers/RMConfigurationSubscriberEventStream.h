// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMCONFIGURATIONSUBSCRIBEREVENTSTREAM_H
#define RMCONFIGURATIONSUBSCRIBEREVENTSTREAM_H

@class NSArray;


#import "RMConfigurationSubscriberClient.h"

@interface RMConfigurationSubscriberEventStream : RMConfigurationSubscriberClient

@property (readonly, nonatomic) NSArray *configurationTypes; // ivar: _configurationTypes
@property (retain, nonatomic) id *eventStreamObserver; // ivar: _eventStreamObserver
@property (readonly, nonatomic) NSInteger scope; // ivar: _scope


+(id)_configuredConfigurationTypesWithScope:(NSInteger)arg0 ;
+(id)_eventDescriptorByNameForEventStreamNamed:(id)arg0 ;
+(id)newConfigurationSubscriberEventStreamWithScope:(NSInteger)arg0 applicators:(id)arg1 publisherClass:(Class)arg2 ;
+(void)_setupEventHandlerWithScope:(NSInteger)arg0 ;
-(id)initWithScope:(NSInteger)arg0 ;
-(void)_fetchConfigurations:(id)arg0 ;
-(void)_handleEvent:(id)arg0 ;
-(void)_setupEventHandler;
-(void)dealloc;
-(void)start;


@end


#endif