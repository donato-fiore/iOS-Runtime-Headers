// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANRAPPORTCONNECTION_H
#define ANRAPPORTCONNECTION_H

@class NSArray, NSMutableDictionary, RPCompanionLinkClient, NSString, NSMapTable, NSDate, RPCompanionLinkDevice;
@protocol ANRapportConnectionProvider, ANRapportConnectionDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ANRapportConnection : NSObject <ANRapportConnectionProvider>



@property (retain) NSArray *activeDevices; // ivar: _activeDevices
@property (retain) NSMutableDictionary *clients; // ivar: _clients
@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient; // ivar: _companionLinkClient
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ANRapportConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMapTable *deviceDelegatesToQueues; // ivar: _deviceDelegatesToQueues
@property (readonly, nonatomic) NSArray *devices;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTimerSuspended; // ivar: _isTimerSuspended
@property (retain) NSDate *lastScanStartTimestamp; // ivar: _lastScanStartTimestamp
@property (readonly, nonatomic) RPCompanionLinkDevice *localDevice;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *rapportQueue; // ivar: _rapportQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


+(id)sharedConnection;
-(BOOL)_needsScan;
-(CGFloat)_remainingScanTimeInterval;
-(id)activateLinkWithOptions:(NSUInteger)arg0 ;
-(id)init;
-(id)sendMessage:(id)arg0 device:(id)arg1 responseHandler:(id)arg2 ;
-(void)_cancelTimer;
-(void)_decrementMessageCountForCompanionLinkClient:(id)arg0 ;
-(void)_executeBlockForDelegates:(id)arg0 ;
-(void)_handleLinkInvalidation;
-(void)_handleTimerExpired;
-(void)_incrementMessageCountForCompanionLinkClient:(id)arg0 ;
-(void)_linkForDevice:(id)arg0 handler:(id)arg1 ;
-(void)_notifyDeviceDelegatesConnectionDidFindDevice:(id)arg0 ;
-(void)_notifyDeviceDelegatesConnectionDidLoseDevice:(id)arg0 ;
-(void)_registerHandlers;
-(void)_registerHomeLocationStatusRequestHandler;
-(void)_registerMessageRequestHandler;
-(void)_sendDailyRequest:(id)arg0 handler:(id)arg1 ;
-(void)_sendHomeLocationStatusRequestToDevice:(id)arg0 handler:(id)arg1 ;
-(void)_sendMessage:(id)arg0 linkClient:(id)arg1 handler:(id)arg2 ;
-(void)_setupLink:(id)arg0 ;
-(void)_simulateDeliveryFailureForMessage:(id)arg0 ;
-(void)_startTimer;
-(void)_tearDownLink;
-(void)_updateDevices;
-(void)activateLinkWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)addDeviceDelegate:(id)arg0 queue:(id)arg1 ;
-(void)deactivateLinkWithOptions:(NSUInteger)arg0 ;
-(void)registerDailyRequest:(id)arg0 ;
-(void)sendDailyRequest:(id)arg0 handler:(id)arg1 ;
-(void)sendHomeLocationStatusRequestToDevice:(id)arg0 handler:(id)arg1 ;


@end


#endif