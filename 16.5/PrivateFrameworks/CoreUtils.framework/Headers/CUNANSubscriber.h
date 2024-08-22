// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUNANSUBSCRIBER_H
#define CUNANSUBSCRIBER_H

@class NSMutableDictionary, WiFiAwareSubscriber, NSString, NSArray;
@protocol WiFiAwareSubscriberDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUNANSubscriber : NSObject <WiFiAwareSubscriberDelegate>

 {
    id *_activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    _opaque_pthread_mutex_t _mutex;
    BOOL _startedCalled;
    *LogCategory _ucat;
    NSMutableDictionary *_wfaEndpoints;
    WiFiAwareSubscriber *_wfaSubscriber;
}


@property (nonatomic) unsigned int changeFlags; // ivar: _changeFlags
@property (nonatomic) unsigned int controlFlags; // ivar: _controlFlags
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *discoveredEndpoints;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *endpointChangedHandler; // ivar: _endpointChangedHandler
@property (copy, nonatomic) id *endpointFoundHandler; // ivar: _endpointFoundHandler
@property (copy, nonatomic) id *endpointLostHandler; // ivar: _endpointLostHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) id *receiveHandler; // ivar: _receiveHandler
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


-(id)descriptionWithLevel:(int)arg0 ;
-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_lostAllEndpoints;
-(void)_subscriber:(id)arg0 lostDiscoveryResultForPublishID:(unsigned char)arg1 address:(id)arg2 ;
-(void)_subscriber:(id)arg0 receivedDiscoveyResult:(id)arg1 ;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)sendMessageData:(id)arg0 endpoint:(id)arg1 completionHandler:(id)arg2 ;
-(void)subscriber:(id)arg0 failedToStartWithError:(NSInteger)arg1 ;
-(void)subscriber:(id)arg0 lostDiscoveryResultForPublishID:(unsigned char)arg1 address:(id)arg2 ;
-(void)subscriber:(id)arg0 receivedDiscoveyResult:(id)arg1 ;
-(void)subscriber:(id)arg0 receivedMessage:(id)arg1 fromPublishID:(unsigned char)arg2 address:(id)arg3 ;
-(void)subscriber:(id)arg0 terminatedWithReason:(NSInteger)arg1 ;
-(void)subscriberStarted:(id)arg0 ;


@end


#endif