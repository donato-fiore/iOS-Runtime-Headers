// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRCOMPANIONLINKCLIENT_H
#define MRCOMPANIONLINKCLIENT_H

@class NSMutableSet, NSMutableArray, NSArray, RPCompanionLinkClient, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MRCompanionLinkClient : NSObject {
    NSMutableSet *_pendingRegisteredEvents;
    NSMutableSet *_registeredEvents;
    NSMutableArray *_pendingEvents;
    NSMutableSet *_pendingRegisteredRequests;
    NSMutableSet *_registeredRequests;
    NSMutableArray *_pendingRequests;
}


@property (readonly, nonatomic) NSArray *companionLinkDevices;
@property (retain, nonatomic) RPCompanionLinkClient *connection; // ivar: _connection
@property (retain, nonatomic) NSMutableDictionary *eventCallbacks; // ivar: _eventCallbacks
@property (retain, nonatomic) NSMutableDictionary *requestCallbacks; // ivar: _requestCallbacks


+(id)sharedCompanionLinkClient;
+(id)sharedIDSCompanionLinkClient;
+(void)rapportCompanionLinkClient:(id)arg0 ;
-(id)_resolveEventID:(id)arg0 ;
-(id)deviceUIDForRapportUID:(id)arg0 ;
-(id)initWithOptions:(int)arg0 ;
-(id)nameForUID:(id)arg0 ;
-(id)rapportUIDForDeviceUID:(id)arg0 ;
-(id)registerEvent:(id)arg0 callback:(id)arg1 ;
-(id)registerRequest:(id)arg0 callback:(id)arg1 ;
-(void)_enqueueEvent:(id)arg0 userInfo:(id)arg1 destination:(id)arg2 uid:(id)arg3 ;
-(void)_enqueueRequest:(id)arg0 userInfo:(id)arg1 destination:(id)arg2 uid:(id)arg3 date:(id)arg4 response:(id)arg5 ;
-(void)_handleEventID:(id)arg0 event:(id)arg1 options:(id)arg2 ;
-(void)_handleRequestID:(id)arg0 request:(id)arg1 options:(id)arg2 response:(id)arg3 ;
-(void)_registerEvent:(id)arg0 ;
-(void)_registerRequest:(id)arg0 ;
-(void)_sendEvent:(id)arg0 userInfo:(id)arg1 destination:(id)arg2 uid:(id)arg3 ;
-(void)_sendRequest:(id)arg0 userInfo:(id)arg1 destination:(id)arg2 uid:(id)arg3 date:(id)arg4 response:(id)arg5 ;
-(void)removeCallback:(id)arg0 ;
-(void)sendEvent:(id)arg0 destination:(id)arg1 userInfo:(id)arg2 ;
-(void)sendEvent:(id)arg0 toDevicesOfHomeUser:(id)arg1 userInfo:(id)arg2 ;
-(void)sendEventToCompanion:(id)arg0 userInfo:(id)arg1 ;
-(void)sendEventToHome:(id)arg0 userInfo:(id)arg1 ;
-(void)sendRequest:(id)arg0 destination:(id)arg1 userInfo:(id)arg2 timeout:(CGFloat)arg3 response:(id)arg4 ;


@end


#endif