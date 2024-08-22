// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSRAPPORTDEVICE_H
#define DSRAPPORTDEVICE_H

@class RPCompanionLinkClient, NSMutableArray, NSString, RPCompanionLinkDevice;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DSRapportDevice : NSObject {
    RPCompanionLinkClient *_sessionClient;
    RPCompanionLinkClient *_screenOffDiscoveryClient;
    BOOL _isTryingForceDiscovery;
    BOOL _isSessionInForceL2CAP;
    NSObject<OS_dispatch_source> *_discoveryExitTimer;
    NSObject<OS_dispatch_source> *_responseTimeoutTimer;
    NSMutableArray *_pendingRequests;
}


@property (nonatomic) unsigned int deviceType; // ivar: _deviceType
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) RPCompanionLinkDevice *rpDevice; // ivar: _rpDevice


-(id)initWithRapportDevice:(id)arg0 queue:(id)arg1 ;
-(void)_activateSessionClientWithForceL2CAP:(BOOL)arg0 ;
-(void)_forceBLEDiscoverytoSendRequestID;
-(void)_startDiscoveryExitTimer;
-(void)_startResponseTimeoutTimer;
-(void)activateSessionClient;
-(void)addRequestToQueue:(id)arg0 ;
-(void)invalidate;
-(void)sendNextRequest;


@end


#endif