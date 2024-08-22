// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CWFCLIENT_H
#define CWFCLIENT_H

@class NSMutableDictionary, NSXPCConnection;
@protocol CWFXPCEventProxyDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CWFClient : NSObject <CWFXPCEventProxyDelegate>

 {
    NSObject<OS_dispatch_queue> *_mutex;
    NSMutableDictionary *_mutableEventIDMap;
    NSMutableDictionary *_mutableActivityMap;
    NSMutableDictionary *_mutableEventCallbackMap;
}


@property (readonly) NSXPCConnection *XPCConnection; // ivar: _XPCConnection
@property BOOL invalidated; // ivar: _invalidated
@property (copy) id *invalidationHandler;
@property (readonly) NSInteger serviceType; // ivar: _serviceType
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;


-(BOOL)beginActivity:(id)arg0 requestParameters:(id)arg1 error:(*id)arg2 ;
-(BOOL)startMonitoringEvent:(id)arg0 requestParameters:(id)arg1 error:(*id)arg2 ;
-(id)eventHandlerWithEventID:(SEL)arg0 ;
-(id)init;
-(id)initWithServiceType:(NSInteger)arg0 ;
-(void)__beginActivity:(id)arg0 requestParameters:(id)arg1 reply:(id)arg2 ;
-(void)__startMonitoringEvent:(id)arg0 requestParameters:(id)arg1 reply:(id)arg2 ;
-(void)clearAllEventHandlers;
-(void)dealloc;
-(void)endActivity:(id)arg0 requestParameters:(id)arg1 ;
-(void)endAllActivities:(id)arg0 ;
-(void)invalidate;
-(void)proxy:(id)arg0 receivedEvent:(id)arg1 ;
-(void)resume;
// -(void)setEventHandler:(id)arg0 eventID:(unk)arg1  ;
-(void)stopMonitoringAllEvents:(id)arg0 ;
-(void)stopMonitoringEvent:(id)arg0 requestParameters:(id)arg1 ;
-(void)suspend;


@end


#endif